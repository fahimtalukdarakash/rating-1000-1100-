#include<iostream>
#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
int main()
{
           optimize();
           int n,count=0;
           cin>>n;
           long long a[n];
           for(int i=0;i<n;i++)
           {
                      cin>>a[i];
           }
           sort(a,a+n);
           for (int i=1;i<n-1;i++)
           {
                      if (a[i-1]+a[i]>a[i+1])
                      {
                                 cout << "YES";
                                 return 0;
                      }
           }
           cout << "NO";
}
