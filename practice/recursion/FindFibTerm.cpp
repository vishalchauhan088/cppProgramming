#include <iostream>
using namespace std;

int find_nth_term(int x){
    if(x==1){
        return 0;
    }
    else if(x ==2){
        return 1;
    }
    else{
        return find_nth_term(x-1) + find_nth_term(x-2);
    }

}


int main(){
    cout<<" the 5th term of fib serires is: "<<find_nth_term(5);
}