#include <bits/stdc++.h> 
static int ans=0;
int helper(long long *arr,int st,int mid,int en){
    int cnt=0;
    vector<long long>ne;
    int id1=st,id2=mid+1;
    while(id1<=mid && id2<=en){
        if(arr[id2]<arr[id1]){
            cnt+=(mid-id1+1);
            ne.push_back(arr[id2]);
            id2++;
        }
        else{
            ne.push_back(arr[id1]);
            id1++;
        }
    }
    while(id1<=mid){
        ne.push_back(arr[id1++]);
    }
    while(id2<=en){
        ne.push_back(arr[id2++]);
    }
    int i=0;
    for(int j=st;j<=en;j++){
        arr[j]=ne[i++];
    }
    return cnt;
}

int mergesort(long long *arr,int st,int en){
        int ans=0;
    if(st>=en) return ans;

    int mid=st+(en-st)/2;
    ans+=mergesort(arr,st,mid);
    ans+=mergesort(arr,mid+1,en);
    ans+=helper(arr,st,mid,en);
    return ans;
}
long long getInversions(long long *arr, int n){
  
   return mergesort(arr,0,n-1);
   
}
