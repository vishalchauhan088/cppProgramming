#include <bits/stdc++.h>
using namespace std;


int search(int arr[], int low, int high){
    while(low<=high){
        int mid = (low + high)/2;

        if(arr[low]<arr[mid]){
            if(arr[mid]>arr[mid+1]){
                return mid;
            }
            else{
                low = mid;
            }
        }
        else if(arr[low]>arr[mid]){
            high = mid;
        }
        
    }
    return -1;
}




int main(){
    int arr[7] = {9,10,11,2,5,6,8};
    int x = search(arr,0,6);
    cout<<"found at"<<x<<endl;
}