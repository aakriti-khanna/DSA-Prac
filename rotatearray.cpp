#include <iostream>
using namespace std;
int main()
{
    int n;
    // cout<<"enter n";
    cin >> n;

    int arr[] = {7, 3, 6, 9, 8};
    int d;
    cout << "enter d";
    cin >> d;

    d = d % n;
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

