
#include <iostream>

using namespace std;


void merge(int *arr, int low,int mid,int high){
 
       
        int n1= mid-low+1;
        int n2 = high-mid;
        int arrL[n1];
        int arrR[n2];
        
        //copying left array;
        for(int i=0;i<n1;i++){
            arrL[i]=arr[i+low];
        }
       
        
        // printArr(arrL,0,mid-low+1);
        for(int i=0;i<n2;i++){
            arrR[i]=arr[mid+1+i];
        }
        
        int i=0,j=0,k=low;
        while(i < n1 && j <n2){
            if(arrL[i]<arrR[j]){
                arr[k]=arrL[i];
                i++;
            }
            else{
                arr[k]=arrR[j];
                j++;
            }
            k++;
        }
        
        while(i<n1){
            arr[k]=arrL[i];
            k++;
            i++;
        }
        while(j<n2){
            arr[k]=arrR[j];
            j++;
            k++;
        }
    
    
    
}

void mergeSort(int * arr, int low, int high){
    if(low<high){

    
       int mid=(low+high)/2;
        mergeSort(arr,low,mid);
        mergeSort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}




int main()
{
    int arr[9]={1,29,234,90,234,5,1,0,-11};
    mergeSort(arr,0,8);
    cout<<endl;
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
