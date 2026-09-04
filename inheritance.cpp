#include<iostream>
using namespace std;


class Person {
protected:
    string name;
    int age;
    int phoneNumber;
public:
    Person(string n, int a, int ph){
        name = n;
        age = a;
        phoneNumber = ph;
    }
    void display() {
        cout << "Display from Person class" << endl;
    }
    virtual void get(){
        cout<<"name :"<<name<<endl;
    }

};


class School {
protected:
    string schoolName;  
public:
    School(string sName) {
        schoolName = sName;
    }
    virtual void get() {
        cout << "School Name: " << schoolName << endl;
    }
};


class Student : public Person , public School {
private:
    string studentId;
public:
    Student(string n, int a, int ph, string id, string sName) : Person(n, a, ph), School(sName) {
        studentId = id;
    }
    void display() {
        cout << "Display from Student class" <<endl;
    }
    void getDetails() {
        cout << "Name: " << name << endl; 
        cout << "Age: " << age << endl;
        cout << "Phone Number: " << phoneNumber << endl;
        cout << "Student ID: " << studentId <<endl;
    }
};  

int main() {
    Student s("Alice", 20, 1234567890, "S001", "Greenwood High");
    s.Person::display(); // Call the base class display function
    s.display();
    s.getDetails();
    // s.get(); //virtual function ambiguity resolved by specifying the class
    return 0;
}
