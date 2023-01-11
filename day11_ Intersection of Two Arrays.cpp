//Given two integer arrays nums1 and nums2, return an array of their intersection. Each element in the result must be unique and you may return the result in any order.

//https://leetcode.com/problems/intersection-of-two-arrays/description/?fbclid=IwAR2P1MTp_8vV0L6dUsO-I4E5jI-oVHhCgWhxui0Ia-F83WVKkntBl_OEJSQ


class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        vector<int>v;
        for(int i=0;i<nums1.size();i++){
            for(int j =0;j<nums2.size();j++){
                if(nums1[i]==nums2[j])ans.push_back(nums1[i]);
            }
        }
        for(int i=0;i<ans.size();i++){
            int flag =0;
            for(int j=i+1;j<ans.size();j++){
                if(ans[i]==ans[j]){flag = 1;break;}
            }
            if(flag == 0)v.push_back(ans[i]);
        }
        return v;
    }
};
