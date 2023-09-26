#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int low, int high, int target){
    int leftmost = -1;
    while(low<=high){
        int mid = (low + high)/2;

        if(target == arr[mid]){
            leftmost=mid;
            high = mid-1;
        }
        else if(target < arr[mid]){
            high = mid -1;
        }
        else if(target > arr[mid]){
            low = mid + 1;
        }
    }
    return leftmost;
}

int search_optimsed(int arr[], int low, int high, int target){
    while(low<= high){
        int mid = low + (high - low)/2;
        if(target == arr[mid]){
            if(mid ==0 || target != arr[mid-1]){
                return mid;
            }
            else{
                high = mid-1;
            }
        }
        else if(target < arr[mid]){
            high = mid-1;
        }
        else if(target > arr[mid]){
            low = mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[10] = {2,4,12,12,12,12,12,12,24,45};

    cout<<"found at :" <<search(arr,0,9,0)<<endl;
    cout<<"found at :"<< search_optimsed(arr,0,9,12)<<endl;
}