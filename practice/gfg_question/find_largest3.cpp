#include <bits/stdc++.h>
using namespace std;



int main(){
    int first, second,  third;
    first = second  = third = INT_MIN;
    int arr[10] = {2,5,1,0,-33,44,55,88,23,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]>first){
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i]>second && arr[i] !=first){
           third = second;
           second = first;
        }
        else if(arr[i]>third && arr[i] !=second){
            third = arr[i];
        }
    }
    
    cout<<first<<" "<<second<<" "<<third<<endl;

}