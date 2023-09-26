
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

};

int main()
{
    int MAX_SIZE = 30;
    int arr[MAX_SIZE]={9,4,0,4,-1};
    int arr2[MAX_SIZE]={22,23,0,-55,9};
    int arr3[MAX_SIZE]={56,-99,234,99,59,20,-34};
    Sort s;
    cout<<"ARRAY is:"<<endl;
    s.printArr(arr,5);
    cout<<"Sorted ARRAY using selection sort: "<<endl;
    s.selectionSort(arr,5);
    s.printArr(arr,5);

    cout<<"Array 2 is:"<<endl;
    s.printArr(arr2,5);
    cout<<"Sorted Array using bubbble  sort: "<<endl;
    s.bubbleSort(arr2,5);
    s.printArr(arr2,5);

    cout<<" Array 3 is:"<<endl;
    cout<<"Sorted Array3 using insertion sort:"<<endl;
    s.printArr(arr3,7);
    s.insertionSort(arr3,7);
    s.printArr(arr3,7);
    

    return 0;
}