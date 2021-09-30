#include<iostream>
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
           optimize();
           int t;
           cin>>t;
           while(t--)
           {
                      long long a,b,c;
                      cin>>a>>b>>c;
                      if(a<c)
                      {
                                 cout<<1;
                      }
                      else
                      {
                                 cout<<-1;
                      }
                      cout<<" ";
                      if(a*b>c)
                      {
                                 cout<<b;
                      }
                      else
                      {
                                 cout<<-1;
                      }
                      cout<<endl;
           }
}
