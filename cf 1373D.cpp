#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,n,sum,mx,profit;
    int a[200005];
    cin>>t;
    while(t--)
    {
        sum=0;
        mx=0;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i],(i&1)?:sum+=a[i];

        profit=0;
        for(int i=1;i<n-1;i++) profit+=a[i]-a[++i], (profit<0)?profit=0:mx=max(mx,profit);
        profit=0;
        for(int i=0;i<n-1;i++) profit-=a[i]-a[++i], (profit<0)?profit=0:mx=max(mx,profit);

        cout<<sum+mx<<endl;

    }

}
