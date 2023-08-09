#include <iostream>
using namespace std;

int n;
void linear_search(int arr[], int x){
        bool found=false;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                cout<<"Element "<< x <<" found at position:"<<i+1<<endl;
                found = true;
            }
        }
        if(!found){
            cout<<"Element not found"<<endl;
        }
}

void binary_search(int arr[],int x){
    int pos;
    bool found=false;
    int low = 0;
    int high = n-1;
    int mid= (low+high)/2;
    
    while(!found){
        
        if(arr[mid]==x){
           
             cout<<"Element "<< x << "found at position: "<<mid+1<<endl;
            found=true;
           
        }
        else if(arr[mid]>x && high!=low){
            
            high = mid;
           
        }
        else if(arr[mid]<x && high!=low){
            low = mid+1;
        }
        else{
            cout<<"Element not found"<<endl;
            found=true;
            break;
        }
         mid = (low+high)/2;

    }
}



int main(){
    int arr[20];
    cout<<"Enter no of element:";
    cin>>n;
    cout<<"Enter element:"<<endl;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    linear_search(arr,2);
    binary_search(arr,1);
    
}