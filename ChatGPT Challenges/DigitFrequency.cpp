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
int main()
{

    int number=12325,placeholder=number;
    while(placeholder>0)
    {
        int digit=placeholder%10,placeholder2=number,number_of_digits=Dig(number);
        int count=0;
        while(placeholder2>0)
        {
            int digit2=placeholder2%10;
            if (digit2==digit)
            {
                count++;
            }
            placeholder2/=10;

        }
        placeholder/=10;
        cout<<digit<<" appears "<<count<<" times "<< endl;
    }
    return 0;
}