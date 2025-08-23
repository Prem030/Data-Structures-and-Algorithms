#include<bits/stdc++.h>
using namespace std;
void print_Number(int n){
    cout<<n<<" ";
    
    if(n <100){
        print_Number(++n);
    }
    else
        return;
       
}
int main(){
    print_Number(1);
    return 0;
}