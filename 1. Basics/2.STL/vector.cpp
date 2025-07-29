#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    // vector is a dynamic array which automatidally doule its size when it is full and we try to add more value
    vector<int> a(5, 3);
    //create a vector of capacity 5 and all be assign with 3 default value is 0
    vector<int> last(a);// create last will 1's 


    cout<<"Capacity of vector v-> "<<v.capacity()<<endl;

    v.push_back(1);// add element using push_back() in vetor
    cout<<"Capacity of vector v-> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity of vector v-> "<<v.capacity()<<endl;

    v.push_back(3);

    cout<<"CAPACITY of vector v->" <<v.capacity()<<endl;
    cout<<"Size of vector v-> "<<v.size()<<endl;

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    // to remove the last element from the vector
    cout<<"vector before pop: ";
    for(int i : v)
        cout<<i<<" ";
    v.pop_back();
    cout<<endl<<"vector after pop : ";
    for(int i:v)
        cout<<i<<" ";

    v.clear(); // this will clearn the vector only size become 0 but capacity reamin intact
    return 0;
}