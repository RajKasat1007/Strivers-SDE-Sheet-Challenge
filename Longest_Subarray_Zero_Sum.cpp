#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {
   map<int,int>mp;
   vector<int>ans;
   int cnt=0;
   for(int i=0;i<arr.size();i++){
     cnt+=arr[i];
     ans.push_back(cnt);
   }
   int maxi=0;
   for(int i=0;i<ans.size();i++){
     if(ans[i]==0){
       maxi=i+1;
     }
     else if(mp.find(ans[i])!=mp.end()){
       maxi=max(maxi,i-mp[ans[i]]);
     }
     else{
       mp[ans[i]]=i;
     }
   }
   return maxi;
  
}
