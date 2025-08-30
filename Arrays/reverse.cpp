#include<iostream>
using namespace std;
int main(){
    int arr[5]={5,4,3,2,1};
    int n=5;
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
    cout<<"Reversed array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;

}