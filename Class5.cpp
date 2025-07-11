//nested for-loops and patterns, video 5/250
/*
   This class dealt with patterns. My favorite one was the numerical continuity right angled triangle (8)
   Because back when we were learning Python in class 12 my friend Aarav bet me i couldn't write a code for it in 
   one line. He was right, I couldn't. 
*/
#include<iostream>
using namespace std;

// // problem 1, square pattern 1 
// // 1234
// // 1234
// // 1234
// // 1234
// int main(){
//     int n;
//     cout<<"Enter n:"<<endl;
//     cin >>n;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=n;j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // problem 2, square pattern 2 
// // abc
// // abc
// // abc
// int main(){
//     int n=6;
//     for (int i=0; i<n;i++){
//         char ch = 'A';
//         for (int j=0; j<n; j++){        //lesson learnt : chars are incremented like ints
//             cout<<ch;
//             ch=ch+1;
//         }
//         cout<<endl;
//     }
// }

// // problem 3, square pattern 3 
// // 123
// // 456
// // 789
// int main(){
//     int n;
//     cout<<"Enter n:"<<endl;
//     cin >>n;
//     int k=1;
//     for (int i=1;i<=n;i++){  
//         for (int j=1;j<=n;j++){
//             cout<<k;
//             k++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // Homework problem 1 
// int main(){
//     int n;
//     cout<<"Enter n:"<<endl;
//     cin >>n;
//     char ch='A';
//     for (int i=1;i<=n;i++){  
//         for (int j=1;j<=n;j++){
//             cout<<ch;
//             ch+=1;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // problem 4, triangle pattern 1 
// int main(){
//     int rows=5;
//     for (int n=1; n<=rows; n++ ){
//         for (int i=1;i<=n; i++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// // problem 5, triangle pattern 2 
// int main(){
//     int rows=5;
//     for (int n =1 ; n<=rows ; n++){
//         for (int i =1 ; i<=n ; i++){
//             cout<<n;
//         }
//         cout<<endl;
//     }
// }

// // Homework problem 2 
// int main(){
//     int rows=5;
//     char ch='A';
//     for (int n = 1; n<=rows;n++){
//         for (int i=1; i<=n;i++){
//             cout<<ch;
//         }
//         ch+=1;
//         cout<<endl;
//     }
// }

// // problem 6, triangle pattern 3 
// int main(){
//     int rows=5;
//     for (int n = 1; n<=rows; n++){
//         for (int i=1; i<=n; i++){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }

// // problem 7, interally reverse triangle pattern 
// int main(){
//     int rows=5;
//     for(int n=1;n<=rows;n++){
//         for (int i=n;i>=1;i--){
//             cout<<i;
//         }
//         cout<<endl;
//     }
// }

// // problem 8, Floyd's triangle pattern 
// int main(){
//     int rows=5,k=1;
//     for (int n = 1; n<=rows;n++){
//         for (int i=1;i<=n;i++){
//             cout<<k;
//             k++;
//         }
//         cout<<endl;
//     }
// }

// // Homework problem 3
// int main(){
//     int rows=5;
//     char ch='A';
//     for (int n =1 ; n<=rows;n++){
//         for (int i =1; i<=n;i++){
//             cout<<ch;
//             ch++;
//         }
//         cout<<endl;
//     }
// }

// // Homework problem 4 
// int main(){
//     int rows=5;
//     char ch='A'-1;
//     for (int n=1;n<=rows;n++){
//         for (int i =n;i>=1;i--){
//             char temp=ch+i;
//             cout<<temp;
//         }
//         cout <<endl;
//     }
// }

// // problem 9, inverted triangle patttern 1 
// int main(){
//     int rows=5;
//     for (int n=0;n<rows;n++){
//         for(int i=0;i<n;i++){
//             cout<<" ";
//         }
//         for(int j = rows-n;j>0;j--){
//             cout<<n+1;
//         }
//         cout<<endl;
//     }
// }

// // problem 10, pyramid 
// int main(){
//     int rows=5;
//     for(int n=1;n<=rows;n++){
//         for(int i=rows-n;i>0;i--){
//             cout<<"-";
//         }
//         for(int j=1;j<n;j++){
//             cout<<j;
//         }
//         for(int k=n;k>0;k--){
//             cout<<k;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// // problem 11, hollow diamond {Standout} 
// int main(){
//     int rows=9;
//     for(int i=rows;i>1;i--){
//         cout<<" ";}
//     cout<<"*"<<endl;
//     for (int n =1;  n <rows;n++){
//         for(int i=1; i<rows-n;i++){
//             cout<<" ";}
//         cout<<"*";
//         for (int j = 2*n-1;j>0;j--){
//             cout<<" ";}
//         cout<<"*"<<endl;}
//     for(int n=rows-1; n>1;n--){
//         for(int i=rows-n;i>0;i--){
//             cout<<" ";}
//         cout<<"*";
//         for (int l=2*(n-2)+1;l>0;l--){
//             cout<<" ";}
//         cout<<"*"<<endl;}
//     for(int temp=rows-1;temp>0;temp--){
//         cout<<" ";}
//     cout<<"*"<<endl;;
//     return 0;   
// }

// // Homework problem 5
// int main(){
//     int rows=5;
//     for (int n =1; n<=rows;n++){
//         for (int i=1; i<=n; i++){
//             cout<<"*";
//         }
//         for (int j=0;j<2*(rows-n);j++){
//             cout<<" ";
//         }
//         for (int i=1; i<=n; i++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     for (int n =rows-1; n>0;n--){
//         for (int i=1; i<=n; i++){
//             cout<<"*";
//         }
//         for (int j=0;j<2*(rows-n);j++){
//             cout<<" ";
//         }
//         for (int i=1; i<=n; i++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }
