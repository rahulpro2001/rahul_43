class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0,high = (matrix.size()*matrix[0].size())-1;
        int n = matrix[0].size();
        while(l<=high)
        {
            int mid = (l+high)/2;
            if(matrix[mid/n][mid%n]==target) return true;
            else if(matrix[mid/n][mid%n]<target) l = mid+1;
            else high = mid - 1;
        }
        return false;
    }
};