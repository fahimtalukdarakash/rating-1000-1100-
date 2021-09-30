#include<iostream>
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
           optimize();
           string s;
           cin>>s;
           stack<char> c;
           if(s[0]==')'|| s[0]=='}' || s[0]==']')
           {
                      cout<<"Not balanced bracket"<<endl;
                      return 0;
           }
           for(int i=0;i<s.size();i++)
           {
                      if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                                 {
                                            c.push(s[i]);
                                 }
                                 else{
                                            if(c.empty())
                                                       {
                                                                  cout<<"Not balanced bracket"<<endl;
                                                                  return 0;
                                                       }
                                            else if((c.top()=='(' && s[i]==')')|| (c.top()=='{' && s[i]=='}') || c.top()=='[' && s[i]==']')
                                                       {
                                                                  c.pop();
                                                       }

                                                       else
                                                       {
                                                                  cout<<"Not balanced bracket"<<endl;
                                                                  return 0;
                                                       }
                                 }
           }
           if(c.empty())
           {
               cout<<"Balanced bracket"<<endl;
           }
           else
           {
                      cout<<"Not balanced bracket"<<endl;
           }
           return 0;
}
