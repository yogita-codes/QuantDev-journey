#include <iostream>
#include <cstring>
using namespace std;

// what is pointer??
// pointer is just a variable which stores the memory address

void increment(int value){ // passing by value
    value++;
    cout<<"value in function"<<value;
}
void increment(int* value){ // passing by reference
    (*value)++;
    cout<<"value in function"<<*value;
}
int main(){
    int var = 10;
    int* ptr = &var; // pointer to int
    cout << "Value of var: " << var << endl;
    cout << "Address of var: " << &var << endl;
    cout << "Value of ptr: " << ptr << endl;
    cout << "Dereferenced value of ptr: " << *ptr << endl;
    *ptr = 20; // changing the value of var using pointer
    cout << "New value of var: " << var << endl;  
    void* voidPtr = nullptr; // void pointer

    // ------------------------------------------

    int* buffer = new int[10]; // dynamic memory allocation
    memset(buffer, 0, 10 * sizeof(int)); // initialize memory to zero
    *buffer = 42; // assign value to first element
    int** ptrToBuffer = &buffer; // pointer to pointer

    cout << "Address of buffer: " << ptrToBuffer << endl; // address of buffer
    cout << "Value of ptrToBuffer: " << *ptrToBuffer << endl; // address of buffer
    cout << "Value at buffer: " << **ptrToBuffer << endl; // value at buffer (first element)
    

//  ----------------references------------


    int a = 10;
    int& ref = a; // reference to int
    int b = 20;
    ref = b; // ref is not alias to b, it is still an alias to a, so a will be changed to 20
    cout << "Value of a: " << a << endl;
    cout << "Value of ref: " << ref << endl; 
    // ref is a --- alias
    increment(a); // passing by value
    cout<<"value of a after increment: "<<a<<endl;
    increment(&a); //passing by ref
    cout<<"value of a after increment via reference: "<<a<<endl;
    // cannot change ref but can change ptr
    // when you declare a ref , you have to initialize it
    // but for pointer you can declare it and initialize it later
    return 0;

}