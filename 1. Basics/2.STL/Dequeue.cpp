#include<bits/stdc++.h>
#include<deque>
using namespace std;
int main(){
    deque<int> d;

    d.push_back(1); // push back of the deque
    d.push_back(2); // push backside of deque
    d.push_front(3); //push at the front of the deque
    
    d.push_back(4);
    d.push_back(5);
    cout<<"element at 2nd index"<<d.at(2)<<endl;
    for(auto i : d)
        cout<<i<<" ";
        cout<<endl;
    d.pop_back();
    cout<<"after pop_back"<<endl;

    for(auto i : d )
        cout<<i<<" ";
    cout<<endl;
    d.pop_front();
    cout<<"after pop_front"<<endl;
    for(auto i : d)
        cout<<i<<" ";
    cout<<endl;
    cout<<'\n'<<'\n'<<'\n';
    d.pop_back();
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);
    cout<<"New deque : ";
    for(auto i : d)
        cout<<i<<" ";

    d.erase(d.begin() , d.begin() + 2 );
    // erase need a starting and end point to erase the element from the deque

    return 0;

};