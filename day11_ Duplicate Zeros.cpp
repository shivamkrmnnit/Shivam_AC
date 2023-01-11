//Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.

//link - https://leetcode.com/problems/duplicate-zeros/description/?fbclid=IwAR2rOG7Tuo7kEbM_B13xJpwd6g6B0lk9cX_zxFKQfAwlZmU__5BBfUYKIoo

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i,j;
        vector<int>v;
        for(i=0;i<arr.size();i++){
            int temp = arr[i];
            v.push_back(temp);
            if(arr[i]== 0)
                v.push_back(0);
        }

        for(int i=0;i<arr.size();i++){
            arr[i] = v[i];
            
        }
    }
};
