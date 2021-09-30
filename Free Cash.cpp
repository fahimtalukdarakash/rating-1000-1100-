#include<iostream>
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
           optimize();
           int n,a,b,cnt=0,c=0;
           cin>>n;
           vector<pair<int,int>> s;
           for(int i=1;i<=n;i++)
           {
                      cin>>a>>b;
                      s.push_back({a,b});
           }
           for(int i=0;i<s.size()-1;i++)
           {
                      if(s[i]==s[i+1])
                      {
                                 cnt++;
                                 c=max(c,cnt);
                      }
                      else
                      {
                                 cnt=0;
                      }
           }
           cout<<c+1<<endl;
           return 0;
}
