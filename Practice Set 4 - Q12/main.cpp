#include <iostream>

using namespace std;

int main()
{
    int i, j, num, k = 0;

    cout<<"Input the number of rows: ";
    cin>>num;

    for (i = 1; i <= num; i++)
    {
        for (int m = 1; m <= k; m++)
            cout<<" ";
        for (j = 1; j <= num-k; j++)
            cout<<j;
        cout<<endl;
        k++;
    }
    return 0;
}
