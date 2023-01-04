//You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

//link - https://leetcode.com/problems/rotate-image/description/?fbclid=IwAR2D5FgvkfMu43gCJi5bVyaoz7AX0YRDPCqHsJUcXPpHqBXZXYs2P3bzxSg


class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int k =0;
        vector<int>v;
        for(int i=0;i<n ;i++){
            for(int j=0;j<i;j++){
              swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i =0;i<n;i++)
            reverse(matrix[i].begin(),matrix[i].end());
        
        
    }
};
