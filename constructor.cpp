#include<iostream>
class Entity
{
    int x;
public:
// default constructor
    Entity()
    {
        x = 0;
        std::cout << "Created Entity" << std::endl;
    } 
// parameterized constructor
    Entity(int value)
    {
        x = value;
        std::cout << "Created Entity with value: " << x << std::endl;
    }
// cpoy constructor
    Entity(const Entity &other)
    {
        x = other.x;
        std::cout << "Copied Entity with value: " << x << std::endl;
    }
    // void setX(int VALUE)
    // {
    //     x = VALUE;
    // } 
    void print()
    {
        std::cout << x << std::endl;
    } 
    ~Entity()
    {
        std::cout << "Destroyed Entity" << std::endl;
    }
};
int main()
{
    Entity e;
    // e.setX(2);
    e.print();
    Entity e2(5);
    e2.print();
    Entity e3(e2); // copy constructor
    e3.print();
    return 0;
}

// constructor is a special member function of a class that is executed whenever we create new objects of that class. It has the same name as the class and does not have a return type. 
// There are different types of constructors in C++:
// 1. Default constructor: A constructor that takes no arguments. It is used to initialize objects with default values.
// In the code above, the default constructor initializes the member variable `x` to 0 and prints a message indicating that an Entity has been created.
// 2. Parameterized constructor: A constructor that takes arguments to initialize an object with specific
// values. In the code above, the parameterized constructor initializes the member variable `x` with the provided value and prints a message indicating that an Entity has been created with that value.
// 3. Copy constructor: A constructor that takes an object of the same class as an argument and initializes the new object with the values of the existing object. In the code above, 
// the copy constructor initializes the member variable `x` with the value of the `other` object and prints a message indicating that an Entity has been copied with that value. 


// destructor is a special member function of a class that is executed whenever an object of that class goes out of scope or is explicitly deleted. 
// It has the same name as the class preceded by a tilde (~) and does not have a return type. In the code above, the destructor prints a message indicating that an Entity has been destroyed.
//  deconstuctor runs first for the last object created
// if we do not define a destructor, the compiler will provide a default destructor that does nothing. 
// However, if we have dynamically allocated memory or resources in our class, we should define a destructor to release those resources and avoid memory leaks.