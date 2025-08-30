#include<iostream>
using namespace std;
int main(){
    bool isSorted = true;
    int arr[5]={55,56,57,58,59};
    for(int i=0;i<5;i++){
        if(arr[i]<arr[i+1]){
            isSorted=true;
        }
    }
    if(isSorted){
        cout<<"the arrays are sorted";
    }
    else{
        cout<<"they arays are not sorted";
    }
}    