#include<iostream>
using namespace std;
int main()
{
    int rows = 4 , col = 4;
    for(int i = 1 ; i <= rows ; ++i)
    {
        for(int j = 1 ; j <= col ; ++j)
        {
            if(j%2 != 0)
            {
                cout<<"|";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}