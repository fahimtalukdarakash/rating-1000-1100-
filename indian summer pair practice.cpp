#include<iostream>
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
           int n;
           cin>>n;
           vector<pair<string,string>> p(n);
           for(int i=0;i<n;i++)
           {
                     cin>>p[i].first>>p[i].second;
           }
           sort(p.begin(),p.end());
           int sz=unique(p.begin(),p.end())-p.begin();
           cout<<sz<<endl;
           return 0;
}
