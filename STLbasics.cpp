#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int,string> p1;
    p1.first = 1;
    p1.second = "Hello";
    pair<int,string> p2(2,"World");
    pair<int,string> p3 = {3,"C++"};

    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int,pair<string,int>> p4 = {4,{"Nested",5}};
    cout<<p4.first<<" "<<p4.second.first<<" "<<p4.second.second<<endl;
    pair<int,int> arr[] = {{1,2},{3,4},{5,6}};
    cout<<arr[1].first<<" "<<arr[2].second<<endl;

}

void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2); 

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector<int> v(5,100); //container of size 5 and all elements are 100

    vector<int> v(5); //container of size 5 and all elements are 0 or garbage value depending on the compiler

    vector<int> v1(5,20); //container of size 5 and all elements are 20
    vector<int> v2(v1); //copy constructor

    vector<int>::iterator it = v.begin(); //iterator points to the first element of the vector
    it++;
    cout<<*(it)<<endl;

    it = it + 2;
    cout<<*(it)<<endl;

    vector<int>::iterator a = v.end(); //iterator points to the right after last element of the vector
    // vector<int>::iterator i = v.rbegin(); //reverse iterator points to the last element of the vector
    // vector<int>::iterator c = v.rend(); //reverse iterator points to the left after first element of the vector

    cout<<v[0]<<" "<<v.at(1)<<endl;
    cout<<v.back()<<endl;

    for(vector<int>::iterator it = v.begin(); it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    for(auto it = v.begin(); it!=v.end();it++){
        cout<<*(it)<<" ";
    }

    for(auto it : v){ //for each loop
        cout<<it<<" ";
    }

    v.erase(v.begin()+1); //erase the element at index 1

    v.erase(v.begin()+1,v.begin()+3); //erase the elements from index 1 to 2

    vector<int> v(2,100); //{100,100}
    v.insert(v.begin(),300); //{300,100,100}
    v.insert(v.begin()+1,2,10); //{300,10,10,100,100}

    vector <int> copy(2,50); //{50,50}
    v.insert(v.begin(),copy.begin(),copy.end()); //{50,50,300,10,10,100,100}

    cout<<v.size()<<endl; //size of the vector
    v.pop_back(); //removes the last element of the vector

    v1.swap(v2); //swaps the contents of v1 and v2

    v.clear(); //erases all the elements of the vector
    cout<<v.empty()<<endl; //returns true if the vector is empty



}

int main(){
    explainPair();
    explainVector();
    return 0;
}