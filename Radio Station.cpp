#include<iostream>
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl '\n'
using namespace std;
int main()
{
           optimize();
           int n,m;
           map<string,string> s1;
           cin>>n>>m;
           for(int i=1;i<=n;i++)
           {
                      string a,b;
                      cin>>a>>b;
                      b+=';';
                      s1[b]=a;
           }
           for(int i=1;i<=m;i++)
           {
                      string c,d,e;
                      cin>>c>>d;
                      cout<<c<<" "<<d<<" "<<"#"<<s1[d]<<endl;
           }
           return 0;
}
