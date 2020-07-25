#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,init;
    long long ans;
    string str;
    cin>>t;
    while(t--)
    {
        init=0;
        ans=0;

        cin>>str;
        n=str.size();
        int cum[n];

        if(str[0]=='+') cum[0]=1;
        else cum[0]=-1;

        for(int i=1; i<n; i++)
        {
            if(str[i]=='+') cum[i]=cum[i-1]+1;
            else cum[i]=cum[i-1]-1;
        }
//for(int i=0; i<n; i++) cout<<cum[i]<<" ";
        int idx=0;
        while(1)
        {
            for(; idx<n; idx++)
            {
                if(init+cum[idx]==-1) {
                    ans+=idx+1;
                    //cout<<init<<": "<<idx<<endl;
                    break;
                }
            }
            if(idx==n){
                ans+=n;
                break;
            }
            init++;
        }
        cout<<ans<<endl;

    }
}
