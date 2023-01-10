//Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array(In Place).
//In other words, arrange the elements into a sequence such that arr[1] >= arr[2] <= arr[3] >= arr[4] <= arr[5].....


//link - https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1?fbclid=IwAR2uVeA6QUEcw6EMocv-hxMD1vhaGhopTGHDTt2XJ64hIpsvWjoG-hOl5-U

void convertToWave(int n, vector<int>& arr){
        
        // Your code here
        for(int i =1;i<arr.size();i= i+2){
            swap(arr[i-1],arr[i]);
        }
    }
