#include <bits/stdc++.h>
using namespace std;

int  binarySearch(int arr[], int low, int high,int target){
    // int mid = low + (high-low)/2;
    
    while(high>=low){
        int mid = (low+high)/2;
        if(arr[mid] == target){
            return mid;
            break;
        }
        else if(target < arr[mid]){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
        
    }
    return -1;
}

int main(){
    int arr[6] = {6,9,10,23,56,89};
    int foundAt = binarySearch(arr,0,5,56);
    cout<<"found at index"<<foundAt<<endl;
}