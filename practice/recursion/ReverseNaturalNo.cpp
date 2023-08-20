#include <iostream>
using namespace std;

void fun(int n){
    if(n==0){
        return;
    }
    else{
        cout<<" "<<n;
        fun(n-1); // tail recursion
    }
}



int main(){
    fun(10);

}