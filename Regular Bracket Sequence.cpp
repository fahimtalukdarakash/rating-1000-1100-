#include<iostream>
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
           int t;
           cin>>t;
           while(t--)
           {
                      string s;
                      cin>>s;
                      if(s.size()%2==0 && s[0]!=')' && s[s.size()-1]!='(')
                      {
                                 cout<<"YES"<<endl;
                      }
                      else
                      {
                                 cout<<"NO"<<endl;
                      }
           }
           return 0;
}
