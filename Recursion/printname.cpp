#include<iostream>
using namespace std;

void nameRec(int n){
    //int n=5
    if(n==0) return;
    cout << "Tushar "  << endl;
    nameRec(n-1);
}
void nameRec2(int i,int n){
    //int n=5
    if(i>n) return;
    cout << "Tushar " << i << endl;
    nameRec2(i+1,n);
}

int main(){
    int n;
    cin >> n;
    nameRec(n);
    nameRec2(1,n);
    return 0;
}