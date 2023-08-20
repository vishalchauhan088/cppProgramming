#include <iostream>
using namespace std;

float pow(int x, int n){
    if(n==0){
        return 1;
    }
    else if(n>0){
        return x * pow(x, n-1);
    }
    else{
        if(x==0){
            cout<<"cannot be calculate"<<endl;
            return 0;
        }
        return 1.f/(x* pow(x,-n-1));
    }
}

int main(){

    cout<<"answer is:"<<pow(0,-1);
}