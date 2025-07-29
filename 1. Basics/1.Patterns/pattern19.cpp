#include<iostream>
using namespace std; 
int main(){
    int n;
    cin>>n;
    for( int i = 1; i <= n ; i++){
        for(int a = n ; a >= i ; a--){
            cout<<"* ";
        }
        for(int c = n-1 ; c > n-i ; c--){
            cout<<"  ";
        }
        for(int d = n-1 ; d > n-i ; d--){
            cout<<"  ";
        }
        for( int b = n*2 ; b >= i+n; b--){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i; j++){
            cout<<"* ";
        }
        for( int a = n - 1 ; a >= i ; a--){
            cout<<"  ";
        }
        for( int b = n - 1 ; b >= i ; b--){
            cout<<"  ";
        }
        for(int d = 1 ; d <= i; d++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0 ;
}