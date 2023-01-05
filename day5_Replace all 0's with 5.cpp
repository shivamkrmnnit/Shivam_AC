//You are given an integer N. You need to convert all zeroes of N to 5.
//link - https://practice.geeksforgeeks.org/problems/replace-all-0s-with-5/1?fbclid=IwAR2lDJQBp_94nwpcEWnJee_yczBBiFVAl7MMTAxEpy058rIQVbFFa1eXR




int convertFive(int n) {
    // Your code here
    int y,x=0,b;
    int t=1;
    for(int i =0 ;n !=0 ;i++,t= t*10)
    {
       y = n%10;
       if(y == 0)y=5;
       x = x+y*t;
        b = n/10;
        n =b;
    }
    return x;
}
