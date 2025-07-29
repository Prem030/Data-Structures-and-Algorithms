#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    for( int i = 1 ; i <= n ; i++){
        for( int j = 1 ; j <= i ;j++){
            cout<<"* ";

        }
        for( int a = n - 1 ; a >= i ; a--){
            cout<<"  ";
        }
        for( int c = n - 1 ; c >= i ; c--){
            cout<<"  ";
        }
        for(int b = 1 ; b<= i; b++)
            cout<<"* ";
        cout<<endl;
    }
    for( int i = n-1 ; i>= 1 ; i--){
        for(int j = 1; j <= i ; j++)
            cout<<"* ";
        for(int a = n-1 ; a >= i ; a-- )
            cout<<"  ";
        for(int b = n-1 ; b >= i ; b-- )
            cout<<"  ";
        for(int c = 1; c <= i ; c++)
            cout<<"* ";
        cout<<endl;
    }
    return 0;
}