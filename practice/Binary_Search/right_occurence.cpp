#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int low, int high, int target){
    while(low<=high){
        int mid = low + (high - low)/2;

        if(target == arr[mid]){
            if(mid == high || target != arr[mid+1]){
                return mid;
            }
            else{
                return search(arr,mid+1,high,target);
            }

        }
        else if(target < arr[mid]){
            high = mid-1;
        }
        else if(target > arr[mid]){
            low = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[10] = {1, 2, 3,3,3,3,3,3,45,55};

    cout<<"found at"<<search(arr,0,9,55)<<endl;
}