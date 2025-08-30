#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char>vec;
    cout<<"size: "<<vec.size()<<endl;
    cout<<"capacity: "<<vec.capacity()<<endl;
    vec.push_back('a');
    vec.push_back('b');
    vec.push_back('d');
    vec.push_back('c');
    for(char val : vec){
        cout<<val<<endl;
    }
    vec.pop_back();
    vec.pop_back();
    cout<<"size: "<<vec.size()<<endl;
    cout<<"capacity: "<<vec.capacity()<<endl;
}