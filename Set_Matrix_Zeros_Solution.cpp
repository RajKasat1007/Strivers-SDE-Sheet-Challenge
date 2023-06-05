#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &mat)
{
   map<int,int>ro,co;
   for(int i=0;i<mat.size();i++){
	   for(int j=0;j<mat[0].size();j++){
		   if(mat[i][j]==0){
			   ro[i]++;
			   co[j]++;
		   }
	   }
   }
   for(auto i:ro){
	   int k=i.first;
	   for(int j=0;j<mat[0].size();j++){
		   mat[k][j]=0;
	   }
   }
   for(auto i:co){
	   int k=i.first;
	   for(int j=0;j<mat.size();j++){
		   mat[j][k]=0;
	   }
   }
}
