#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    long long mx,n,k,x;
    long long a[200005];
    cin>>t;
    while(t--)
    {
       mx=0;
       cin>>n>>k;
       for(int i=0;i<n;i++)
       {
           cin>>x;
           (x%k==0)?a[i]=0 : a[i]=k*((x/k)+1)-x;
       }
       sort(a,a+n);
       for(int i=0;i<n;i++)
       {
           if(a[i]==a[i+1] && a[i]!=0)
           {
               int j;
               for(j=0; a[i+j]==a[i+j+1] ;j++)
               {
                   a[i+j] = a[i]+j*k;
                   if(a[i+j]>mx) mx = a[i+j];
               }
               a[i+j] = a[i]+j*k;
               if(a[i+j]>mx) mx = a[i+j];
               i+=j;
           }
           if(a[i]>mx) mx = a[i];

       }
       (mx==0)?cout<<mx<<endl : cout<<mx+1<<endl;
    }
}
