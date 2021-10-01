#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main()
{
           optimize();
           long long t;
           cin>>t;
           while(t--)
           {
                      long double n;
                      long long sr1,sr2;
                      cin>>n;
                      if(n==2)
                      {
                                 cout<<"YES"<<endl;
                      }
                      else
                      {
                                 long double j,k;
                                 j=n/2;
                                 k=n/4;
                                 sr1=sqrt(j);
                                 sr2=sqrt(k);
                                 if(sr1*sr1==j || sr2*sr2==k)
                                 {
                                            cout<<"YES"<<endl;
                                 }
                                 else
                                 {
                                            cout<<"NO"<<endl;
                                 }
                      }
           }
           return 0;
}
