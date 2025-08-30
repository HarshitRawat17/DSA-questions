//Bruteforce 

// #include<iostream>
// #include<vector>
// #include<climits>
// using namespace std;
// int MaxElement(vector<int>& vec){
//     int freq=0;
//     int n=vec.size();
//     for(int val:vec){
//         for(int ele:vec){
//             if(val==ele){
//                 freq++;
//             }
//         }
//         if(freq > n/2){
//             return val;
//         }
//     }
//     return -1;

// }
// int main(){
//     vector<int>vec={1,2,1,1,2};
//     int result=MaxElement(vec);
//      if (result != -1)
//         cout << "Majority element: " << result << endl;
//     else
//         cout << "No majority element found." << endl;

// }
//moore's algorithm for majority element

