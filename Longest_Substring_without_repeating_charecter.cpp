#include <bits/stdc++.h> 
int uniqueSubstrings(string s)
{
    int ans=0;
    map<char,int>mp;
    int i=0,j=0,n=s.length();
    while(i<n){
        while(j<i && mp.find(s[i])!=mp.end()){
         mp[s[j]]--;
         if(mp[s[j]]==0){
             mp.erase(s[j]);
         }
         j++;
        }
        mp[s[i]]++;

        ans=max(ans,i-j+1);
        i++;
    }
    return ans;
}
