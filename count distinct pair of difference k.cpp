#include<iostream>
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
           int n,k,i,j,count=0;
           cin>>n>>k;
           int a[n];
           for(i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           sort(a,a+n);
           vector<pair<int,int>> v;
           for(i=0;i<n-1;i++)
           {
                      v.push_back({a[i],a[i+1]});
           }
           sort(v.begin(),v.end());
           int sz = unique(v.begin(), v.end())-v.begin();
           for(i=0;i<sz;i++)
           {
                      int d=abs(v[i].first-v[i].second);
                      if(d==k)
                      {
                                 count++;
                      }
                      else
                      {
                                 continue;
                      }
           }
           cout<<count<<endl;
           return 0;
}
