#include<iostream>
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
           optimize();
           int a,b,cnt=0,sum=0;
           cin>>a>>b;
           for(int i=1;i<=a;i++)
           {
                      cnt++;
                      if(cnt==b)
                      {
                                 sum++;
                                 cnt=1;
                      }
           }
           cout<<sum+a<<endl;
           return 0;
}
