#include<bits/stdc++.h>
using namespace std;

void print_Name(string name , int n , int i)
{
    if( i > n ) return;
    cout<<i<<" "<<name<<" "<<endl;
    print_Name(name , n , ++i);
}


int main(){
    int n ;
    cin>>n;
    print_Name("Prem Dhara", n , 1);
    return 0;
}