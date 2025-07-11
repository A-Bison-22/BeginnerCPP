// class topic : bitwise operators;order precedence;scope; data type modifiers
// no code in this class
#include<iostream>
using namespace std;
int temp()
{
    {
        int x=10;   // this is called a code block, it's got a scope of its own
    }
    // cout<<x; // error
    return 0;
}
/*

STANDOUT PROBLEM
    HOW TO CHECK IF A NUMBER IS A POWER OF TWO WITHOUT USING LOOPS

Logic: 
a binary rep of a power of 2 looks like a power of 10, and minus one that value looks like a bunch of ones
so we compare n & n-1 bitwise-ly and only in the case of a power of 2 does the output come out to be 0
eg.
8d=1000b
(8-1)d=0111b
                    [1]     [0]     [0]     [0]

                    ↑│↓     ↑│↓     ↑│↓     ↑│↓ 

                &   [0]     [1]     [1]     [1]
                ----------------------------------
                    [0]     [0]     [0]     [0]
                ----------------------------------
            
        
this code returns 0 for 0 as -1 is 2-complemented and the final comparison is between
    00000000 //0 
  & 11111111 //-1
---------------------
    00000000 //0
---------------------
hence we need to add a barrier for n>0
implemented using a LOGICAL AND (&&) NOT A BITWISE AND (&)

Lesson learnt : Binary patterns and logical and distinction from bitwise and importance  
Thank you chatgpt

*/
string isPowerOf2(int n)        
{
    return ((n>0 && (n & (n-1))==0)?"true":"false");
}

// homework 2 : write a number in reverse
int reverse(int n ){
    int reversed=0;
    while (n>0){
        reversed=reversed*10+n%10;n/=10;
    }
    return reversed;
}
int main(){
    cout<<reverse(1123555);
    return 0;
}