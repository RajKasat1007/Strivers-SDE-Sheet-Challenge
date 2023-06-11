bool searchMatrix(vector<vector<int>>& mat, int target) {
        int i=0,j=mat[0].size()-1;
        while(i<mat.size() && j>=0){
            if(mat[i][j]==target){
                return true;
            }
            else if(mat[i][j]>target){
                j--;
            }
            else{
                i++;
            }
        }
}
