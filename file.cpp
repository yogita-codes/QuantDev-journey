#include<iostream>
#include<fstream>
using namespace std;

// fstreambase is used to create files, read from files and write into files
// ifstream is the derived class of fstreambase and used to read the contents of files
// ofstream is the derived class of fstreambase and used to create files and write information to files

/*
2 ways to open a file:
1. Using the constructor of the class
2. Using the member function open() of the class
*/
int main(){
    string line="Hello, this is a sample text file.\nThis file is created using C++ file handling.";
    // opening files using constructor and writing information to files
    ofstream fout("sample.txt"); 
    // creating object of ofstream class and opening file sample.txt
    fout<<line;
    fout.close();

    ifstream fin("sample.txt");
    // creating object of ifstream class and opening file sample.txt
    string str , st2;
    // fin>>str; //only reads the first word from the file
    // cout<<str<<endl;
    getline(fin, str);
    //reads the one line from the file
    getline(fin, st2);
    // cout<<str<<endl;
    // cout<<st2<<endl;
    fin.close();

    ofstream write;
    write.open("sample.txt");
    // opening file using member function open()
    write<<"This is a new line added to the file.";
    write<<"";
    write<<"This is another new line added to the file.";
    write.close();

    ifstream read;
    read.open("sample.txt");
    // opening file using member function open()
    string str1;
    while(getline(read, str1)){ //if file contain blank line loop will terminate
        cout<<str1<<endl;
    }
    while(read.eof()==0){ //if file contain blank line loop will not terminate
        getline(read, str1);
        cout<<str1<<endl;
    }
    read.close();


    return 0;
}