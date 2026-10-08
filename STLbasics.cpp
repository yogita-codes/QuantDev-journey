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

void explainList(){
    list<int> ls;
    ls.push_back(1); //{1}
    ls.emplace_back(2); //{1,2}
    ls.push_front(3); //{3,1,2}
    ls.emplace_front(4); //{4,3,1,2}

    // rest functions same as vector but the implementation is different
}

void explainDeque(){
    deque<int> dq;
    dq.push_back(1); //{1}
    dq.emplace_back(2); //{1,2}
    dq.push_front(3); //{3,1,2}
    dq.emplace_front(4); //{4,3,1,2}

    for(auto it : dq){
        cout<<it<<" ";
    }
    cout<<endl;

    dq.pop_back(); //removes the last element
    dq.pop_front(); //removes the first element

    for(auto it : dq){
        cout<<it<<" ";
    }
    cout<<endl;

}

void explainStack(){
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{1,2}
    st.push(3); //{1,2,3}
    st.emplace(4); //{1,2,3,4}

    cout<<st.top()<<endl; //4

    st.pop(); //removes 4

    cout<<st.top()<<endl; //3

    cout<<st.size()<<endl; //3

    cout<<st.empty()<<endl; //false

    stack<int> st1,st2;
    st1.swap(st2); //swaps the contents of st1 and st2
}

void explainQueue(){
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.emplace(3); //{1,2,3}
    q.back() += 5; //{1,2,8}

    cout<<q.back()<<endl; //8
    cout<<q.front()<<endl; //1

    q.pop(); //removes 1

    cout<<q.front()<<endl; //2

    cout<<q.size()<<endl; //2

    cout<<q.empty()<<endl; //false

    queue<int> q1,q2;
    q1.swap(q2); //swaps the contents of q1 and q2
}

void explainPriorityQueue(){
    priority_queue<int> pq; //max heap
    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(8); //{8,5,2}
    pq.emplace(10); //{10,8,5,2}

    cout<<pq.top()<<endl; //10

    pq.pop(); //removes 10

    cout<<pq.top()<<endl; //8

    cout<<pq.size()<<endl; //3

    cout<<pq.empty()<<endl; //false

    priority_queue<int,vector<int>,greater<int>> pq; //min heap
    pq.push(5); //{5}
    pq.push(2); //{2,5}
    pq.push(8); //{2,5,8}
    pq.emplace(10); //{2,5,8,10}

    cout<<pq.top()<<endl; //2
}

void explainSet(){
    set<int> st;  //sorted and unique elements
    st.insert(1); //{1}
    st.emplace(2); //{1,2}
    st.insert(2); //{1,2} (no duplicates)
    st.insert(4); //{1,2,4}
    st.insert(3); //{1,2,3,4}

    for(auto it : st){ //for each loop
        cout<<it<<" ";
    }
    cout<<endl;

    st.erase(2); //removes 2

    for(auto it : st){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<st.count(2)<<endl; //0 (not found)
    cout<<st.count(3)<<endl; //1 (found)

    auto it = st.find(3); //finds the element 3 and returns an iterator to it
    if(it != st.end()){
        cout<<"Found: "<<*it<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
    //if elements are not found, it returns st.end() which is an iterator to the element after the last element of the set
    
    auto it1 = st.lower_bound(3); //returns an iterator to the first element that is less than 3
    auto it2 = st.upper_bound(3); //returns an iterator to the first element that is greater than 3
}

void explainMultiSet(){ 
    // same as set but allows duplicate elements
    multiset<int> ms; //sorted and allows duplicate elements
    ms.insert(1); //{1}
    ms.insert(2); //{1,2}
    ms.insert(2); //{1,2,2}
    ms.insert(4); //{1,2,2,4}
    ms.insert(3); //{1,2,2,3,4}

    for(auto it : ms){ //for each loop
        cout<<it<<" ";
    }
    cout<<endl;

    ms.erase(2); //removes all occurrences of 2
    ms.erase(ms.find(3)); //removes only the first occurrence of 3
    for(auto it : ms){
        cout<<it<<" ";
    }
    cout<<endl;

    cout<<ms.count(2)<<endl; //0 (not found)
    cout<<ms.count(3)<<endl; //1 (found)
    // count() returns the number of occurrences of the element in the multiset

    auto it = ms.find(3); //finds the element 3 and returns an iterator to it
    if(it != ms.end()){
        cout<<"Found: "<<*it<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
}

void explainUnorderedSet(){
    unordered_set<int> us; //unsorted and unique elements
    // lower_bound() and upper_bound() functions are not available in unordered_set because it is unsorted

}
 
void explainMap(){
    map<int,string> mp; //sorted and unique keys
    mp[1] = "One"; //{1: "One"}
    mp[2] = "Two"; //{1: "One", 2: "Two"}
    mp.insert({3,"Three"}); //{1: "One", 2: "Two", 3: "Three"}
    mp.emplace(4,"Four"); //{1: "One", 2: "Two", 3: "Three", 4: "Four"}
    for(auto it : mp){ //for each loop
        cout<<it.first<<" "<<it.second<<endl;
    }

    mp.erase(2); //removes the key 2

    for(auto it : mp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mp.count(2)<<endl; //0 (not found)
    cout<<mp.count(3)<<endl; //1 (found)

    auto it = mp.find(3); //finds the key 3 and returns an iterator to it
    if(it != mp.end()){
        cout<<"Found: "<<it->first<<" "<<it->second<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
}

void explainMultiMap(){
    //  everything is same as map but allows duplicate keys
    // only mpp[key] cannot be used here
}

void explainUnorderedMap(){
    unordered_map<int,string> ump; //unsorted and unique keys
    // lower_bound() and upper_bound() functions are not available in unordered_map because it is unsorted
}

void explainExtra(){
    int a,n=0;
    vector<int> v={1,2,3,4,5};
    sort(a,a+n);
    sort(v.begin(),v.end());

    sort(v.begin(),v.end(),greater<int>()); //sort in descending order

    //sort function can be used with arrays and vectors only

    pair<int,int> a[] = {{1,2},{3,4},{5,6}};
    // sort it according to the second element of the pair
    // if second element is same then sort
    // according to the first    element of the pair but in decending order
    bool comp(pair<int,int> p1,pair<int,int> p2){
        if(p1.second<p2.second)return true;
        if(p1.second>p2.second)return false;
        if(p1.second==p2.second){
            if(p1.first<p2.first)return false;
            return true;
        }
    }
    sort(a,a+n,comp);

    int num=7;
    int cnt = __builtin_popcount(num); //returns the number of set bits in the binary representation of num
    cout<<cnt<<endl; //3 

    long long num1=7;
    int cnt1 = __builtin_popcountll(num1); //returns the number of set bits in the binary representation of num1
    cout<<cnt1<<endl; //3

    string str = "Hello";
    sort(str.begin(),str.end()); //sorts the string in lexicographical order
    do{
        cout<<str<<endl;
    }while(next_permutation(str.begin(),str.end())); //generates the next lexicographical permutation of the string
    
    int maximum = *max_element(v.begin(),v.end()); //returns the maximum element in the vector
    int minimum = *min_element(v.begin(),v.end()); //returns the minimum element in yhe vector

}

int main(){
    explainPair();
    explainVector();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPriorityQueue();
    explainSet();
    explainMultiSet();
    explainUnorderedSet();
    explainMap();
    explainMultiMap();
    explainUnorderedMap();
    explainExtra();
    return 0;
}