#include <iostream>
using namespace std;

int main(){
    int rows,coloumns;
    cout<<"Enter no of rows and coloumns : ";
    cin>>rows>>coloumns;
    cout<<"Enter matrix elements : ";
    int matrix[rows][coloumns];
    
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<coloumns;j++){
            cin>>matrix[i][j];
        }
    }

    int arr[rows];
    for (int i=0;i<rows;i++){
        arr[i]=0;
        for (int j=0;j<coloumns;j++){
            arr[i]+=matrix[i][j];

        }
    }

    int max=arr[0];
    for(int i=0;i<rows;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<"infinite norm : "<<max;

}