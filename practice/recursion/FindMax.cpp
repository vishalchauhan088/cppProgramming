#include <iostream>
using namespace std;

// Devide and conquer method;

int find_max(int arr[],int left,int right){
        if(left == right){
            return arr[left];
        }
        int mid = (left + right )/2;
        int max_left = find_max(arr,left,mid);
        int max_right = find_max(arr,mid+1,right);

        return max_left>max_right?max_left:max_right; 
}

int main(){
    int arr[9]={3,6,1,22,353,34,23,0,-23};
    cout<<"max is"<<find_max(arr,0,8);
}