//Given a positive integer n, count the number of digits in n that divide n evenly (i.e., without leaving a remainder). Return the total number of such digits.

#include<iostream>
using namespace std;

    int evenlyDivides(int n) {
        int count=0,rem;
        int val=abs(n);
        while(val>0){
            rem = val % 10;
            if(rem!=0 && n%rem==0){
                count++;
            }
            val /= 10;
        } 
        return count;
    }

int main(){
    cout << evenlyDivides(20) << endl;
    return 0;
}