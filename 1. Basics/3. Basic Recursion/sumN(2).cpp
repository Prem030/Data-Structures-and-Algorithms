#include<bits/stdc++.h>
using namespace std;
int result =0;
int sum(int n){
    if (n == 0 )
        return 0;
    return n + sum(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<"the sum is : "<<sum(n);
    return 0;
}