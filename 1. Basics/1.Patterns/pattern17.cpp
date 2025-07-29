#include<iostream>
using namespace std;
int main(){
    int n; 
    cin>>n;
    char ch = 'A';
    for(int i = 0 ; i < n ; i++){
        char ch = 'A';
        for( int j = n - 1 ; j > i ; j--)
            cout<<"  ";
        for(int k = 0 ; k <= 2*i ; k++){
            
            if( k <= n ){
                cout<<ch<<" ";
                ch++;
            }
            else if( k > n){
                cout<< --ch<<" ";
            }
            else{
                cout<<" ";
            }
        }
    cout<<endl;

    }
    return 0 ;
} // namespace std;
