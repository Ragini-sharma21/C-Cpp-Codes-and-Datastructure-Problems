class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix.size();
	// Finding Transpose of the Matrix
    for(int i=0; i<m; i++){
        for(int j=0; j<i; j++)
            swap(matrix[i][j], matrix[j][i]);
    }
	// Reversing each row of the Matrix
    for(int r=0; r<m; r++)
        reverse(matrix[r].begin(), matrix[r].end());  // in single iteration , keep row fixed and reverse column
    return;
}

};
