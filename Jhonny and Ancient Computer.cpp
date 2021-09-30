#include<iostream>
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
           optimize();
           long long t,a,b;
           cin>>t;
           while(t--)
           {
                      cin>>a>>b;
                      long long total=0;
                      if(a==b)
                      {
                                 cout<<0<<endl;
                      }
                      else
                      {
                      if(a>b)
                      {
                                 swap(a,b);
                      }
                      long long n;
                      if(b%a!=0)
                      {
                                 cout<<-1<<endl;
                      }
                      else{
                          n=b/a;
                          while(n%8==0)
                          {
                                     total++;
                                     n=n/8;
                          }
                          while(n%4==0)
                          {
                                     total++;
                                     n=n/4;
                          }
                          while(n%2==0)
                          {
                                     total++;
                                     n=n/2;
                          }
                          if(n==1)
                          {
                                     cout<<total<<endl;
                          }
                          else
                          {
                                     cout<<-1<<endl;
                          }
                      }
                      }
           }
           return 0;
}
