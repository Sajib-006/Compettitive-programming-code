#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,teams,cnt;
    int a[100005];
    cin>>t;
    while(t--)
    {
        teams=0;
        cnt=0;
        cin>>n>>x;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n,greater<int>());
        for(int i=0;i<n;i++)
        {
            if(a[i]>=x) teams++;
            else{
                cnt++;
                if(a[i]*cnt >=x) teams++,cnt=0;
            }
        }
        cout<<teams<<endl;

    }
}
