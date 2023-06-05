#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &p, int n)
{
   int k,l;
   for(k=n-2;k>=0;k--){
       if(p[k+1]>p[k]){
           break;
       }
   }
   if(k<0){
       reverse(p.begin(),p.end());
   }
   else{
       for(l=n-1;l>k;l--){
           if(p[l]>p[k]){
               break;
           }
       }
       swap(p[l],p[k]);
       reverse(p.begin()+k+1,p.end());
   }
   
   return p;
}
