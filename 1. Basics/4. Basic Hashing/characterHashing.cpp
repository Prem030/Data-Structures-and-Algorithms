#include<bits/stdc++.h>
using namespace std;  
  

// Brute FORCE 

// int main() {
//     string s;
//     int counter = 0 ;
//     getline( cin , s );
//     char ch ;  cin>>ch;
//     for( int i = 0 ; i < s.length() ; i++ ){

//         if( ch == s[ i ])
//             counter++;

//     }
//     cout<<ch<<" : "<<counter;
//     return 0;

// }

//  USING HASHING 
// I. For all character 

// int main() {
//     string str;
//     int hashh[257] = {0};
//     getline( cin , str );

//     for (int i = 0; i < str.length(); i++)
//     {
//         hashh[ (int)str[ i ] ] += 1;
//     }
     


//     int numberOfQuerrys;
//     cin>>numberOfQuerrys;
//     while (numberOfQuerrys--)
//     {
//         char ch;
//         cin>>ch;
//         cout<<ch<<" : "<<hashh[ (int)ch]<<endl;

//     }
//     return 0 ;
    
// }




// For lower case character
int main() {
    string str;
    int hashh[27] = {0};
    getline( cin , str );

    for (int i = 0; i < str.length(); i++)
    {
        hashh[ str[ i ] - 'a'] += 1;
    }
     


    int numberOfQuerrys;
    cin>>numberOfQuerrys;
    while (numberOfQuerrys--)
    {
        char ch;
        cin>>ch;
        cout<<ch<<" : "<<hashh[ ch - 'a']<<endl;

    }
    return 0 ;
    
}