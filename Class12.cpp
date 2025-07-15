/* 
Pair sum problem : Majority element, other approaches, among
Moore's voting algorithm 
*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Problem 1: pair sum
/* Premise : given an array sorted in ascending order, 
to return pair in sorted array with target sum*/
// First approach : Brute forcing;  O(N^2)
vector<int> pairSum(vector<int> list, int target){
    vector<int> ans;
    for (int frst=0; (frst<list.size());frst++){ // index of the first additive
        for(int scnd=0;(scnd < list.size()); scnd++){   //index of the second additive
            if ((scnd != frst) &&(list[scnd] + list[frst] == target)){
                ans.push_back(list[frst]);
                ans.push_back(list[scnd]);
                // cout<<list[frst]<<" + "<<list[scnd]<<" = "<<list[scnd] + list[frst]<<endl;                
                return ans;
            }
        }
    }
    return {-1}; //-1 implies no result
}
int main_for_brute_force_1(){
    vector<int> list={2,7,11,15};
    vector<int> gets=pairSum(list,4);
    for(int n : gets){
        cout<<n<<" + ";
    }
    cout<<0;
    return 0;
}
// better optimisation, utilising the sort with 2 pointer approach, O(n)
/*
put a finger at the first and last element of the ascending order list. If the sum is less than target, we need a bigger number to compensate; so move your left finger one towards right.
now if the sum is more than the target, we need a smaller number (than the one on your right finger) to balance it, and so, we move our right finger one towards the left.
we do this until our sum matches the target (in which case we return the vector and exit the function). if none matches, the loop exits to the return -1 statement and user 
must already know that <-1> means not found.
*/
vector<int> PairSumOPT(vector<int> nums, int target){
    int i=0; //left finger
    int j=nums.size()-1; //right finger
    while(i<j){
        if (nums[i]+nums[j]>target){
            j--;
        } 
        else if (nums[i]+nums[j]<target){
            i++;
        }
        else{
            return {nums[i],nums[j]};
        }
    }
    return {-1};
}
int main_for_PairSumOPT(){
    for (int n : PairSumOPT({2,4,6,10},6)){
        cout<<n<<endl;
    }
    return 0;
}

//Problem 2: Majority Element;
/*  
    given an array nums of size n; return the majority element;
    The majority element is the element that appears more than floor(n/2) times.
    one can assume that every array has a majority element.
*/
//method 1: brute forcing O(n^2)
// int main_bf1(){
//     vector<int> vec={1,2,2,1,1,4,4,4,4,4,4,4,4};
//     int size=vec.size(), majority_element=vec[0],majority_element_frequency=0;
//     for (int st=0;st<size;st++){
//         int count=0;
//         for (int check=0;check<size;check++){
//             if  (vec[check]==vec[st]){
//                 count+=1;
//             }
//         }
//         cout<<"Check number: "<<st+1<<endl;
//         cout<<"Element:  "<<vec[st]<<endl;
//         cout<<"Counted:  "<<count<<" times" <<endl;
//         cout<<"Majority? "<<(count>size/2?"true":"false")<<endl<<endl;
//         if(count>size/2){
//             majority_element=vec[st];
//             majority_element_frequency=count;
//         }

//     }
//     cout<<"================================================"<<endl;
//     cout<<"Majority Element:  "<<majority_element<<endl;
//     cout<<"Counted: "<<majority_element_frequency<<" times" <<endl;

//     return 0;
// }
/* 

// method 2;
// We will use an already sorted list, which will be sorted in an asssumed O(nlogn) time;
// after this, here's the approach

// */
// int main(){
//     //vector<int> vec={1,1,2,2,2,2,3};
//     vector<int> vec={9, 1, 3, 3, 2, 9, 4, 5, 3, 6, 3, 7, 3, 8, 3, 3, 3};
//     int freq=1,ans=vec[0],size=vec.size(),max_freq=size/2;
//     sort(vec.begin(),vec.end()); 
//     for(int n=1;n<size;n++){
//         if (vec[n]==vec[n-1]){
//             freq++;
//         }
//         else{
//             freq=1;
//             ans=vec[n];
//         }
//         if (freq>max_freq){
//             ans=vec[n];
//             cout<<ans;
//             break;
//         }
//     }

//     return 0;
// }
int Majority_Element(vector<int> vec){
    int ν=1;
    int x=vec[0];
    for(int i=1;i<vec.size();i++)
    {   
        if (x==vec[i]){
            ν++;
        } else {
            ν--;
        }
        if (ν==0){
            x=vec[i];
        } 
    }
    int freq_check=0;
    for(int i=0 ; i<vec.size();i++){
        if (vec[i]==x){
            freq_check++;
        }
    }
    if (freq_check > vec.size()/2){
        return x;
    }
    else{
        return INT_MIN;
    }
    return INT_MIN;
}
int main(){
   cout<<Majority_Element({0});
    return 0;
}