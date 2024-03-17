#include<iostream>

int main(){
    int num,reversed_num=0;
    std::cout<< "Enter the num : ";
    std::cin>> num;
    int flag = num>0? 1: -1;

    num*=flag;
    while(num>0){
        reversed_num=reversed_num*10 + num%10;
        num/=10;
    }
    std::cout<<"Reversed number is : "<<flag*reversed_num<<std::endl;
}