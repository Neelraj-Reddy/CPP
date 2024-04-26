
//  Print the prime numbers upto the first n numbers.



#include<iostream>
#include<math.h>

int main(){
    
    int num,count=0,i=2;
    std::cout<<"Enter the number : ";
    std::cin>>num;
    
    while(count<num){
        
        int flag=1;

        for (int j=2;j<=pow(i,0.5);j++){
            
            if(i%j==0){
                flag=0;
                break;
            }

        }
         
        if (flag==1){
            std::cout<<i<<" ";
            count++;
         }

         i++;
    }

    if(num==0 or num==1){
        std::cout<<"Undefined numbers"<<std::endl;
    }
}