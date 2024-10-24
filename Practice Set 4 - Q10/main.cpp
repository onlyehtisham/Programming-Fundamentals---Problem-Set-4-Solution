#include <iostream>

using namespace std;

int main()
{
    int i, j, k = 4, n, o = 5;

    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= k; j++)
        {
            cout<<" ";
        }

        if (i < 5)
            n = i*2 - 1;
        else
        {
            n = i*2 - o;
            o += 4;
        }

        for (int m = 1; m <= n; m++)
            cout<<"*";
        cout<<endl;
        if (i < 4)
            k--;
        else
            k++;
    }
    return 0;
}
