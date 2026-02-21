// Given integer n. Create an array that stores squares of natural no. till n and print them
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    vector<int> arr(n); // using vector is more efficient than random arr[100], because vectors are dynamic arrays, they grow to fit the no. of elements u need
    for (int i = 0; i < n; i++)
    {

        arr[i] = (i + 1) * (i + 1);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
        ;
    }
}