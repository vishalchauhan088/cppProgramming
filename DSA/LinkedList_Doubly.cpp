#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(){
        next= prev= nullptr;
    }
    Node(int d){
        data =d;
        prev = next = nullptr;
    }
};

class DllHandler{
    public:
        Node* head;
        Node* tail;

        DllHandler(){
            head= tail = nullptr;
        }
    
        void insertAF(int data){
            Node * newNode = new Node(data);
            if(head == nullptr){
                cout<<"\n\ncreating new doubly linked list:"<<endl;
               
                head = newNode;
                tail = newNode;
            }
            else{
                head->prev = newNode;
                newNode->next = head;
                head = newNode;
            }
        }

        void insertAL(int data){
            Node* newNode = new Node(data);
            if(tail==nullptr){
                cout<<"\n\nNO linked list is found || creating new linked list"<<endl;
                head=tail=newNode;
            }
            else{
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            }

        }

        void insertAtPos(int data, int pos){
            if(pos<1){
                cout<<"Wrong position"<<endl;
                return;
            }
            int count=1;
            Node* current = head;
            Node* newNode = new Node(data);
            if(pos==1){
                insertAF(data);
                return;
            }
            
            while(current != tail && count != pos-1){
                count++;
                
                current = current->next;
            }
              
            if(count <pos-1){
                cout<<"Not enough node";
                delete newNode;
            } 
            else if(current == tail){
                insertAL(data);
            }
            else{
                Node* currentNext = current->next;
                current->next = newNode;
                newNode->next = currentNext;
                newNode->prev = current;
                currentNext->prev = newNode;
            }
               
           
        }
        
        void reverse(){
            Node* current = head;
            Node* temp = nullptr;
            while(current != nullptr){
                temp = current->next;
                current->next = current->prev;
                current->prev = temp;
                current = temp;
            }
            temp = head;
            head = tail;
            tail  = temp;
        }

        void showDll(){
            Node* current=head;
            if(current ==nullptr){
                cout<<"No Node is found";
            }
            else{
                while(current !=nullptr){
                    cout<<current->data<<" ";
                    current = current->next;
                }
            }
            cout<<"\n\n";
        }
        void clear(){
            Node* temp=nullptr;
            Node* current = head;
            while(current !=nullptr){
                temp = current;
                current = current->next;
                delete temp;
            }
        }
        ~DllHandler(){
            clear();
            cout<<"\n\nDeleted all Nodes"<<endl;
        }

};

int main(){
    DllHandler l;
    for(int i=0;i<5;i++){
        l.insertAF(i);
    }
    l.showDll();
    // for(int i=0;i<5;i++){
    //     l.insertAL(i);
    // }
    // l.showDll();
    l.insertAtPos(10,-1);
    l.showDll();
    l.reverse();
    l.showDll();
}

