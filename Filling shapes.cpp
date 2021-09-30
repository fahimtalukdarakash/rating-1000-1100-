#include<iostream>
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
           optimize();
           int n;
           cin>>n;
           if(n%2==0)
           {
                      int a;
                      a=pow(2,n/2);
                      cout<<a<<endl;
           }
           else
           {
                      cout<<0<<endl;
           }
           return 0;
}
