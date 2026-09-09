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



int main(){
    explainPair();
    return 0;
}