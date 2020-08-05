#include<bits/stdc++.h>
using namespace std;
int ans;
//int mid;

void f(char a[],int l1,int h1,int l2,int h2,char ch,int moves)
{

    for(int i=l1;i<=h1;i++)
    {
        if(a[i]!=ch) moves++;
    }
    //cout<<"ch: "<<ch<<" "<<l1<<" "<<h1<<" "<<l2<<" "<<h2<<" "<<moves<<endl;
    if(l1<h1)
    {
        int mid=(l2+h2)/2;
        f(a,l2,mid,mid+1,h2,ch+1,moves);
        f(a,mid+1,h2,l2,mid,ch+1,moves);
    }
    else if(l1==h1)
    {
        if(a[l2]!=ch+1) moves++;
        if(moves<ans) ans=moves;
        //cout<<"max: "<<ans<<endl;
    }
}

int main()
{
    long long t,n;
    char a[131077];
    cin>>t;
    while(t--)
    {
        ans=INT_MAX;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        if(n==1 && a[0]=='a') cout<<0<<endl;
        else if(n==1 && a[0]!='a') cout<<1<<endl;
        else{
            f(a,0,(n-1)/2,(n-1)/2+1,n-1,'a',0);
            f(a,(n-1)/2+1,n-1,0,(n-1)/2,'a',0);
            cout<<ans<<endl;
        }

    }
}



