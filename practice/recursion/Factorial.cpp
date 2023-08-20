#include <bits/stdc++.h>
using namespace std;

factorial(int x){

    // base condition
    // wrong base condition causes stack overflow
    
    if(x<=1){   
        return 1;
    }
    else{
        return x* factorial(x-1);
    }
}

int main(){
    int num;
    cout<<"Enter the element:";
    cin>>num;
    int f = factorial(num);
    cout<<"factorial of "<<num <<" is :"<<f<<endl;
}