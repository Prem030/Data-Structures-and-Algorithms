// USING HASHMAP 
#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
        int element;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if( count == 0){
                count = 1;
                element = nums[ i ];
            }
            else if( element != nums[ i ] ){
                count--;
            }
            else{
                count++;
            }
        }
        return element;
        
    }

int main(){
    int n;
    cin>>n;
    vector<int> nums;
    
    for ( int i = 0; i < n; i++ )
    {
        int element;
        cin>>element;
        nums.push_back( element);
    }
    cout<<majorityElement( nums);
    return 0;
}