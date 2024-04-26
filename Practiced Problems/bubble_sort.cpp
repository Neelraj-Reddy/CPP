#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements : ";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"unsorted array :";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout<<"sorted array :";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}