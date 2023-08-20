#include <iostream>
using namespace std;

int BinarySearch(int arr[],int n, int left, int right){
    int mid = (left+right)/2;
    
    if(n == arr[mid]){
        return mid;
    }
    else if(left == right){
        return -1;
    }
    else if(n<=arr[mid]){
        return BinarySearch(arr, n, left, mid);
    }
    else {
        return  BinarySearch(arr, n,mid+1,right);
    }
    

   
}

int main(){
    int arr[7]= {1,5,33, 54,56,77,88};
    cout<<"Element found at:"<<BinarySearch(arr,33,0,6);
}