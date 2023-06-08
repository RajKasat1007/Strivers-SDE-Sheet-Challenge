#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	int st1=0,st2=0;
	vector<int>ans;
	while(st1<m && st2<n){
		if(arr1[st1]<=arr2[st2]){
			ans.push_back(arr1[st1]);
			st1++;
		}
		else{
			ans.push_back(arr2[st2]);
			st2++;
		}
	}
	while(st1<m){
		ans.push_back(arr1[st1++]);
	}
	while(st2<n){
		ans.push_back(arr2[st2++]);
	}
	return ans;
}
