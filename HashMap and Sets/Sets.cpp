#include<iostream>
#include<unordered_set>
#include<set>
using namespace std;

int main(){
    unordered_set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(3); // Duplicate, will not be added

    s.erase(2);//remove 2
   // s.clear(); // Clear all elements
    if(s.empty()){
        cout<<"Set is Empty"<<endl;
    }else{
        cout<<"Set is not Empty"<<endl;
    }

    if(s.find(7)!=s.end()){
        cout<<"It exists"<<endl;
    }else{
        cout<<"It does not exist"<<endl;
    }

    for(auto el:s){
        cout<<el<<endl;
    }

    if(s.count(3)){
        cout<<"3 is present"<<endl;}
    cout << "Size of unordered_set: " <<s.size()<<endl;
    return 0;
}