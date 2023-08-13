// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node * next;
        
        Node(int d){
            data = d;
            next = nullptr;
        }
};

class LinkedList{
    private:
        Node * head;
    public:
        void insertAB(int data){
            Node * newNode = new Node(data);
            newNode->next = head;
            head = newNode;
            return;
        }
        
        void insertAL(int data){
            // Node* newNode = new Node(data);
            // Node* current=head;
            // while(current != nullptr){
            //     current= current ->next;
            // }
            // current = newNode;
            // newNode->next = nullptr;
            Node * newNode = new Node(data);
            newNode -> next = nullptr; //last node will have nullptr;
           
            //checking if the list is empty;
            if(head == nullptr){
                head = newNode;
            }
            else{
                Node* current = head;
                while(current->next !=nullptr){
                    current = current ->next;
                }
                current ->next = newNode;
            }
            
            
            
        }
        void insertAtAnyPos(int pos, int data){
             if (pos <= 0) {
                cout << "\n\nInvalid position!\n";
                return;
            }
            Node* newNode = new Node(data);
            Node* current =head;
            int count =0;
            if(pos ==1){
                newNode -> next = head;
                head = newNode;
            }
            else{
                while(current != nullptr){
                    count++;
                    if(count == pos-1){
                        newNode->next = current->next;
                        current->next = newNode;
                        break;
                    }
                    current = current ->next;
                    
                }
                if(count!=pos-1){
                    delete newNode;
                    cout<<"\n\n !!!! Not sufficient Node"<<endl;
                }
            }
        }
        
        
        void display(){
            Node * current = head;
            while(current != nullptr){
                cout<<current->data<<" -> ";
                current = current -> next;
            }
           
        }
        void count(){
            int count = 0;
            Node * current = head;
            while(current != nullptr){
                count++;
                current = current->next;
            }
            cout<<"\n\ntotal Node :" <<count<<endl;
           
        }
        void clear(){
            Node * current = head;
            Node * temp;
            while(current != nullptr){
                temp = current;
                current = current ->next;
                delete temp;
                
            }
            head = nullptr;
            
        }
};

int main() {
    LinkedList list;
    int x;
    // for(int i=0;i<5;i++){
    //     cout<<"enter data:";
    //     cin>>x;
    //     list.insertAB(x);
    // }
    // // list.insertAB(100);
    // // list.insertAB(1000);
    // list.display();
    // list.insertAL(5000);
    // list.display();
    // cout<<endl;
    list.insertAtAnyPos(-1,450);
    list.display();
    list.count();
    list.clear();
    list.count();
    // list.display();
    // list.count();
    // list.clear();

    return 0;
}