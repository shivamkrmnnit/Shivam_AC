//Vaibhav likes to play with numbers and he has N numbers. One day he was placing the numbers on the playing board just to count that how many numbers he has.
//He was placing the numbers in increasing order i.e. from 1 to N. But when he was putting the numbers back into his bag, some numbers fell down onto the floor. 
//He picked up all the numbers but one number, he couldn't find. Now he has to go somewhere urgently, so he asks you to find the missing number.

//link -  https://practice.geeksforgeeks.org/problems/missing-number4257/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=missing-number&fbclid=IwAR0kpp9tc6rYRIduK0jAC_IHOyZtjgmxwS6ioPhgYDR9lxX4oqoWe03kmfU



int missingNumber(int A[], int N)
{
    int sum =0;
    int sum_n = (N*(N +1))/2;
    // Your code goes here
    for(int i = 0;i< N-1;i++){
        sum += A[i];
    }
    return sum_n - sum;
}
