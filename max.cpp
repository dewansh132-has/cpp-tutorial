// Find the maximum value of elements int the arrays
#include <iostream>
using namespace std;
int main()
{
    int n, arr[100];
    cout << "How many elements do u wish to enter : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter value at index " << i << " : ";
        cin >> arr[i];
    }
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "Max of all elements is " << max;
}