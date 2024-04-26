#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter a,b,c : ";
    cin>>a>>b>>c;

    int discriminant = b*b - 4*a*c;

    if (discriminant==0){
        cout<< "only one root : "<< -b/(2*a)<<endl;
    }
    else if (discriminant>0){
        cout<<"2 unique roots : " << -b + pow(discriminant,0.5) / (2*a) << "," << -b - pow(discriminant,0.5) / (2*a); 
    }
    else{
        cout<<"imaginary roots " ; // << -b + pow(discriminant,0.5) / (2*a) << "," << -b - pow(discriminant,0.5) / (2*a);
    }

}