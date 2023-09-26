#include <bits/stdc++.h>
using namespace std;

int binary_left_most(int arr[],int low, int high, int target){
    if(high>=low){
        int mid = low + (high-low)/2;

        if(target == arr[mid]){
            if(arr[mid-1]==target && mid !=0){
                return binary_left_most(arr,low,mid-1,target);
            }
            else{
                return mid;
            }

        }
        else if(target < arr[mid]){
            return binary_left_most(arr,low,mid-1,target);
        }
        else if(target> arr[mid]){
            return binary_left_most(arr,mid+1,high,target);
        }
    }
    return -1;
}


int main(){
    int arr[10] = {1,3,3,10,10,10,10,10,13,14};
    int leftmostIndex = binary_left_most(arr,0,9,10);
    cout<<"found at: "<<leftmostIndex<<endl;
}