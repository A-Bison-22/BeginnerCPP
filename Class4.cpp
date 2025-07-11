//class dealt with conditionals & loops
/* It was extremely boring 
   But i've made it out well and alive 
*/

#include<iostream>
#include <cmath>
using namespace std;
// int main(){
//     int rows=5;
//     int n=1;
//     while  (n<=rows){
//         int i=1;
//         while (i<=n){
//             cout<<"*";               // using only while
//             i++;                     // check first then work
//         } 
//         cout<<endl;
//         n++;
//     }
//     return 0 ;
// }

// int main(){
//     int rows=5;
//     for (int n=1; n<=rows ; n++){
//         for (int i =1; i<=n; i++){    // using only for 
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int rows=5,n=0;
//     do {
//         int i=0;
//         do {
//             cout<<"*";               //using only do-while  
//             i++;                     // work first then check
//         }while (i<=n);
//         cout<<endl;
//         n++;
//     } while (n<=rows);
// }

//prime checker

// int main(){
//     int number=19,top=pow(number,0.5);
//     bool primestatus=true;
//     for (int i =2 ; i <=top ; i++){
//         if (number % i == 0){
//             primestatus=false;
//             break;
//         }
//     }
//     if (primestatus){
//         cout<<"It's prime";
        
//     }else{
//         cout<<"It's composite";
//     }

// }

// // homework 1 : sum of numbers from 1 to n div by 3
// int main(){
//     int n=30, sum=0;
//     for (int i = 0; i<=n; i+=3)
//     {
//         sum+=i;
//     }
//     cout<<sum;
//     return 0;
// }

// // homework 2:  factorial of n
// int main(){
//     int n=6,prod=1;
//     for (int i=1;i<=n;i++){
//         prod=prod*i;
//     }
//     cout<<prod;
//     return 0;
// }