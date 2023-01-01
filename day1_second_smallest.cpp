/*Given an array of integers, your task is to find the smallest and second smallest element
 in the array. If smallest and second smallest do not exist, print -1.*/

 //Question link https://practice.geeksforgeeks.org/problems/find-the-smallest-and-second-smallest-element-in-an-array3226/1?fbclid=IwAR2sIJiqzF80oU30QdZWzTCpWFaSFTa-MfAOEnMgwZbpXzYDbXMN6Ch6eEY




vector<int> minAnd2ndMin(int a[], int n) {
        vector<int>ans;

        int temp = 0;
        sort(a, a + n);
        for(int i=1;i<n;i++){
            if(a[0]<a[i] ){temp = a[i];break;}
        }
        if(temp != 0 )
        {
            ans.push_back(a[0]);
            ans.push_back(temp);   
        }
        else{
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
    
}
