#include<iostream>
using namespace std;

void solve(int i,int n){
    if(i>n) return;
    cout << i << endl;
    solve(i+1,n);
}

void rev(int i,int n){
    if(i<1) return;
    cout << i << endl;
    rev(i-1,n);
}

void printNumBackTrace(int i,int n){
    if(i<1) return;
    printNumBackTrace(i-1,n);
    cout << i << endl;
}
void revNumBackTrace(int i,int n){
    if(i>n) return;
    revNumBackTrace(i+1,n);
    cout << i << endl;
}

void print(int i,int n){
    if(n==i) return  ;
    cout << i << endl;
    print(i+1,n);
    
}

int main(){
    int n;
    cin >> n;
    solve(1,n);
    rev(n,n);
    printNumBackTrace(n,n);
    revNumBackTrace(1,n);
    print(1,5);
    return 0;
}