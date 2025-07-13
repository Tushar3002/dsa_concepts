#include<iostream>
using namespace std;

string primenum(int n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return "non Prime";
        }
    }
    return "Prime";
}

int main(){
    cout << primenum(14) << endl;
    return 0;
}