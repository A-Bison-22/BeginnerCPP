//class topic: arrays
#include<iostream>
using namespace std;

// // Problem 1 : Smallest and Largest in an array
// int main(){
//     // how to initiate?
//     //question 1, smallest and largest number in an array
//     int smallest=INT_MAX, largest=INT_MIN, marks[]={99,100,54,36,88}, size=sizeof(marks)/sizeof(marks[0]); //lesson learnt : largest int is denoted by INT_MAX likewise for INT_MIN
//     for (int i=0; i<size; i++){                                                                            //                I was initially setting smallest=2^31-1 and largest=-2^31
//         if (marks[i]<smallest){
//             smallest=marks[i];
//         }
//         if (marks[i]>largest){
//             largest=marks[i];
//         }
//     }   
//     cout<<smallest<<endl;
//     cout<<largest;
//     return 0;
// }

// // Problem n: Bubble sort an array; (idk lol i thought i'd try)
// int main()
// {
//     int L[] = {42, 17, 93, 8, 56, 24, 61, 39, 77, 5};
//     int len=sizeof(L)/sizeof(L[0]);
//     int list[len];
//     bool swapped=false;
//     for (int j=0; j<len;j++){list[j]=L[j];}
//     while (!swapped){  
//         for(int i =0 ; i< len-1; i++){
//             if (list[i+1]<list[i]){
//                 int c=list[i+1];
//                 list[i+1]=list[i];
//                 list[i]=c;
//                 swapped=true;
//             }
//         } 
//         if (!swapped){
//             break;
//         }
//         for(int k=0; k<len; k++){
//             cout<<list[k]<<" ";
//         }  
//         cout<<endl;
//         swapped=false;
//     }
//     cout<<endl;
//     return 0;
// }

// // problem 2 : Linear search
// int search(int arr[],int searchterm,int size){
//     int index=size;
//     bool found=false;
//     for (int i=0; i< size; i++){
//         if (arr[i]==searchterm){
//             index=i;
//             found=true;
//             break;
//         }
//         if(i==size-1 && !found){                                                     // this is my first attempt, ma'ams code gets rid of the extra if & found variable
//             index=-1;
//             break;
//         }
        
//     }
//     return index;
// }
// int search(int arr[],int searchterm,int size){
//     int index=size;
//     for (int i=0; i< size; i++){
//         if (arr[i]==searchterm){
//             index=i;
//             return index;               // function stops executing the moment the value is found; which means that this return statement does not get a chance to be executed unless the if has failed through every iteration. neat stuff 👍 
//             break;                      //                                                                           |
//         }                              //                                                                            |
//     }                                  //                                                                            |
//     return -1;// <---------------------------------------------------------------------------------------------------+
// }
// int main(){
//     int arr[]={1,2,3,2,1,4};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     cout<<search(arr,3,size)<<endl;
//     cout<<search(arr,41,size)<<endl;
// }


// // problem 3; reverse an array
// int main(){
//     int arr[] = {42, 17, 93, 8, 56, 24, 61, 39, 77, 5};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     int new_arr[size]={},j=0;   
//     for(int k=0;k<size;k++){cout<<arr[k]<<" ";} cout<<endl;
//     for (int i=size-1;i>=0;i--){new_arr[size-i-1]=arr[i];}
//     for(int k=0;k<size;k++){cout<<new_arr[k]<<" ";}
//     return 0;
// }

// Homework problem 1: sum of all elements in an array
int sum(int arr[], int size){
    int sum=0;
    for(int j=0;j<size;j++){sum+=arr[j];}
    return sum;
}
int prod(int arr[], int size){
    int prod=1;
    for(int j=0;j<size;j++){prod=prod*arr[j];}
    return prod;
}
void intersection(int arr1[],int arr2[],int size1,int size2){
    if (size1>=size2){
        for (int i=0; i<size1;i++){
            int checker=arr1[i];
            for(int j=0;j<size2;j++){
                if(arr2[j]==checker){
                    cout<<checker<<" "; 
                }
            }
        }
    }
    else{
        for (int i=0; i<size2;i++){
            int checker=arr2[i];
            for(int j=0;j<size1;j++){
                if(arr1[j]==checker){
                    cout<<checker<<" "; 
                }
            } 
        }
    }
}
void unique_values(int arr[],int size){
    for(int i=0;i<size;i++){
        bool unique=true;
        for(int j=0;j<size;j++){
            if  (arr[j] == arr[i] && j != i){
                unique=false;
                break;
            }
        }
        if (unique){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int arr[]={1,2,2,3,3,5,3,4,4,4,4},size=sizeof(arr)/sizeof(arr[0]);
    unique_values(arr,size);
    return 0;
}