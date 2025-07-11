#include <iostream>
using namespace std;
int pow(int m, int n){
    int prod=1;
    while (n>0){
        prod=prod*m;
        n--;
    }
    return prod;
}
int Dig(int n){
    int j=0, quo;
    while (quo!=0){
        quo=n/pow(10,j);
        j++;
    }
    return j-1;
}
int main_my_attempt(){
    int number=145676541,dig=Dig(number)-1,k=0, placeholder=number, quo;
    for (int j=0;j<=dig;j++){
        quo=number/pow(10,dig-j);
        number=number%pow(10,dig-j);
        k+=quo*pow(10,j);
    }
    cout<<placeholder<<endl;                                                                    // this code is shitty; chatgpt's code blew me away (main function)
    if (k==placeholder){
        cout<<"This number is palindromic";
    }else {
        cout<<"This number is not palindromic";
    }
    bool isPal=true;
    // how many digits does the number have? lets say n
    // first we extract the jth digit , then multiply by 10^n-j then add to a k=0
    // finally check if k=j
    return 0; // formality or some shit idk
}
bool isPal(int n)
    {
        int k=n,reversed=0;
        bool isPal=false;
        while (n>0){
            reversed=reversed*10+n%10;
            n/=10;
        }
        if (reversed==k){                                                                                               //this dude chatgpt so elegant w it 💔
            isPal=true;
        }
        return isPal;
    }
int main (){
    int n=12321;
    cout<<(isPal(n)? "Palindromic": "Non palindromic"); // #imverysmart 
    return 0;
}