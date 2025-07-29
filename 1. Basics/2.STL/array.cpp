#include<iostream>
#include<array>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    array<int , 5> brr = {10 , 20, 30 , 40 , 50 }; // brr is a static array;
    int size = brr.size(); // we can get the length of the array 
    for(int i = 0 ; i< size ; i++)
        cout<<brr[i]<<" ";
    cout<<endl;
    cout<<"is array empty ? : "<<brr.empty()<<endl;
    cout<<"element at "<<2<<" : "<<brr.at(2)<<endl;
    cout<<"fist element : "<<brr.front()<<endl; //we can get first element of the array
    cout<<"last element : "<<brr.back()<<endl; // we can get last element of array

    return 0;
}