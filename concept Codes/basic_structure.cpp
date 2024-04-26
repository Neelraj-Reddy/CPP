#include<iostream> // Preprocessor directive

// Preprocessor directive contains instructions and predifined constants that can be used in the program. 
// These directives are processed first independent of their location in the code.

int main(){ //function declarator
    //function body
    std::cout<<"Hello world";
    return 0;
}


// The above code is source code which is passed to compiler to be translated to machine code.
// << this left shift operator used above is called as insertion operator or put-to operator.
// >> this right shift operator to get input in cin>> is know as extraction operator
// more than one output can be dispalyed in a single line which is know as cascaded output operations in cpp
//  eg : cout<< "hello " << variable << " nice to mee ya";
// cout<<endl; serves the same purpose as cout<<'\n' and it is known as manipulator.
// cascaded input operation is possible in cpp.

// --------------------------------------------------------------------------------------------------------------------------------->


// Scope resolution operator

// when a local variable and a global variable have same name, you can use scope resolution operator '::' to access global variable
// eg:

#include <iostream>
int num=20;
int main(){
    int num = 10;
    std::cout<<num<<" "<<::num;
}

// --------------------------------------------------------------------------------------------------------------------------------->


// Alias variable is supported in cpp and it is called as referrence variable.

// int name_of_the_employee
// int & notp = name_of_the_employee 
// remember reference variable cannot be initialized and they dont have any new memory location. they have the same memory address of its assigned variable same as a pointer.
// once the reference is initialized it is bound to the memory address and it is not changed after that.

// --------------------------------------------------------------------------------------------------------------------------------->

