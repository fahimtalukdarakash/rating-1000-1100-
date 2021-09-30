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
                      int n,m,x,y,i,j,sum=0;
                      cin>>n>>m>>x>>y;
                      char a[n][m];
                      for(i=0;i<n;i++)
                      {
                                 for(j=0;j<m;j++)
                                 {
                                            cin>>a[i][j];
                                 }
                      }
                      for(i=0;i<n;i++)
                      {
                                 for(j=0;j<m;j++)
                                 {
                                            if(a[i][j]=='.' && j+1<m && a[i][j+1]=='.')
                                            {
                                                       sum+= (long long) min(2*x,y);
                                                       j++;
                                            }
                                            else if(a[i][j]=='.')
                                            {
                                                       sum+=(long long) x;
                                            }
                                            else
                                            {
                                                       continue;
                                            }
                                 }
                      }
                      cout<<sum<<endl;
           }
           return 0;
}
