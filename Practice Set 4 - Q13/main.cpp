#include <iostream>

using namespace std;

int main()
{
    int i, j, k = 5;

    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= k; j++)
            cout<<"*";
        cout<<endl;
        if (i < 5)
            k--;
        else
            k++;
    }
    return 0;
}
