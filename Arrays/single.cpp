#include<iostream>
#include<vector>
using namespace std;
int main(){
    int ans=0;
    vector<int>vec;
    vec.push_back(4);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(1);
    vec.push_back(2);
    for(int val : vec){
        ans=ans^val;
    }
    cout<<ans<<endl;

}