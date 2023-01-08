//Given a sorted array A[] of N positive integers having all the numbers occurring exactly twice, except for one number which will occur only once. Find the number occurring only once.

//https://practice.geeksforgeeks.org/problems/element-appearing-once2552/0?company[]=Qualcomm&company[]=Qualcomm&difficulty[]=1&page=1&query=company[]Qualcommdifficulty[]1page1company[]Qualcomm&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=element-appearing-once&fbclid=IwAR2z_GMgEWzCOUVokdghPdNKT66UDOt1WPSsBrrwBkkmttauTGpu7KtzbME

class Solution{
public:	
	int search(int A[], int N){
	    //code
	    
	      if(A[0] != A[1] )return A[0];
	    for(int i =1;i<N;i++){
	        if(i< N-1)
	        {if(A[i] != A[i-1] && A[i] != A[i+1])return A[i];}
	        else  
	        {
	            if(A[i] != A[i-1] )return A[i];
	        }
	        
	          
	        
	        
	    }
	    return -1;
	}
};
