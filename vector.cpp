#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr[4];
    vector<int> sum[4];
    arr[1].push_back(2);
    arr[1].push_back(3);
    arr[1].push_back(4);
    arr[2].push_back(12);
    arr[2].push_back(13);
    arr[3].push_back(22);
    arr[3].push_back(23);
    arr[3].push_back(24);
    arr[3].push_back(25);
    for(int i=1;i<4;i++)
    {
        sum[i].push_back(0);
        for(vector<int>::iterator itr=arr[i].begin();itr!=arr[i].end();itr++)
        {
            cout<<*itr<<" "<<sum[i].back()<<endl;;
            sum[i].push_back(sum[i].back()+(*itr));
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int i=1;i<4;i++)
    {
        //for(vector<int>::iterator itr=sum[i].begin();itr!=sum[i].end();itr++)
        for(int j=0;j<sum[i].size();j++)
        {
            //int p=*itr;
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
}

