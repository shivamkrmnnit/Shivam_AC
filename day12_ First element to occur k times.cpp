//Given an array of N integers. Find the first element that occurs at least K number of times.

//link - https://practice.geeksforgeeks.org/problems/first-element-to-occur-k-times5150/1?fbclid=IwAR0n6OH77RuLdlk5PzyPBcooUsrl67qINDHCKEaZAsdnv-70NRMptVYOKfM

int firstElementKTime(int a[], int n, int k)
    {
    map<int,int>mp;
        
        for(int i=0;i<n;i++){
            mp[a[i]]++;
            for(auto it:mp){
            if(k == it.second)return it.first;
            }
        }
     
        return -1;
    }
