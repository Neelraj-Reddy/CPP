// Functions which differ only in their parameters and local variable data types can be created by a mechanism called function template offered in cpp
// compiler creates the functions with respect to the specific datat type without user intervention.

#include<iostream>

template <class data_type>

data_type max(data_type a, data_type b){
    if(a>b) return a;
    else return b;
}

int main(){
    int a = 5, b = 10;
    float c = 11.5, d = 10;
    std::cout<<"int comparison : "<< max(a,b)<<"\n"<<"Float comparison : "<<max(c,d)<<std::endl;
}

// the unknow data types taken by max using template is called generic data type and it is resolved by compiler during compilation.
// template function can be overloaded.