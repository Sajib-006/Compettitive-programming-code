#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,flag=0,inc=0,inc_check=0;
    char a[200005],b[300005];
    cin>>n>>k;
    //cin>>a;
    for(int i=1;i<=n;i++) cin>>a[i];
    //for(int i=1;i<=n;i++) cout<<a[i];
    for(int i=1;i<=n-k;i++)
    {
        for(int j=0;(i+j*k)<=n;j++)
        {
            if(a[i+j*k]>a[i])
            {
                inc_check=1;
                break;
            }
        }
    }
    //cout<<"\ninc_check: "<<inc_check<<endl;
    if(float(k) <= float(n/2.0))
    {
        m=n;
        int i;
        for(i=k;i>0;i--)
        {
            for(int j=0;(i+j*k)<=m;j++)
            {
                //if(i<m-k) b[i+j*k]=a[i];
                //else b[i+j*k]=a[i]+1;
                if(inc==1 || inc_check==0) b[i+j*k]=a[i];
                else if(a[i]=='9' && inc==0 && inc_check==1) b[i+j*k]='0';
                else if(a[i]!='9' && inc==0 && inc_check==1){
                    b[i+j*k]=a[i]+1;

                }
                //cout<<"b "<<i+j*k<<": "<<b[i+j*k]<<endl;
            }
            if(a[i]!='9' && inc==0 && inc_check==1) inc=1;
        }
        if(i==0 && inc==0 && inc_check==1){
            m++;
            for(int i=0;i<m;i++) b[i]='0';
            for(int j=0;(1+j*k)<=m;j++) b[1+j*k]='1';
        }

    }
    else{
        m=n;
        int i;
        for(i=k;i>m-k;i--)
        {
            if(inc==1 || inc_check==0) b[i]=a[i];
            else if(a[i]=='9' && inc==0 && inc_check==1) b[i]='0';
            else if(a[i]!='9' && inc==0 && inc_check==1){
                b[i]=a[i]+1;
                inc=1;
            }
        }

            for(i=m-k;i>0;i--)
            {
                for(int j=0;(i+j*k)<=m;j++)
                {
                   if(inc==1 || inc_check==0) b[i+j*k]=a[i];
                   else if(a[i]=='9' && inc==0 && inc_check==1) b[i+j*k]='0';
                   else if(a[i]!='9' && inc==0 && inc_check==1){
                        b[i+j*k]=a[i]+1;

                   }
                }
                if(a[i]!='9' && inc==0 && inc_check==1) inc=1;
            }
            if(i==0 && inc==0 && inc_check==1)
            {
                m++;
                for(int t=0;t<m;t++) b[t]='0';
                b[1]=b[k+1]='1';
            }


    }
    cout<<m<<endl;
    for(int i=1;i<=m;i++) cout<<b[i];
}

