
#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        
        Node(int data){
            this->data = data;
            next = nullptr;
        }
};

class stack{
    private:
        Node* topNode;
    public:
        stack(){
            topNode = nullptr;
        }
        ~stack(){
            clear();
        }
        
        void push(int data){
            Node* newNode = new Node(data);
            newNode ->next = topNode;
            topNode = newNode;
        }
        int peek(){
            return topNode->data;
        }
        void display(){
            Node* current = topNode;
            while(current != nullptr){
                cout<<current -> data<<" -> ";
                current = current ->next;
            }
            cout<<endl<<endl;
        }
        
        void pop(){
            if(isEmpty()){
                cout<<"Stack is empty"<<endl;
            }
            else{
                Node* temp;
                temp = topNode;
                topNode = topNode -> next;
                delete temp;  
            }
        }
        
        bool isEmpty(){
            // if(topNode == nullptr){
            //     return true;
            // }
            // else{
            //     return false;
            // }
            
            return topNode == nullptr;
        }
        void count(){
            // efficient way is to make data member for size and update value accordingly
            int count = 0;
            Node* current = topNode;
            if(isEmpty()){
                cout<<"Stack is empty"<<endl;
            }
            
            //  commented code leaves last element to count
            
            // do{
                
            //     count++;
            //     current = current ->next;
                
            // }while(current ->next != nullptr);
            
            while(current != nullptr){
                count++;
                current = current ->next;
                
            }
            cout<<"\n\nTotal Node :"<<count<<endl;;
        }
        
        void clear(){
            Node * temp;
            while(! isEmpty()){
                temp = topNode;
                topNode = topNode ->next;
                delete temp;
                
            }
        }
    
};

using namespace std;

int main()
{
    stack st;
   for(int i=0;i<5;i++){
       st.push(i);
   }
   st.display();
   st.count();
   st.pop();
   st.display();
   st.push(60);
    st.display();
   cout<<"Top Node data is:"<<st.peek()<<endl;
  
   st.count();
   st.clear();
   st.display();
   
   st.count();

    return 0;
}