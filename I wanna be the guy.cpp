#include<iostream>
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
           optimize();
           int n,p,q,i,a;
           set<int> s;
           cin>>n;
           cin>>p;
           for(i=1;i<=p;i++)
           {
                      cin>>a;
                      s.insert(a);
           }
           cin>>q;
           for(i=1;i<=q;i++)
           {
                      cin>>a;
                      s.insert(a);
           }

           if(s.size()==n)
           {
                      cout<<"I become the guy."<<endl;
           }
           else{
                      cout<<"Oh, my keyboard!"<<endl;
           }
           return 0;
}
