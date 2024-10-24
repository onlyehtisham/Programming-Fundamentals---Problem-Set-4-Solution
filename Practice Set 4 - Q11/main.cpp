#include <iostream>

using namespace std;

int main()
{
    int i, j, num, k;;

    cout<<"Input the number of rows: ";
    cin>>num;

    for (i = 1; i <= num; i++)
    {
        for (j = i; j <= num; j++)
            cout<<j;
        cout<<endl;
    }
    return 0;
}
