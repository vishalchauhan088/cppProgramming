#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d): data(d), next(nullptr){
        // cout<<"Node constructor"<<endl;
    }

};

class LinkedList{
    private:
        Node* head;
        Node* tail;
    
    public:
    
        LinkedList(){
            head = nullptr;
            tail = nullptr;
            // cout<<"Linked List constructor"<<endl;
        }
        void insertAB(int data){
            Node* newNode = new Node(data);
            if(head == nullptr){
                head = newNode;
                head -> next = head;
                tail  = head;
            }
            else{
                newNode -> next = head;
                head = newNode;
                tail -> next = newNode;
                
            }
        }
        
        void insertAL(int data){
            Node * newNode = new Node(data);
            if(head == nullptr){
                cout<<" ---------!!! No node in the list--------"<<endl;
                cout<<"------Created new list -------"<<endl;
                head = newNode;
                newNode -> next = head;
                tail = head;
            }
            else{
                tail -> next = newNode;
                newNode -> next = head;
                tail = newNode;
            }
        }
        
        
        
        void display(){
            //checking if list is empty;
            if(head == nullptr){
                cout<<"List is empty"<<endl;
                return;
            }
            Node* current = head;
            
            // while(current->next !=head ){
            //     cout<<current -> data <<" -> ";
            //     current = current -> next;
            // }
            
            // *********here i realised the use of do-while loop is good sometime**********
            
            do{
                cout<<current -> data << " ->";
                current = current -> next;
            }while(current != head);
            
            cout<<endl;
            
        }
        
        void count(){
            Node* current = head;
            if(current == nullptr){
                cout<<" !! No element in list"<<endl;
            }
            
            
            int count=0;
            do{
               count++;
               current = current -> next;
            }while(current != head);
            
            cout<<"\n\ncount : "<<count<<endl;
            
        }
        
        void clear(){
            Node* temp;
            Node* current = head;
            do{
                temp = current;
                current = current -> next;
                delete temp;
            }while(current != head);
            head = nullptr;
            tail = nullptr;
        }

};

int main(){
    LinkedList list;
    for(int i=0;i<5;i++){
        list.insertAB(i);
    }
    // list.insertAB(5);
    list.count();
    list.display();
    list.insertAL(5000);
    list.display();
    list.clear();
    list.count();

}