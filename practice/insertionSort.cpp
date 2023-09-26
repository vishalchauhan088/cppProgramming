#include <bits/stdc++.h>
using namespace std;


void insertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int k = i-1;
        int present = arr[i];
        while(arr[k]>present && k>=0){
            arr[k+1]=arr[k];
            k--;
        }
        arr[k+1] = present;
    }
}


int main(){
    int arr[5]= {1,5,7,0,-1};

    insertionSort(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

}