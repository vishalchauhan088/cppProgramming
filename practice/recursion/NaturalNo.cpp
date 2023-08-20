#include <iostream>
using namespace std;

void fun(int n){
    if(n==0){
        return;
    }
    else{
        fun(n-1);
        cout<<" "<<n; // natural no by non-tail recursion.
    }
}

int main(){
    fun(10);
}