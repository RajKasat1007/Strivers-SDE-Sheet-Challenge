#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int f)
{
 
    map<int,vector<int>>mp;
    int x=0,cnt=0;
    for(int i=0;i<arr.size();i++){
     x^=arr[i];
     if(x==f){
         cnt++;
     }
     int temp=x^f;
     if(mp.find(temp)!=mp.end()){
         cnt+=mp[temp].size();
     }
     mp[x].push_back(i);
    }
    
    return cnt;
}
