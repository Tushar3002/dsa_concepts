#include<iostream>
using namespace std;
void divi(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout << i << " " ;
        }
    }cout << endl;
}

int solve(int n){// this will work for sum of divisor
    int sum=0;
    for(int i=1;i<=n;i++){
        int count = 0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count += j;
            }
        }
        sum += count;
    }
    return sum;

}
int main(){
    divi(4);
    cout << solve(4);
    return 0;
}

// int sumOfAllDivisors(int n) {
//     // Create an array to store the sum of divisors for each number
//     int sum[n + 1];
    
//     // Initialize the sum array with 0
//     for (int i = 1; i <= n; i++) {
//         sum[i] = 0;
//     }
    
//     // For each number i, add it as a divisor to all its multiples
//     for (int i = 1; i <= n; i++) {
//         for (int j = i; j <= n; j += i) {
//             sum[j] += i;  // i is a divisor of j
//         }
//     }

//     // Calculate the total sum
//     int totalSum = 0;
//     for (int i = 1; i <= n; i++) {
//         totalSum += sum[i];
//     }

//     return totalSum;
// }

// #include<iostream>
// using namespace std;

// int* printDivisors(int n, int &size) {
//     // First, we'll count the number of divisors.
//     int count = 0;
    
//     // Find divisors and count them.
//     for (int i = 1; i <= n; i++) {
//         if (n % i == 0) {
//             count++;
//         }
//     }

//     // Allocate memory for the divisors array.
//     int* divisors = new int[count];
//     size = count;  // Set the size to the count of divisors.
//     int index = 0;

//     // Fill the divisors array.
//     for (int i = 1; i <= n; i++) {
//         if (n % i == 0) {
//             divisors[index++] = i;
//         }
//     }

//     // Return the array of divisors.
//     return divisors;
// }

// int main() {
//     int size = 0;
//     int* divisors = printDivisors(12, size);  // Get the divisors of 12
    
//     // Print the divisors.
//     for (int i = 0; i < size; i++) {
//         cout << divisors[i] << " ";
//     }
//     cout << endl;

//     // Don't forget to delete the allocated memory to avoid memory leak.
//     delete[] divisors;

//     return 0;
// }
