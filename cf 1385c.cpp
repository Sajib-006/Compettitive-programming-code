#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,idx;
    int a[200005];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=0;i<n;i++) scanf("%d",&a[i]);

        idx=n-1;
        while(idx>0 && a[idx]<=a[idx-1]) idx--;
        while(idx>0 && a[idx]>=a[idx-1]) idx--;
        printf("%d\n",idx);

    }
}
