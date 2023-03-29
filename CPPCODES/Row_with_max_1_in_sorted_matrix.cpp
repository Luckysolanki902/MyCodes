//This code is for SORTED matrix

#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int n, m;
    cout << "Size of matrix: ";
    cin >> n >> m;
    vector <vector <int>> v;
    v.resize(n, vector <int> (m));




    cout << "Enter elements of matrix:" << endl;
    for(int i=0; i<n; i++)
    {
        cout << "Row " << i << ": ";
        for(int j=0; j<m; j++)
        {
            cin >> v[i][j];
        }

    }

    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            if(v[i][j]==1)
            {
                cout << "Row with max 1's is: " << i << endl;
                return 0;
            }
        }
    }

    


}