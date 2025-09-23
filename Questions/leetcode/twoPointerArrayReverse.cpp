#include<iostream>
using namespace std;

void reverseArray(int size , int start , int end , int brr[] ){
    if( start >= end ){
        for(int i = 0 ;  i < size ; i++){
            cout<<brr[i]<<" ";
        }
        return;
    }
    int temp = brr[ start ];
    brr[ start ] = brr[ end ];
    brr[ end ] = temp ;
    reverseArray( size , start + 1 , end - 1 , brr);

}

int main(){
    int size; 
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    reverseArray(size , 0 , size - 1 , arr );
    
    return 0;
}