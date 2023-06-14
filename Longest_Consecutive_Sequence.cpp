#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    int ans=1;
    unordered_set<int>st(arr.begin(),arr.end());
    for(auto i:arr){
        if(st.find(i)==st.end()){
            continue;
        }
        st.erase(i);
        int next=i+1,prev=i-1;
        while(st.find(next)!=st.end()){
            st.erase(next++);
        }
        while(st.find(prev)!=st.end()){
            st.erase(prev--);
        }
        ans=max(ans,next-prev-1);
    }
    return ans;
}
