#include <iostream>
#include <vector>
using namespace std;

void sort_vector(vector<int> &v)
{
    int left_p=0;
    int rt_p=v.size()-1;

    while(left_p<rt_p)
    {
        if (v[left_p]==1 && v[rt_p]==0)
        {
            v[left_p++]=0;
            v[rt_p--]=1;
        }
        if(left_p==0)
        {
            left_p++;
        }
        
        if(rt_p==1)
        {
            rt_p--;
        }
    }

    return;
}

int main()
{
    int n;
    cout << "Number of elements: ";
    cin >> n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {   
        int ele;
        cin >> ele;
        v.push_back(ele);
    }


    sort_vector(v);

    for(int ele:v)
    {
        cout << ele << " ";
    }


    return 0;
}