
#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        
        Node(int data){
            this -> data = data;
            next = nullptr;
        }
};

class Queue{
    Node * firstNode;
    Node * lastNode;
    
    public:
        Queue(){
            firstNode = nullptr;
            lastNode = nullptr;
        }
        ~Queue(){
            clear();
        }
        
        void enqueue(int data){
            Node* newNode = new Node(data);
            
            if(firstNode == nullptr){
                
                firstNode = newNode;
                lastNode = newNode;
                
            }
            else{
                lastNode ->next = newNode;
                lastNode = newNode;
            }
            
            
        }
        void dequeue(){
            if(isEmpty()){
                cout<<"Queue is empty\n\n";
                return;
            }
            else{
                Node * temp = firstNode;
                firstNode = temp ->next;
                if(firstNode == nullptr){
                    lastNode = nullptr;
                }
                delete temp;
                
                
                
            }
        }
        int peek(){
            if(firstNode == nullptr){
                cout<<"NO element in queue";
                return 404;
            }
            return firstNode -> data; //returning first in queue;
        }
        void display(){
            Node* current = firstNode;
            while(current != nullptr){
                cout<<current -> data<<" -> ";
                current = current ->next;
            }
            cout<<endl<<endl;
            
        }
        bool isEmpty(){
            return firstNode ==nullptr;
        }
        void clear(){
            Node* temp;
            while(firstNode != nullptr){
                temp = firstNode;
                firstNode = firstNode->next;
                delete temp;
            }
            lastNode = nullptr;
        }
};

int main()
{
    Queue q;
    for(int i=0;i<5;i++){
        q.enqueue(i);
    }
    q.display();
    q.dequeue();
    q.peek();
    q.display();
    // q.clear();
    cout<<"first element is:"<<q.peek()<<endl;

    return 0;
}
