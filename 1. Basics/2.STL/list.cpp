#include<bits/stdc++.h>
using namespace std;
int main(){
    list<int> numbers;// create list of integers
    list<string> names; // create list of strings
    list<int> new_numbers_copy(numbers); // list copy of numbers
    list<int> new_numbers(5, 100); // new list with 5 element will all 100;
    list<int> ns = {10 , 20 , 30 , 40 , 50 }; // list with initalize value 
    int n;
    cin>>n;
    int user_input;
    string user_input_string;
    for (int i = 0; i < n; i++)
    {
        // taking input from user and assigning into list
        cin>>user_input;
        cin>>user_input_string;
        numbers.push_back(user_input);
        names.push_back(user_input_string);
    }
    for( int i : numbers)
        cout<<i<<" ";
    cout<<endl;

    for(string s : names)
        cout<<s<<" ";
    cout<<endl;

    for( int i : new_numbers)
        cout<<i<<" ";
    cout<<endl;

    for( int i : ns)
        cout<<i<<" ";
    cout<<endl;

    cout<<*numbers.begin()<<endl;// show the begining n0.
    cout<<*next(numbers.begin() , 4)<<endl;// show the next number form begining
    auto it = numbers.begin();
    cout<<"starting value -> "<<*it<<endl;
    advance(it , 3); // move pointer with three 
    cout<<"after advance -> "<<*it<<endl;
    cout<<"before value -> "<<*it<<endl;
    *it = 50;
    cout<<"after value -> "<<*it<<endl;

    for( int i : numbers)
        cout<<i<<" ";
    cout<<endl;

    numbers.pop_back();
    numbers.pop_front();
    cout<<"after pop_back() and pop_front() ";
    for( int i : numbers)
        cout<<i<<" ";
    cout<<endl;
    return 0 ;
}