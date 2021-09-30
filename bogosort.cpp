#include<iostream>
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
           optimize();
           int t,n;
           cin>>t;
           while(t--)
           {
                      cin>>n;
                      int a[n];
                      for(int i=0;i<n;i++)
                      {
                                 cin>>a[i];
                      }
                      sort(a,a+n,greater<int>());
                      for(int i=0;i<n;i++)
                      {
                                 cout<<a[i]<<" ";
                      }
                      cout<<endl;
           }
           return 0;
}
