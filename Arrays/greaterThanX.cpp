// Count the number of elements in given array greater than a given number x.
#include <iostream>
using namespace std;
int main()
{
    int x, count = 0;
    cout << "Enter x : ";
    cin >> x;
    int arr[] = {1, 3, 0, 10, 2, 5, 6};
    int n = sizeof(arr) / 4;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
            count++;
    }
    cout << "No. of elements greater than " << x << " is " << count;
}
