#include<iostream>
using namespace std;
int Dig(int n){
    int j=0;
    while (n>0){
        n/=10;
        j++;
    }
    return j;
}
int pow(int m, int n){
    int prod=1;
    while (n>0){
        prod = prod* m;
        n--;
    }
    return prod;
}
int main()
{
    int number=45,sq=number*number, dig=Dig(number);
    int n=1;
    bool isKap=false;
    while (n<=dig){
        int firstDigs=sq/pow(10,n);
        int  lastDigs=sq%pow(10,n);
        if (firstDigs+lastDigs==number){
            isKap=true;
            cout<<"Check number : "<<n<<endl;
            cout<<"This number is Kapped tf out : "<<firstDigs<<" + "<<lastDigs<<" = "<<firstDigs+lastDigs<<" = "<<number<<endl<<endl;
            break;
        } 
        else {
            cout<<"Check number : "<<n<<endl;
            cout<<"This number ain't Kap bruh : "<<firstDigs<<" + "<<lastDigs<<" = "<<firstDigs+lastDigs<<" =/= "<<number<<endl<<endl;
        }
        n++;
    }
}

