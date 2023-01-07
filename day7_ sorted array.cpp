//Given an array arr[] sorted in ascending order of size N and an integer K. Check if K is present in the array or not.

//https://practice.geeksforgeeks.org/problems/who-will-win-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=who-will-win&fbclid=IwAR2bCBQSrtlSLNoM9lLZ4jV29BSRBtYJzmOjfThPYZecvyteZY-pAlmu5ao

int searchInSorted(int arr[], int N, int K) 
    { 
        int mid,low,high;
        low = arr[0];
        high = arr[N -1];
       // Your code here
       for(int i=0;i<N;i++){
           mid = (low + high)/2;
           if(mid == K)return 1;
           else if(K > mid)low = mid +1;
           else high = mid - 1;
       }
       return -1;
    }
