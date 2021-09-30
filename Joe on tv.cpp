#include<iostream>
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
           optimize();
           float n,sum=0,a;
           cin>>n;
           for(int i=1;i<=n;i++)
           {
                      a=1.0/i;
                      sum+=a;
           }
           cout<<sum<<endl;
           return 0;
}
