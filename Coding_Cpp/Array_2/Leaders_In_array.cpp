#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int arr[]={10,22,12,0,6};
    int n=sizeof(arr)/4;
    int max = INT_MIN;
    vector<int> ans;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>max){
            max = arr[i];
            ans.push_back(max);
        }
    }
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
}