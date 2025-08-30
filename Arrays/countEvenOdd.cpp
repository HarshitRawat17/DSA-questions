#include<iostream>
using namespace std;
int main(){
    int n, even=0, odd=0;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the array: ";
    int arr[n];    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"The total number of even numbers are: "<<even<<endl;
    cout<<"The total number of odd numbers are: "<<odd;

    return 0;
}