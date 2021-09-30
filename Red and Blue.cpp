#include<iostream>
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
           optimize();
           int t;
           cin>>t;
           while(t--)
           {
                      int n,m;
                      cin>>n;
                      vector<int> v(n);
                      for(int &x:v)
                      {
                                 cin>>x;
                      }
                      cin>>m;
                      vector<int> v2(m);
                      for(int &x:v2)
                      {
                                 cin>>x;
                      }
                      partial_sum(v.begin(),v.end(),v.begin());
                      partial_sum(v2.begin(),v2.end(),v2.begin());
                      cout << max(0, *max_element(v.begin(), v.end())) + max(0, *max_element(v2.begin(), v2.end())) << endl;
           }
           return 0;
}
