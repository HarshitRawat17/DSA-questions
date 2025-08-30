#include<iostream>
using namespace std;
int main(){
    int n,a,i;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number you want to search";
    cin>>a;
    
    for(i=0;i<n;i++){
        if(arr[i]==a)
        {
            cout<<"element found at index"<<i<<endl;
            break;
        }
    }
    if(arr[i]!=a){
        cout<<"Element not found at any index "<<endl;
    } 
}