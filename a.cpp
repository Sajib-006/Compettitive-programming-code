#include<stdio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    printf("Hello world.\n");
    cout<<"hi\n";
    int a[6]; 
    a[0]=5;
    a[1]=8;
    a[2]=2;
    sort(a+0,a+2);
    for(int i=0;i<3;i++) cout<<a[i]<<" ";

}