
//  Print the sum of squares upto the first n numbers.



#include<iostream>
#include<math.h>

int main(){
    int num,sum=0;
    std::cout<<"Enter the number : ";
    std::cin>>num;

    // Brute force :

    for(int i=1; i<num ;i++){
        sum+=pow(i,2);
    }

    // Formula :
    //  sum = ((n)*(n+1)) / 2                  -----------------> sum of natural numbers
    //  sum = (n * (n+1) * (2*n + 1)) / 6      -----------------> sum of squares
    //  sum = (((n)*(n+1)) / 2) ^ 2            -----------------> sum of cubes

    sum = (num * (num +1) * (2*num + 1)) / 6 ;

    std::cout<<"sum of squares upto "<<num<<" is "<< sum;
}