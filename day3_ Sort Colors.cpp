//Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

//We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

//link - https://leetcode.com/problems/sort-colors/description/?fbclid=IwAR1J-J0E2BRuE49ehvDzQlU1o1aflXqy9z8XskS4ZolZmt_nZ0S9iZr1HY4


class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        for(int i =0;i<nums.size();i++)
        {
           for(int j =i+1;j<nums.size();j++){
               if(nums[i]>nums[j]){swap(nums[i],nums[j]);}
           }
        }
            

       
    }
};
