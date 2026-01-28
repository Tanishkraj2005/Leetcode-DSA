#include<iostream>
#include<vector>
using namespace std;
int main(){
    int low=1;
    int high=100;
    int count=0;
    for(int i=low;i<=high;i++){
        vector<int> arr;
        int temp=i;
        while(temp!=0){
            int digit=temp%10;
            arr.push_back(digit);
            temp/=10;
        }
        int c=arr.size();
        int s=0;
        int sum=0;
        int half = c/2;
        if(c%2!=0){
            continue;
        }
        else{
            for(int i=0;i<half;i++){
                s+=arr[i];
            }
            for(int i=half;i<c;i++){
                sum+=arr[i];
            }
        }
        if(s==sum){
            count++;
        }
    }
    cout<<count;
}