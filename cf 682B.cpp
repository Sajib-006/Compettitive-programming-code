#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,last=0;
    int arr[100005];
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    sort(arr, arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]>last) arr[i]=last+1;
        else arr[i]=last;
        last=arr[i];
    }
    printf("%d\n",last+1);


}
