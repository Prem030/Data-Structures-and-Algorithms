#include<iostream>
using namespace std;
// Note :- globaly we can create array of size 10^7 for boolean 10^8
int main(){
    // Note :- Inside main we can only arrray of 10^6; for boolean 10^7 
    int size;
    cin>>size;
    int arr[ size ];
    for( int i = 0 ; i < size ; i++ ){
        cin>> arr[ i ];
    }

    // Precomputation
    int hash[13] = {0}; 
    for (int i = 0; i < size; i++)
    {
        hash[ arr [ i ] ] += 1 ;
    }
    
    int q;
    cin>>q;
    while (q--)
    {   int number;
        cin>>number;
        cout<<number<<" : " <<hash[ number ]<<endl;
        // fetch 
    }
    


    return 0 ;
}