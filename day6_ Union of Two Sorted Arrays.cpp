//Union of two arrays can be defined as the common and distinct elements in the two arrays.
//https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?fbclid=IwAR3NTsb0-Ldah6QSQj7oVYk9jx4GxfXGkxSoSKVW0hQPcvmqIcm_FGVlUZs

vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int>ans;
        vector<int>v;
        for(int i=0;i<n;i++){
            ans.push_back(arr1[i]);
        }
        for(int i=0;i<m;i++){
            ans.push_back(arr2[i]);
        }
        sort(ans.begin(),ans.end());
        v.push_back(ans[0]);
        for(int i=1;i<n+m;i++){
            if(ans[i-1]== ans[i])continue;
            v.push_back(ans[i]);
        }
        return v;
    }
