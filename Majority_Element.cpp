#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	int cnt=0,curr=0;
	map<int,int>mp;
	for(int i=0;i<n;i++){
		if(cnt==0){
			curr=arr[i];

		}
		if(arr[i]==curr){
			cnt++;
			mp[arr[i]]++;
		}
		else{
			cnt--;
			mp[arr[i]]++;
		}
	}
	return mp[curr]>n/2?curr:-1;
}
