#include<bits/stdc++.h>
using namespace std;


bool check(vector<int>& nums) {
        int count = 0 ; 
        for( int i = 0 ; i < nums.size() - 1 ; i++ ){
            if( nums[ i ] > nums[ i + 1 ]){
                count++;
                if( count > 1 )
                    return false;
            }
        }
        if( nums[ 0 ] < nums[ nums.size() - 1 ])
            count++;
        return count <= 1;
}

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    for (int  i = 0; i < n; i++)
    {
        int element;
        cin>>element;
        nums.push_back(element);
    }

    bool result = check( nums );
    if( result)
        cout<<"true";
    else
        cout<<"false";
    
    return 0;
}
