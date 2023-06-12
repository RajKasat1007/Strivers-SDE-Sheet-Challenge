#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
   map<int,int>mp;
   vector<int>ans;
   for(auto i:arr){
       mp[i]++;
   }
   int n=arr.size();
   for(auto i:mp){
    if(i.second>n/3){
      ans.push_back(i.first);
    }
   }
   return ans;
}
