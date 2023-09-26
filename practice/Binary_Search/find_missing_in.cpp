#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int low, int high){
    int x;
    while(low<=high){
        int mid = low +(high - low)/2;

        if((mid * 3)+1 ==arr[mid]){
            if(arr[mid+1]-arr[mid]!=3){
                return mid;
            }
            else{
                low = mid+1;
            }
        }
        else{
            high = mid-1;
        }
        
    }
    return -1;
}

int main(){
    int arr[5] = {1,4,7,13,16};
    int x = search(arr,0,4);
    cout<<"missing value is:"<<x<<endl;
}