#include<iostream>
using namespace std;
int main(){
    int arr[3]={2,26,8};
    int max=arr[0];
    for(int i=1;i<=3;i++){
        if(arr[i]>max)
        {
            max=arr[i];
        }   
    }
    cout<<"max element in the given array is:  "<<max;

}