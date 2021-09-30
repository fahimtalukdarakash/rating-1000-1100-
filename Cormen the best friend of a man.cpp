#include<iostream>
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
           int n,k,i;
           int s=0;
           cin>>n>>k;
           int a[n];
           for(i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           for(i=1;i<n;i++)
           {
                      if(a[i]+a[i-1]>=k)
                      {
                                 continue;
                      }
                      else
                      {
                                 s=s+(k-a[i]-a[i-1]);
                                 a[i]=a[i]+max(0,k-a[i]-a[i-1]);
                      }
           }
           cout<<s<<endl;
           for(i=0;i<n;i++)
           {
                      cout<<a[i]<<" ";
           }
           cout<<endl;
           return 0;
}
