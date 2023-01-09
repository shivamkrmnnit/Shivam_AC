//Given a non-negative integer N. The task is to check if N is a power of 2. More formally, check if N can be expressed as 2x for some x.

//https://practice.geeksforgeeks.org/problems/power-of-2-1587115620/1?fbclid=IwAR2P11LV-HEN4ikBHI-I_fwjors0Ua1ZYrcNsMKpn1c3cjan3AikuBxIqrc

 bool isPowerofTwo(long long n){
        
        // Your code here 
        long long int a = 1;
    while(a<=n){
       if(a == n)return 1;
       a = a*2;
      // n = n/2;
      // if(n % 2 == 1)return 0;
    }
    
    return 0;
    }
