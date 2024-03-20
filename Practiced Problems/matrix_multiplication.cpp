#include<iostream>
using namespace std;

int main(){
    int row1,column1,row2,column2;
    cout<<"Enter rows and columns of matrix 1 :";
    cin>>row1>>column1;
    cout<<"Enter rows and coloumns of matrix 2 :";
    cin>>row2>>column2;

    if(column1==row2){

        int matrix1[row1][column1],matrix2[row2][column2];

        cout<<"matrix 1 elements : "<<endl;
        for(int i=0;i<row1;i++){
            for(int j=0;j<column1;j++){
                cin>>matrix1[i][j];
            }
        }

        cout<<"matrix 2 elements : "<<endl;
        for(int i=0;i<row2;i++){
            for(int j=0;j<column2;j++){
                cin>>matrix2[i][j];
            }
        }

        int multiplied_matrix[row1][column2];

        // Calculation part

        for(int i=0; i<row1;i++){
            for(int j=0;j<column2;j++){
                int sum=0;
                for(int k=0;k<column1;k++){
                    sum+=matrix1[i][k]*matrix2[k][j];
                }
                multiplied_matrix[i][j] = sum;
            }
        }

        // printing part
        cout<<"Output matrix : "<<endl;
        for(int i=0;i<row1;i++){
            for(int j=0;j<column2;j++){
                cout<<multiplied_matrix[i][j]<<" ";
            }
            cout<<endl;
        }

    }
    else{
        cout<<"Not matching dimensions. ";
    }
}