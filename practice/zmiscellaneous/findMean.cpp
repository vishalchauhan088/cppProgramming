#include <iostream>
using namespace std;


int * merge( int arr1[], int m, int arr2[] , int n){
    int i=0,j=0,k=0;
    int* rArr = new int[m+n];
    while(i<m && j <n){
        if(arr1[i] <= arr2[j]){
            rArr[k]= arr1[i];
            i++;
        }
        else{
            rArr[k] = arr2[j];
            j++;

        }
        k++;
    }
    if(i<m){
        while(i<m){
            rArr[k]=arr1[i];
            i++;
            k++;
        }
    }
    else{
        while(j<n){
            rArr[k] = arr2[j];
            j++;
            k++;
        }
    }
    return rArr;
}

float findMedian(int arr[], int n){
    int mid = n/2;
    float median;
    if(n%2==0){
        median= ((float)(arr[mid]+arr[mid-1]))/2;
    }
    else{
        median= arr[mid];
    }
    return median;
}
void inputArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
}
void printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n,m;
    // int arr1[30]={1,2,5,10,30,70,80};
    // int arr2[30]={3,6,9,23,50};
    int arr1[30],arr2[30];
    cout<<"Enter the size of first array: ";
    cin>>m;
    cout<<"Enter first sorted array: "<<endl;
    inputArray(arr1,m);
    cout<<"Enter the size of second array: ";
    cin>>n;
    cout<<"Enter second sorted array: "<<endl;
    inputArray(arr2,n);
    cout<<"First array is"<<endl;
    printArray(arr1,m);
    cout<<"Second array is:"<<endl;
    printArray(arr2,n);
    cout<<"Merged sorted array is: "<<endl;
    int * arr3 = merge(arr1,m,arr2,n);
    printArray(arr3,m+n);

    cout<<"median is:"<<findMedian(arr3,m+n);
}