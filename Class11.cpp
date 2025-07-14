// CT: DSA : Kadane's Algorithm
// This shit had me stumped won't lie to you
#include<iostream>
#include<vector>
using namespace std;
/*
a subarray is a small continuous part of a larger array, speaking python, it's the equivalent of a slice;
consider an array 1234
total number of non-empty subsets : 2^4-1=15  (using Bernoulli's counting principle)
id est:  <>,1,2,3,4,12,23,34,24,31,14,123,234,341,412,1234;
in this, the subarrays are: 
1,2,3,4, 12,23,34, ,123,234, 1234 
number of sub-arrays= n (n+1 )/ 2 (by simple summation ie. sigma n - k + 1 ; k goes from 0 to n)

a subarray definition only needs a start and an end;
in 1,2,3,4,5  , a subarray from 0 to 0 simply describes the first element 1;
one from 0 to 1 describes 1,2 etc.

Kadane's algorithm, and today's focus is to maximise the sums of the subarrays 
*/

// method 1 :  brute force 1      O(n^3) time complexity
/*
Working: 
First, we go through each index making it a start
then, we go through each index after, making it  the end;
then in between and including these values we calculate a sum, and compare that with sum_max;
*/
int bf1(){
    int arr[]={-1,-2,-1,4,5,6,-7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum_max=INT_MIN,best_end=0,best_st=0;
    for (int st=0; st<n; st++){         //starter loop O(n)
        for (int end=st;end<n;end++){   //ender loop  O(n^2)
            int sum=0;
            cout<<"<";
            for (int trav = st; trav<=end;trav++){  //traverser loop O(n^3)
                sum+=arr[trav];
                cout<<arr[trav];
                if (trav != end) {cout<<",";}
            }
            cout<<">";
            if (sum > sum_max){
                sum_max=sum;
                best_end=end;
                best_st=st;
                cout<<"\nlargest sum till now: "<<sum_max;
                cout<<" found at "<<st<<" : "<<end<<endl;
            }
        cout<<endl;
        }
    }
    cout<<"\nlargest sum till now: "<<sum_max;
    cout<<" found at "<<best_st<<" : "<<best_end<<endl;
    return 0;
}
//method 2 : Brute force 2, O(n^2) time complexity
/*
Working:  
instead of the 3rd traversal loop, we sum the arr[end] to the starting point, like how one does it with a pen and paper
*/
int bf2(){
    int arr[]={-1,-2,-1,4,5,6,-7}; //creamy section = 3:5
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum_max=INT_MIN,best_end=0,best_st=0,re;
    for(int st=0;st<n;st++){
        int sum=0;
        for(int end=st;end<n;end++){
            cout<<"\nChecking  "<<st<<" : "<<end<<endl;
            sum+=arr[end];
            re=end;
            if (sum>sum_max){
                cout<<"$$$ New Best $$$"<<endl;
                sum_max=sum;
                best_end=re;
                best_st=st;
            }
            
            cout<<"largest sum till now: "<<sum_max;
            cout<<" found at "<<best_st<<" : "<<best_end<<endl;
        }
    }
    cout<<"\nlargest sum till now: "<<sum_max;
    cout<<" found at "<<best_st<<" : "<<best_end<<endl;
    return 0;
}
/* {Standout}
Most Optimised algo : Kadane's (कडाने) 
I still don't 100% understand this
update:i now understand it but i dont know how to describe it
*/
int kdn(){
    int arr[5]={-1,-1,2,3,-4};
    int n=5;
    int sum=arr[0],max_sum=arr[0];
    for (int st=1; st<n;st++){
            sum=max(arr[st],sum+arr[st]);
            if( sum>max_sum){
                max_sum=sum;
            }
    }
    cout<<max_sum;
    return 0;
}
