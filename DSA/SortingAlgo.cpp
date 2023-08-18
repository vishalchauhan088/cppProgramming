
#include <iostream>

using namespace std;

class Sort{
    
    public:
    
        void swap(int * x, int* y){
            
            int temp = *x;
            *x = *y;
            *y = temp;
        }
    
        void printArr(int* arr, int n){
            for(int i=0;i<n;i++){
                cout<<arr[i]<<"  ";
            }
            cout<<"\n";
        }
        
        void selectionSort(int * arr, int n){
            for(int i=0;i<n-1;i++){ // as last element will be automatically sorted 
                int minInd = i; // supposing element at i is the smallest
                
                // checking for smallest number than arr[i];
                for(int j=i+1;j<n;j++){
                    
                    if(arr[minInd]>arr[j]){
                       minInd = j;
                      
                       
                    }
                }
                
                // swapping when i find the smallest number than arr[i], it is possible when minInd is changed;
                
                if(i != minInd){
                    // int temp = arr[i];
                    // arr[i]=arr[minInd];
                    // arr[minInd]= temp;
                    swap(&arr[i],&arr[minInd]);
                }
                
                //  printArr(arr,n);
                
            }
        }
        
        void bubbleSort(int * arr, int n){
            for(int i=0;i<n-1;i++){
                
                for(int j=0;j<n-i-1;j++){
                    if(arr[j]>arr[j+1]){
                        swap(&arr[j],&arr[j+1]);
                    }
                }
                // printArr(arr,n);
            }
        }
        
        void insertionSort(int * arr, int n){
           for(int i=1;i<n;i++){
               int k = i;
               while(arr[k]<arr[k-1] && k>=1){
                   swap(&arr[k],&arr[k-1]);
                   k--;
                //   printArr(arr,n);
               }
           }
        }
};

int main()
{
    int MAX_SIZE = 30;
    int arr[MAX_SIZE]={9,4,0,4,-1};
    Sort s;
    s.printArr(arr,5);
    s.insertionSort(arr,5);
    s.printArr(arr,5);
    

    return 0;
}