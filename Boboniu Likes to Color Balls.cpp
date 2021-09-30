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
                      long long a,b,c,d;
                      cin>>a>>b>>c>>d;
                      if(a%2+b%2+c%2+d%2<=1)
                      {
                                 cout<<"YES"<<endl;
                      }
                      else if(a>0 && b>0 && c>0 && ((a-1)%2+(b-1)%2+(c-1)%2+(d+1)%2)<=1)
                      {
                                 cout<<"YES"<<endl;
                      }
                      else
                      {
                                 cout<<"NO"<<endl;
                      }
           }
}
