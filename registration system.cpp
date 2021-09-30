#include<iostream>
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl '\n'
using namespace std;
int main()
{
           optimize();
           int n;
           cin>>n;
           map<string,int> cnt;
           for(int i=1;i<=n;i++)
           {
                      string s;
                      cin>>s;
                      cnt[s]++;
                      if(cnt[s]>1)
                      {
                                 cout<<s<<cnt[s]-1<<endl;
                      }
                      else
                      {
                                 cout<<"OK"<<endl;
                      }
           }
}
