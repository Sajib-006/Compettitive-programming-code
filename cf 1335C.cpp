#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,same=0,diff=0,zero=0;
        cin>>n;
        int a[n+1],freq[n+1];
        for(int i=1;i<=n;i++) freq[i]=0;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            freq[a[i]]++;
        }

        for(int i=1;i<=n;i++)
        {
            if(freq[i]>same) same=freq[i];
            if(freq[i]==0) zero++;
        }
        diff=n-zero;
        cout<<same<<":::"<<diff<<endl;
        if(same==diff) cout<<same-1<<endl;
        else cout<<min(same,diff)<<endl;
    }
}
