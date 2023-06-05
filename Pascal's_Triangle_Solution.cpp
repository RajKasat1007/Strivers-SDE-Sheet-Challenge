#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
   vector<vector<long long>>ans;
   for(int i=0;i<n;i++){
     vector<long long>row(i+1,1);
     for(int j=1;j<i;j++){
       row[j]=ans[i-1][j]+ans[i-1][j-1];
     }
     ans.push_back(row);
   }
   return ans;
}
