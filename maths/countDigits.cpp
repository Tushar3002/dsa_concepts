#include <bits/stdc++.h> 
using namespace std;
int countDigit(long long x) {
    int count=0;
    x = abs(x);
    while (x > 0) {
        int last=x%10;
        count++;
        x /=10;
    }
    return count;
}
int countLog(int n){
    if (n == 0) return 1;
    return (int)(log10(abs(n)) + 1);
}

int Cdig(int num){
    int count=0;
    if(num==0){return 1;}
    if(num<0){
        num = -num;
    }
    while(num>0)
    {
        count++;
        num /= 10;
    }
    return count;
}
int main(){
    int n=-1000;
    cout << countDigit(n) << endl;
    cout << countLog(n) << endl;
    cout << Cdig(n) << endl;
    //cout << (log10(n) + 1) << endl;
    return 0;
}