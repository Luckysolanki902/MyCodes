#include <iostream>
using namespace std;


int main()
{
    int n, m;
    cout << "Enter size:" << endl;
    cin >> n >> m;

    int v[n][m];      //matrix 1

    cout << "enter elements of matrix: " << endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> v[i][j];
        }
    }

    //Using swap function to swap the lower right triangle excluding the diagonal elements
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            swap(v[i][j] , v[j][i]);
        }
    }


    //Printing
    cout << endl << "the transpose is:" << endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}