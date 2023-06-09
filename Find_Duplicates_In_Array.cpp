#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	sort(arr.begin(),arr.end());
	for(int i=0;i+1<arr.size();i++){
		if(arr[i]==arr[i+1]) return arr[i];
	}
}
