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

    int gap = n; 
    float shrinker = 1.3;

    for (int i =0;i<n;i++){
        gap=gap/shrinker;
        
        if(gap<1){
            gap =1;
        }

        for(int j=0;j<n-gap;j++){
            if (arr[j]>arr[j+gap]){
                int temp = arr[j+gap];
                arr[j+gap] = arr[j];
                arr[j] = temp;
            }
        }
    }


    cout<<"sorted array :";
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}