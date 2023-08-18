#include <iostream>

using namespace std;

class Set{
    public:
        static const int MAX_SIZE=100 ;
        int elements[MAX_SIZE];
        int size;

        Set ():size(0){};

   
        bool contains(int element)const{
            for(int i=0;i<size;i++){
                if(elements[i]==element){
                    return true;
                }
            }
            return false;
        }

        void addElement(int x){  
            
            
            if(!this->contains(x)){
                elements[size++]=x;
            }
           
        }

        Set unionWith( const Set & otherSet){
            Set result = *this;
            for(int i=0;i<otherSet.size;i++){
                
                result.addElement(otherSet.elements[i]);
                
            }
            return result;
        }

        Set intersectWith( const Set& otherSet)const{
            Set result;
            
                for(int i=0;i<size;i++){
                    if(otherSet.contains(this->elements[i])){
                        result.addElement(this->elements[i]);
                    }
                }
                return result;
            
        }
        Set differeceWith(const Set& otherSet)const{
            Set result;
            for(int i=0;i<size;i++){
                if(!otherSet.contains(elements[i])){
                    result.addElement(elements[i]);
                }
            }
            return result;
        }
        
        void printSet(){
            for(int i=0;i<size;i++){
                cout<<elements[i]<<"  ";
            }
            cout<<endl;
        }
        int totalSubSets(){
            int result=1;
            if(size ==0){
                return 0;
            }
            for(int i=0;i<size;i++){
                result *=2;
            }
            return result;
        }

        Set symmetricDiff(const Set& otherSet){
            Set unionOfBoth = this->unionWith(otherSet);
            Set intersectionOfBoth = this->intersectWith(otherSet);
            Set result = unionOfBoth.differeceWith(intersectionOfBoth);
            return result;
        }
        

};

int main(){
    Set A;
    Set B;
    int x;
    cout<<"Enter element for set A"<<endl;
    for(int i=0;i<5;i++){
        cin>>x;
        A.addElement(x);
       
    }
    cout<<"Enter the element of Set B"<<endl;
    for(int i=0;i<5;i++){
        cin>>x;
        B.addElement(x);
    }
    cout<<"Set A is:"<<endl;
    A.printSet();
    cout<<"Set B is:"<<endl;
    B.printSet();
    
    cout<<"Intersection of A and B is:"<<endl;
    Set result = A.intersectWith(B);
    result.printSet();
    
    cout<<"Union of Set A and Set B is:"<<endl;
    Set resultunion = A.unionWith(B);
    resultunion.printSet();
    
    cout<<"difference of Set A to Set B"<<endl;
    Set resutDiff = A.differeceWith(B);
    resutDiff.printSet();

    // cout<<"difference of Set A to Set B"<<endl;
    // Set resutDiff = A.differeceWith(B);
    // resutDiff.printSet();
    
    cout<<"Total subsets of set A is: "<<A.totalSubSets()<<endl;
    cout<<"Symmetric differece of both set is:"<<endl;
    Set symDiff = A.symmetricDiff(B);
    symDiff.printSet();
    
    
    

    return 0;
}