#include <iostream>
using namespace std;

int findSum(int x){
    if(x==0){
        return 0;
    }
    else{
        return x%10 + findSum(x/10);
    }
}

int main(){
    cout<<"Sum of digit is:"<<findSum(789)<<endl;
}