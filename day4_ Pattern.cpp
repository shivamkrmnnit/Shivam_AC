/*Write a program to create inverted hollow triangle star pattern of size n
*    *    *    *    *    *    * 
   *                           *
        *                *
              *     *
                 *
  */
  
 #include<bits\stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i += 2){
        for (int j = 0; j < 2*n; j++)
        {
            if(i == 0 && j%2 == 0){
                  cout<<"*";
            }
            else if((i!=0) &&(i == j+1 || i == (2*n-1)-j)){cout<<"*";}    
            else cout<<" ";   
              
        }
        cout<<endl;  
         
    }
    for(int i=0;i<n;i++){
        if(i == n -1)cout<<"*";
        else cout<<" ";
    }

}
  
  
  //TC - O(n^2)
