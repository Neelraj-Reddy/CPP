#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    
    for(int i = 0; i<num+1; i++){

        for (int m=0; m<i;m++){
            cout<<' ';
        }

        for(int j=1;j<num-i;j++){
            cout<<num-i-j+1;
        }

        for(int j=1;j<num-i+1;j++){
            cout<<j;
        }

        cout<<endl;
    }
}