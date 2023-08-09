#include <iostream>
using namespace std;




int n;
void traverse(int *);

void insert(int *arr , int x , int pos = n);
void del(int *arr, int pos);
void locate(int *arr, int n);


int main(){
    
    int arr[50];
  
    cout<<"Enter number of element:";
    cin>>n;
    cout<<"Enter Element:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    
    bool running = true;
    int ch,pos,x;
    while(running){
        
        cout<<"\n\n\nOPTIONS:-"<<endl;
        cout<<"\n\t1. insert "<<endl;
        cout<<"\n\t2. delete "<<endl;
        cout<<"\n\t3. locate "<<endl;
        cout<<"\n\t4. traverse "<<endl;
        cout<<"\n\t5. Exit "<<endl;
        
        cout<<"Enter options from above:";
        cin>>ch;
        
        switch(ch){
            case 1:
                cout<<"Enter the element to insert :";
                cin>>x;
                cout<<"Enter the index no: ";
                cin>>pos;
                insert(arr,x,pos);
                system("cls");
                break;
            
            case 2:
                cout<<"Enter the index no of element to delete: ";
                cin>>pos;
                del(arr,pos);
                system("cls");
                break;
            
            case 3:
                cout<<"Enter the element to locate :";
                cin>>x;
                locate(arr,x);
                break;
                
            case 4:
                traverse(arr);
                break;
            case 5:
                cout<<"Exiting Execution......................."<<endl;
                cout<<"......................Programm Executioin Exited.............."<<endl;
                running = false;
                break;
            default:
                cout<<"Worng input!!!"<<endl;
                cout<<"PLease choose correct option!!! "<<endl;
                
        }
        
    }
}

void traverse(int * arr){
    cout<<"Array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void insert(int *arr, int x, int pos){
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos] = x;
    n++;
}

void del(int *arr, int pos){
    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
}

void locate(int *arr, int x){
    bool found;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout<<"Element "<<n<<" at position :"<<i<<endl;
            found = true;
        }
    }
    if(!found){
        cout<<"Element not "<<x<<" not found!!!!"<<endl;
    }
    
}






