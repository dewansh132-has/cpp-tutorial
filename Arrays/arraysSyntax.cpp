#include <iostream>
using namespace std;
int main()
{
    int arr[10]; // declaration
    // cout << "Enter the values\n";
    for (int i = 1; i <= 10; i++)
    {
        cout<<"Enter value "<<i<<" : ";
        cin >> arr[i]; // initialization
    }
    for (int i = 1; i <= 10; i++)
    {
        cout << arr[i] << " ";
    }
}
