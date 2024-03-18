#include<iostream>
using namespace std;

int main(){
    int rows,coloumns;;
    cout<<"Enter no of rows and coloumns : ";
    cin>>rows>>coloumns;
    int matrix[rows][coloumns];
    // int matrix[5][5] = {{10,12,7,3,12},
    //             {3,10,6,2,8},
    //             {18,24,17,6,10},
    //             {15,21,10,8,12},
    //             {1,18,22,4,15}};

    cout<<"Enter matrix elements :";
    
    for(int i=0;i<rows;i++){
        for(int j=0;j<coloumns;j++){
            cin>>matrix[i][j];
        }
    }

    cout<<"Entered matrix is : "<<endl;

    for(int i=0;i<rows;i++){
        for(int j=0;j<coloumns;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<rows;i++){
        int min=matrix[i][0];
        int index = 0;
        for(int j=0;j<coloumns;j++){
            if (matrix[i][j]<min){
                min = matrix[i][j];
                index=j;
            }
        }

        int flag=1;
        for(int k=0;k<rows;k++){
            if (matrix[k][index]>min){
                cout<<"No saddle point at "<<i<<endl;
                flag=0;
                break;
            }
        }

        if (flag==1){
            cout<<"saddle point in " << i << " is "<< min<< endl;
        }
    }

}