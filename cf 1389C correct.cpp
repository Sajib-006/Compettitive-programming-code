#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

int main()
{
    int tt,n,cnt,mx,f;
    string s,t;

    cin>>tt;
    while(tt--)
    {
        mx=0;

        unordered_map <string,int> um;
        //cnt=2;
        cin>>s;
        n=s.size();
        //cout<<n<<endl;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                t="";
                t+=i+'0';
                t+=j+'0';
                um[t]=0;
            }
        }
        //cout<<"size:"<<um.size()<<endl;
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                f=0;
                for(int k=0;k<n;k++)
                {//cout<<"i: "<<i<<"  j: "<<j<<endl;
                    if(i==j && s[k]==i+'0') {
                        t="";
                        t+=i+'0';
                        t+=j+'0';
                        um[t]+=1;
                    }
                    else if(f==0 && s[k]==i+'0') f=1;
                    else if(f==1 && s[k]==j+'0'){
                        f=0;
                        t="";
                        t+=i+'0';
                        t+=j+'0';
                        um[t]+=2;
                        //cout<<"string "<<t<<": "<<um[t]<<endl;
                    }
                }
            }
        }
        //for(auto u : um) cout<<u.first<<" "<<u.second<<endl;
        for(auto u : um) if(u.second>mx) mx=u.second;
        cout<<n-mx<<endl;
    }
}

