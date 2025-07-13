#include<iostream>
using namespace std;

int sumdig(int n){
    int sum=0;
    int num;
    while(n>0){
        num = n % 10;
        sum += num;
        n /= 10;
    }
    return sum;
}

int main(){
    cout << sumdig(123);
    return 0;
}