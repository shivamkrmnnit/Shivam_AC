//Given an array arr[] of N positive integers. Push all the zeros of the given array to the right end of the array while maitaining the order of non-zero elements.

//https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=move-all-zeroes-to-end-of-array&fbclid=IwAR0Yy6XMKuiIP0LuJ51gOn9GlPW1aWamT63YATCp1QOVDiw_zcIkPuU8oHc

class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	   int i =0;
	   int j =0;
	  for(int i =0;i<n;i++){
	      if(arr[i]!= 0){
	          swap(arr[j], arr[i]);
	          j++;
	      }
	  }
	}
};
