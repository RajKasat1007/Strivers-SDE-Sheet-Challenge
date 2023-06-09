#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	int miss,notmiss;
	map<int,int>mp;
	for(int i=0;i<n;i++){
      mp[arr[i]]++;
	}
	for(int i=1;i<=n;i++){
		if(mp.find(i)==mp.end()){
           miss=i;
		}
		if(mp[i]==2){
			notmiss=i;
		}
	}
	return {miss,notmiss};
}
