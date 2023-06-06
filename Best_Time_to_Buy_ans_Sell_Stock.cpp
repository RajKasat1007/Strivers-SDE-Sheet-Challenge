#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int ans=0,mini=INT_MAX;
    for(int i=0;i<prices.size();i++){
        if(prices[i]<mini){
            mini=prices[i];
        }
        int newp=prices[i]-mini;
        ans=max(ans,newp);
    }
    return ans;
}
