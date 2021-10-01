#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main()
{
           int t;
           cin>>t;
           while(t--)
           {
                      long double x,y,k,count=0,a;
                      cin>>x>>y>>k;
                      count=count+k;
                      a=ceil((k*y + k -1)/(x-1));
                      count=count+a;
                      cout<<setprecision(20)<<count<<endl;
           }
           return 0;
}
