#include<iostream>
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
           int t;
           cin>>t;
           while(t--)
           {
                      double n,d;
                      cin>>n;
                      d=ceil(n/4);
                      for(int i=1;i<=n-d;i++)
                      {
                                 cout<<9;
                      }
                      for(int i=1;i<=d;i++)
                      {
                                 cout<<8;
                      }
                      cout<<endl;
           }
           return 0;
}
