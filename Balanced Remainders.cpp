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
                      int n,i,c[3]={0};
                      cin>>n;
                      int a[n];
                      int b=n/3;
                      for(i=0;i<n;i++)
                      {
                                 cin>>a[i];
                                 c[a[i]%3]++;
                      }
                      int ans=0;

                      for (int i = 0; i < 2; i++)
                      {


                         if (c[0] > b)
                         {
                           ans += c[0] - b;

                           c[1] += c[0] - b;
                           c[0] = b;
                         }

                              if (c[1] > b)
                              {
                                  ans += c[1] - b;

                                  c[2] += c[1] - b;
                                  c[1] = b;
                              }

                              if (c[2] > b)
                              {
                                  ans += c[2] - b;
                                  c[0] += c[2] - b;
                                  c[2] = b;
                              }
                              }
                      cout<<ans<<endl;
           }
           return 0;
}
