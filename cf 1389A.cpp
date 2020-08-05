#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,l,r,x,y;

    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        if(r<2*l) cout<<"-1 -1"<<endl;
        else cout<<l<<" "<<2*l<<endl;
    }
}
