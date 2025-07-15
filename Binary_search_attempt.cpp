#include<iostream>
#include<vector>
using namespace std;
/*
I have just found out that there exists a searching algorithm called a Binary search of O(logn) time complexity, 
I do not the know the particulars but lets try to code it
*/
int Index_return(vector<int> vec,int target){
    int low=0, high=vec.size()-1;       
    while (low<=high){
        int mid=(low+high)/2;       // in the sorted array; we first check the mid point
        if (vec[mid]>target){       // if the mid point > target; this means that the
            high=mid-1;             // target lies left of the mid point, and so, we 
        }                           //can shift the higher bound of search to the current mid point limiting our search area to  [0 : mid/2)

        else if (vec[mid]==target){ // if the vec[mid] matches the value, skip the riff raff 
            return mid;
        }

        else{                       // in the opposite case, id est, vec[mid]<target, this shows
            low = mid+1;            // that the value lies right of the mid point and hence 
        }                           // we shift out focus to (mid/2 : N-1]
    }
    return -1;
}
/* 
    how this loop exits is not very clear at first sight
    let's consider a case, where the target value is
    not in the array; 
    
    then, for example, Index_return ({0,1,2,3,4,5,6,7+1,8+1,9+1,10+1},7) dry runs as: 

        step 0 : low = 0 high = 10 mid = 5; 
            check 1: vec[5] = 5 > 7? False, -> low=mid+1

        step 1 : low = 6 high = 10 mid = 8;
            check 2: vec[8] = 9 > 7? True -> high = mid-1

        step 2 : low = 6 high = 7 mid = 6;
            check 3 : vec[6] = 6 > 7? False, -> low = mid+1

        step 3 : low = 7 high = 7 mid = 7;
            check 4 : vec [7] = 8 > 7? True -> high =mid-1

        step 4 : low = 7 high = 6  !!!! BREAK !!!!
    

*/
int main(){
    vector<int> vec={0,1, 2, 3, 4, 5, 6 , 7+1 , 8+1 ,9+1 ,10+1};
    cout<<Index_return(vec,7);
    return 0;
}