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

    for (int i=0;i<rows;i++){
        for (int j=i;j<coloumns;j++){
            int temp = matrix[i][j];
            matrix[i][j]=matrix[j][i];
            matrix[j][i]=temp;    
        }
    }

    cout<<"Transpose matrix is : "<<endl;

    for(int i=0;i<rows;i++){
        for(int j=0;j<coloumns;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}