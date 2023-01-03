//Given an integer numRows, return the first numRows of Pascal's triangle.
//https://leetcode.com/problems/pascals-triangle/?fbclid=IwAR2NjrecCRNszwHzmzvVHL7QfYVejonBF4P-OSwYtC8m3D92ejR0x7eijKg



class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector< vector<int>>ans(numRows);
        ans[0].push_back(1);
        for(int i=1;i<numRows;i++){
            
            ans[i].push_back(1);
            for(int j=1;j<i;j++){ 
                ans[i].push_back(ans[i-1][j-1]+ans[i-1][j]);
            }
            ans[i].push_back(1);
            
        }
        return ans;

        
    }
};
