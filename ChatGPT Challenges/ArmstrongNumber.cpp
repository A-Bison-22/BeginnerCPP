
#include<iostream>
using namespace std;
int pow(int m, int n){
    int prod=1;
    while (n>0){
        prod = prod* m;
        n--;
    }
    return prod;
}
int Dig(int n){
    int j=0;
    while (n>0){
        n/=10;
        j++;
    }
    return j;
}
int main(){
    int number=153,sum=0,placeholder=number,number_of_digits=Dig(number),digit=0;;
    while (number>0){
        
        digit=number%10;
        sum+=pow(digit,number_of_digits);
        number=number/10;
    }
    cout<<(placeholder)<<(sum==placeholder?" is Armstrong":" is Not armstrong");
    cout<<endl;
    cout<<pow(10,2)<<endl;
    cout<<Dig(123123)<<endl;
    return 0;
}   
