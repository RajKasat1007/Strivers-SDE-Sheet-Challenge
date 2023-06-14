#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) {
    sort(arr.begin(),arr.end());
    for(int i=0;i<n;i++){
        long long tar1=target-arr[i];
        for(int j=i+1;j<n;j++){
            long long tar2=tar1-arr[j];
            int lo=j+1,hi=n-1;
            while(lo<hi){
                if(arr[lo]+arr[hi]==tar2){
                    return "Yes";
                }
                else if(arr[lo]+arr[hi]>tar2){
                    hi--;
                }
                else{
                    lo++;
                }
            }
        }
    }
    return "No";
}
