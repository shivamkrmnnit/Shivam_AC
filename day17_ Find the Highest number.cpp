//Given an array in such a way that the elements stored in array are in increasing order initially and then after reaching to a peak element, the elements stored are in decreasing order. Find the highest element.
//Note: A[i] != A[i+1]


//https://practice.geeksforgeeks.org/problems/find-the-highest-number2259/1?fbclid=IwAR0MfGtyI4SZoQb2-BuwHwveSVXo5Ls2HiIRpxq15QsJgT3imRbDwgxEGPA



int findPeakElement(vector<int>& a) 
    {
        // Code here.
        int greater = 0;
        for(int i=1;i<a.size();i++){
            if(a[i]>a[i-1]){greater = a[i];}
        }
        return greater;
    }
 
