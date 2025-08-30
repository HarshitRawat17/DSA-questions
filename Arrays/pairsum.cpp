#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int>pairsum(vector<int>vec,int target){
    vector<int>ans;
    int n=vec.size(),i=0,j=n-1;
    while (i<j)
    {
        int pairsum=vec[i]+vec[j];
        if(pairsum<target){
            i++;
        }
        else if(pairsum>target){
            j--;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
    
}
int main(){
    vector<int>vec={21,22,23,32,42,50};
    int target=55;
    vector<int>ans=pairsum(vec ,target);
    cout<<ans[0]<<"+"<<ans[1];
}
