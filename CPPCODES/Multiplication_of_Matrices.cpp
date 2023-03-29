#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n1, m1, n2, m2;

    //Asking for matrix 1
    cout << "For matrix 1:" << endl;
    cout << "Enter size:" << endl;
    cin >> n1 >> m1;

    int v1[n1][m1];      //matrix 1

    cout << "enter elements of matrix: ";
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<m1; j++)
        {
            cin >> v1[i][j];
        }
    }

    //similarly, for matrix 2
    cout << "For matrix 2:" << endl;
    cout << "Enter size:" << endl;
    cin >> n2 >> m2;

    int v2[n2][m2];      //matrix 2
    int v[n1][m2];       //Multiplied matrix

    cout << "enter elements of matrix: ";
    for(int i=0; i<n2; i++)
    {
        for(int j=0; j<m2; j++)
        {
            cin >> v2[i][j];
        }
    }

    //Checking if multiplicable or not
    if (m1 != n2)
    {
        cout << "Multiplication criteria didn't match";
    }

    //Multiplying
    else
    {
        for(int i=0; i<n1; i++)
        {
            for(int j=0; j<m2; j++)
            {
                v[i][j] = 0;
                for(int k=0; k<m1; k++)
                {
                    v[i][j] += v1[i][k] * v2[k][j];
                }
            }
        }
    }

    //Printing
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<m2; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }






    return 0;
}