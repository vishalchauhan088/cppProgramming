#include <iostream>
using namespace std;

int findSum(int arr[], int left, int right){
    if(left == right){
        return arr[left];
    }
    int mid = (left + right)/2;
    int ele_left = findSum(arr,left,mid);
    int ele_right = findSum(arr,mid+1,right);
    return ele_left + ele_right;
}

int main(){
    int arr[5]= {1,2,-3,8,2};
    cout<<"Sum of arr is: "<<findSum(arr,0,4);
}