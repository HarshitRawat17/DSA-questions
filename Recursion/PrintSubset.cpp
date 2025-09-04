#include<iostream>
#include<vector>
using namespace std;
void printsubset(vector<int>&arr, vector<int>&ans, int i){
    if(i==arr.size()){
        for(int val:ans){
            cout<<val<<"";
        }
        cout<<endl;
        return;
    }

    //include
    ans.push_back(arr[i]);
    printsubset(arr, ans,i+1);
    ans.pop_back();

    //exclude
    printsubset(arr,ans,i+1);
}    
    int main(){
        vector<int>arr={1,2,3};
        vector<int>ans;
        printsubset(arr, ans, 0);
        return 0;
    }
