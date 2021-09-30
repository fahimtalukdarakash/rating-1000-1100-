#include<iostream>
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
           optimize();
           int n,i,a;
           set<int> s;
           cin>>n;
           for(i=1;i<=n;i++)
           {
                    cin>>a;
                    s.insert(a);
           }
           if(s.size()>1)
           {
                      int x = *std::next(s.begin(), 1);
                      cout<<x<<endl;
           }
           else
           {
                      cout<<"NO"<<endl;
           }
           return 0;
}
