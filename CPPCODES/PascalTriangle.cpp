#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "n: ";
    cin >> n;
    
    vector <vector <int>> V;

    //Resizing the vector V
    V.resize(n);


    //Making of 2D Vector
    for(int i=0; i<n; i++)
    {
        //Resizing each sub-vecotor of parent vector V
        V[i].resize(i+1);

        for(int j=0; j<i+1; j++)
        {
            if(j==0 || j==i)
            {
                V[i][j] = 1;
            }
            else
            {
                V[i][j] = V[i-1][j] + V[i-1][j-1];
            }
        }
    }

    //Printing the Vector
    cout << "Printing the Pascal's Triangle" << endl;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            cout << " ";
        }
        for(int j=0; j<i+1; j++)
        {
            cout << V[i][j] << " ";
        }
        cout << endl;

    }


    return 0;
}