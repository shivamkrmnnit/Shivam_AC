//Given an array arr[] of size N, check if it is sorted in non-decreasing order or not. 

//https://practice.geeksforgeeks.org/problems/check-if-an-array-is-sorted0701/1?fbclid=IwAR2crWWeQSCp3F-A-OIidKBOT04z59G6DJiOuCzMJD6Tw0O2kiZHZR8ZM5M


class Solution {
  public:
    bool arraySortedOrNot(int arr[], int n) {
        int k = 0;
        for(int i =1;i<n;i++){
            if(arr[i-1]<=arr[i])k = 0;
            else {k =1;break;}
        }
        if(k == 1)return 0;
        else return 1;
        // code here
    }
