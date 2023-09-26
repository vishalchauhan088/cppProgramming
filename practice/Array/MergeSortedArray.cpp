#include <iostream>
using namespace std;

int * merge(int left[],int ln, int  right[] , int rn){
   
    int* arr = new int[ln + rn];
    int i=0,j=0,k=0;

    while(i<ln && j<rn){
        if(left[i]<=right[i]){
            arr[k]=left[i];
            i++;
        }
        else{
            arr[k]=right[j];
            j++;
        }
        k++;
    }

    while(i<ln){
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<ln){
        arr[k]=right[j];
        j++;
        k++;
    }
    

   
   return arr;
    
}

int main(){
    int arr[4] = {1,3,8,14};
    int arr2[8]= {4,5,9,12,33,89,101,122};

    int * result = merge(arr,4,arr2,8);
    for(int i=0;i<12;i++){
        cout<<result[i]<<" ";
    }
    
}