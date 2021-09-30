#include<iostream>
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl '\n'
using namespace std;
int main()
{
           optimize();
           int n,a,ans=0;
           map<int,int> m;
           cin>>n;
           for(int i=1;i<=n;i++)
           {
                      cin>>a;
                      m[a]++;
                      ans=max(ans,m[a]);
           }
           cout<<ans<<endl;
           return 0;
}
