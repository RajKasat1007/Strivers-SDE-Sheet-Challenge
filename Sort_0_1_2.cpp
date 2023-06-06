#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int *ans=new int[n];
   int st=0;
   for(int i=0;i<n;i++){
      if(arr[i]==0){
         ans[st++]=0;
      }
   }
   for(int i=0;i<n;i++){
      if(arr[i]==1){
         ans[st++]=1;
      }
   }
   for(int i=0;i<n;i++){
      if(arr[i]==2){
         ans[st++]=2;
      }
   }
 
   for(int i=0;i<n;i++){
      arr[i]=ans[i];
   }
}
