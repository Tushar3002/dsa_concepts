#include<iostream>
using namespace std;


bool palindrome(int n){
    int rev=0,rem;
    int val=n;
    while(val>0){
        rem = val % 10;
        rev = rev * 10 +rem;
        val /= 10;
    }
    if(rev == n){
        return true;
    }else{
        return false;
    }
}
int main(){
    cout << palindrome(121) << endl;
    return 0;
}