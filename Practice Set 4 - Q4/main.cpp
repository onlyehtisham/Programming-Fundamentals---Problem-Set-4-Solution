#include <iostream>

using namespace std;

int main()
{
    int i, j, num;
    cout<<"Input number of rows: ";
    cin>>num;

    for (i = 1; i <= num; i++)
    {
        for (j = 1; j <= i; j++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}
