#include <iostream>

using namespace std;

int main()
{
    int i, j, k = 4;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= k; j++)
        {
            cout<<" ";
        }
        for (int m = 1; m <= (i*2-1); m++)
            cout<<"*";
        cout<<endl;
        k--;
    }
    return 0;
}
