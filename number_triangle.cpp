#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ; 
    int k = 1;
    cout<<"ENTER NUMBER OF ROWS : ";
    cin>>n;
    int c = (2*n) - 1;
    for(int i = 1 ; i <= n ; ++i)
    {
        k = 1;
        for(int j = 1 ; j <= c ; ++j)
        {
            if(j >= (n-i+1) && j <= (n-1+i))
            {
                cout<<k;
                ++k;
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