#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int low, int high,int target){
    if(high>=low){
        int mid = low + (high - low)/2;
        if(target == arr[mid]){
            return mid;
        }
        if(target < arr[mid]){
           return binarySearch(arr,low,mid-1,target);
        }
        else if(target> arr[mid]){
            return binarySearch(arr,mid+1,high,target);
        }

        
    }
   
    return -1;
}

int main(){
    int arr[5] = {4,7,9,12,34};
    int foundAt = binarySearch(arr,0,4,-4);
    cout<<"Found at :"<<foundAt<<endl;

}