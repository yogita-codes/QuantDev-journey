#include<iostream>
using namespace std;
class Log {
    public:
        int a, b; // non-static member variables
        static int x, y;
    static void print() {
        cout << "x: " << x << ", y: " << y << endl;
    } // it will work fine because it is acsessing static member variables
    static void print2() {
        // cout << "a: " << a << ", b: " << b << endl; 
        // error because it is acsessing non-static member variables
    }
};

int Log::x; // definition of static member variable x
int Log::y; // definition of static member variable y


//enum is way to name variable
enum Example 
{
    A=3,B,C
    // value increment by 1 by default
};
// int a = 0;
// int b = 1;
// int c = 2;

int main() {
    Log log;
    log.x = 10;
    log.y = 20;
    log.a = 100;
    log.b = 200;
    log.print();
    log.print2();
    Log logSECOND;
    // logSECOND.x = 30; ---> error
    // logSECOND.y = 40;
    Log::x = 30; // correct way to access static member variable x
    Log::y = 40; // correct way to access static member variable y
    logSECOND.print();
    log.print();

    Example value = C;
    if (value==A){
        cout<<"value is A :"<<A<<endl;
    }
    else if (value==B){
        cout<<"value is B :"<<B<<endl;
    }
    else if (value==C){
        cout<<"value is C :"<<C<<endl;
    }
    return 0;
}