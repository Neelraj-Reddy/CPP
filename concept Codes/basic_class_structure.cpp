#include <iostream>

class counter{
    protected:
    
    int value;
    
    public:

    counter(){    //no argument constructor
        value = 0;
        std::cout<<value<<std::endl;
    }

    counter(int val){ // one argument constructor
        value = val;
        std::cout<<value<<std::endl;
    }

    ~counter(){        // destructor
        std::cout<<"Object destroyed"<<std::endl;
    }

    void up(){
        value+=1;
        std::cout<<value<<std::endl;
    }
};

class NewCounter: public counter{
    public:
    NewCounter():counter(){}
    NewCounter(int val): counter(val){}
    void down(){ value = value -1;}
};


int main(){
    counter obj1, obj2 = 5;
    NewCounter obj3 = 7;
    obj3.up();
}



// ----------------------------------------------------------------------------------------------------------------------------------------->

//                                                            C O N C E P T S

// ----------------------------------------------------------------------------------------------------------------------------------------->

// Class encloses the data and functions into single unit
// Class can be used as user defined data type for defining its variables called objects.
// Data members describe the data in the abstract data types. Here value is the data member
// Memeber functions defines the permissible operations of the data types.
// constructor is the member function having the same name as that of its class name and is executed automatically when the class is instantiated.
// Destructor is the member function having the ~ followed by the class name and is invoke automatically when the object is out of scope.
// public, private and protected are access specifiers that control the visibility status of the members of a class.
// In class all the members are private in default.
// In struct all the mmebers are public in default.
// Object is an instance of the class.
// Data members of a class must be declared within the class but member functions can be declared inside the body of the class or outside the body of the class.
// Member functions defined inside the body of a class is an inline function.
// To declare the member function outside a class a prototype of the function should be given inside the class body.



// ----------------------------------------------------------------------------------------------------------------------------------------->

// Inheritance:
/*
- Inheritance is a technique of organizing info in a hierarchial form.
- A new class created using an exisisting class is called the derived class. This process is called inheritance.
- The derived class inherits both data members and member functions and it can be enhanced by adding or modifying data members and member functions.

*/

// ----------------------------------------------------------------------------------------------------------------------------------------->

// Polymorphism

/*
- Polymorphism allows a single name/operator to be associated with different operations depending on the type of data passed.
- cpp offers function overloading, operator overloading, and dynamic binding.
- Operator overloading extends the semantics of an operator without changing their syntax .
- The grammatical rules defined by the cpp such as number of operands, precedence, and associativity remains same for overloaded operators.
- cpp allows overloading of unary as well as binary operators.
- operator is a keyword in cpp

eg:

void operator ++ (){
    value+=1;
}

- obj++ or ++obj is possible.



*/

// ----------------------------------------------------------------------------------------------------------------------------------------->

