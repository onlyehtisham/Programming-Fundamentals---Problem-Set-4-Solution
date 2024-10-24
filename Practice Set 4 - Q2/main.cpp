#include <iostream>

using namespace std;

int main()
{
    int i, j;

    i = 1;
    while ( i <= 5)
    {
        j = 1;
        while ( j <= i)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }

    /*
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
            cout<<j;
        cout<<endl;
    }
    */
    return 0;
}
