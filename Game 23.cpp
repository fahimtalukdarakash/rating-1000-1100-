#include<iostream>
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
           optimize();
           long long n,m,total=0,a;
           cin>>n>>m;
           if(n==m)
           {
                      cout<<0<<endl;
           }
           else
           {
                      if(m%n!=0)
                      {
                                 cout<<-1<<endl;
                      }
                      else{
                           a=m/n;
                           while(a%3==0)
                           {
                                      total++;
                                      a=a/3;
                           }
                           while(a%2==0)
                           {
                                      total++;
                                      a=a/2;
                           }
                           if(a==1)
                           {
                                      cout<<total<<endl;
                           }
                           else
                           {
                                      cout<<-1<<endl;
                           }
                      }
           }
           return 0;
}
