// Find the 2nd largest element in the given array
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 1, 0, 9, 4, 12, 1, 2};
    int n = sizeof(arr) / 4;
    int mx = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx, arr[i]);
    }
    int smax = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == mx)
            continue;
        smax = max(smax, arr[i]);
    }
    cout << "2nd largest is " << smax;
}
