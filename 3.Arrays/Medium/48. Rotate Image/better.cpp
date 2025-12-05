#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[ 0 ].size();
        for (int i = 0; i < row ; i++)
        {
            for (int j = 0; j < column; j++)
            {
                if( i > j )
                swap( matrix[ i ][ j ] , matrix[ j ][ i ]);
            }
            
        }
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < column / 2; j++)
            {
                swap( matrix[ i ][ j ] , matrix[ i ][ column - 1-j ]);
            }
            cout<<endl;
        }
        
    }

int main(){
    int row , column ;
    cin>>row;
    cin>>column;
    
    vector< vector <int> > matrix;
    for (int i = 0; i < row; i++)
    {
        vector<int> temp_row;
        for (int i = 0; i < column; i++)
        {
            int element;
            cin>>element;
            temp_row.push_back( element );
        }
        matrix.push_back( temp_row );
    }
    rotate( matrix );
    return 0;
}