/*
    Today's Class was about the basics of c++, i used the Apna College Youtube playlist to learn all this
    I also used ChatGPT to generate some relevant and relatively tougher problems than the ones done in class  
    i've already done this language but that was a long time ago
    and i've forgotten most intermediate level functionalities like arrays and classes
    i hope i can get to leet-code level programmer status by the end of this

*/

//to build a basic calculator
#include<iostream>
using namespace std;
int main(){
    double a,b;
    cout<<"Enter a";cin>>a;cout<<endl;
    cout<<"Enter b";cin>>b;cout<<endl;
    string choice;
    cout<<"What operation to perform?"<<endl;
    cout<<"      Addition : input \'a\' "<<endl;
    cout<<"   Subtraction : input \'s\' "<<endl;
    cout<<"      Division : input \'d\' "<<endl;
    cout<<"Multiplication : input \'t\' "<<endl;
    cin>>choice;
    if (choice=="a"){
        cout<<a+b;
    }
    else if (choice=="s"){
        cout<<a-b;
    }
    else if (choice=="d"){
        cout<<a/b;
    }
    else if (choice=="m"){
        cout<<a*b;
    }
    else{
        cout<<"Incorrect input";
    }
    return 0;
}  