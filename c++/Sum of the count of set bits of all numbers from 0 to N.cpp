//Given a number N find sum of the count of set bits of all numbers from 0 to N.

#include <bits/stdc++.h>
using namespace std;
int main()
{int t;
cin>>t;
while(t--)
{
  int n,s=0;
  cin>>n;
  for(int i=1;i<=n;i++)
  {s+=__builtin_popcount(i);  }
  cout<<s<<"\n";
}return 0;
}
