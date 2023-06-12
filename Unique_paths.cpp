#include <bits/stdc++.h> 

int helper(int st,int stc,int en,int enc,vector<vector<int>>&dp){
	int ans=0;
	if(st==en && stc==enc){
		return 1;
	}
	if(dp[st][stc]!=-1) return dp[st][stc];
	if(st+1<en+1){
     ans+=helper(st+1,stc,en,enc,dp);
	}
	if(stc+1<enc+1){
		ans+=helper(st,stc+1,en,enc,dp);
	}
	return dp[st][stc]=ans;
}
int uniquePaths(int n, int m) {
	vector<vector<int>>dp(n,vector<int>(m,-1));
	return helper(0,0,n-1,m-1,dp);
}
