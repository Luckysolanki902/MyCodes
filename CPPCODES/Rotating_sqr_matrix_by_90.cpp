#include <iostream>
#include <vector>
using namespace std;

void roatateMatrix(vector <vector <int>> &v)
{
    int n=v.size();
    //Taking transpose of the matrix
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
        {
            swap(v[i][j], v[j][i]);
        }
    }

    //swapping column 1 and column with last and 2nd with 2nd last and so on
    int jl = n;
    if(n%2 !=0)
    {
        jl = n-1;
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<jl/2; j++)
        {
            swap(v[i][j], v[i][n-j-1]);           
        }
    }
}

int main()
{
    //asking for size of matrix and making sure that its a square matrix
    int n;
    cout << "Number of rows in square matrix:" << endl;
    cin >> n;

    vector <vector <int>> v(n, vector <int> (n));
    cout << "Enter elements:" << endl;
    for(int i=0; i<n; i++)
    {
        cout << "Row " << i << ": ";
        for(int j=0; j<n; j++)
        {
            cin >> v[i][j];
        }
    }

    //calling function
    roatateMatrix(v);



    //printing the rotated matrix
    cout << endl << "the transpose is:" << endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//   1 2 3         7 4 1
//   4 5 6  ---->  8 5 2
//   7 8 9         9 6 3