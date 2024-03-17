
//  Print the sum of squares upto the first n numbers.



#include<iostream>
#include<math.h>

int main(){
    int num,sum=0;
    std::cout<<"Enter the number : ";
    std::cin>>num;

    for(int i=1; i<num ;i++){
        sum+=pow(i,2);
    }

    std::cout<<"sum of squares upto "<<num<<" is "<< sum;
}