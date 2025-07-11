//Class 6: functions
/* a very basic class on functions. They also forgot to teach us default arguments of a function */
#include <iostream>
using namespace std;
// // Problem 1 Digit sum
// int pow(int m, int n){
//     int prod=1;
//     for (int i=1;i<=n;i++){
//         prod=prod*m;
//     }
//     return prod;
// }
// int digitsum(int n){
//     int sum=0,quo,numdig;
//     for(int i=0;quo!=0;i++){    //find number of digits by dividing by higher
//         quo=n/pow(10,i);        // powers of 10
//         numdig=i;
//     }
//     numdig-=1;
//     for (int i=numdig;i>=0;i--){
//         sum+=n/pow(10,i);           // sum the digits
//         n=n%pow(10,i);              
//     }
//     return sum;
// }   
// int main(){
//     cout<<digitsum(141123);
//     return 0;
// }

// // Problem 2 Binomial Coefficienet
// int fact(int n){
//     int prod=1;
//     while (n>0){
//         prod*=n;
//         n--;
//     }
//     return prod;
// }
// int nCr(int n, int r){
//     int nCr=fact(n)/(fact(r)*fact(n-r));
//     return nCr;
// }
// int main(){
//     cout<<nCr(1,2);
//     return 0;
// }

// // Homework 1 & 2 : Check Primes and print primes until n
// bool isPrime(int n){
//     bool isprime=true;
//     for(int i =2; i<n;i++){
//         if (n%i==0){
//             isprime=false;
//             break;
//         }
//     }
//     return isprime;
// }
// void printPrimes(int n){
//     for (int i =2; i<n;i++){
//         if (isPrime(i)){
//             cout<<i<<", ";
//         }
//     }
// }
// int main(){
//     printPrimes(10);
//     return 0;
// }

// // Homework 3 : Nth Fibbionacci
// int printFib(int n){
//     n-=2;
//     int a=1,b=1,c;
//     if (n>=1){
//         for (int i =1 ; i <=n; i++)    {
//             c=a+b;
//             a=b;
//             b=c;
//         }
//     }
//     else {
//         c=1;
//     }
//     return c;
// }
// int main(){
//     cout<<printFib(1);
//     return 0;
// }

