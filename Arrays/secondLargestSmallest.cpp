#include<iostream>
using namespace std;
int main(){
    int arr[4]={20,26,23,25};
    int max=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int secmax=arr[0];
    for(int i=0;i<5;i++){
        if (arr[i]>max && arr[i]<)
        {
            secmax=max;
        }
        

    }
    cout<<" the second max number is: "<<secmax;
}