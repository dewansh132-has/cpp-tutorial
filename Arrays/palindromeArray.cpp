// If an array contains n elements then check whether the array is palindrome or not
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    vector<int> a(n);
    cout << "Enter values\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    // reverse of b[j]
    int i = 0, j = n - 1;
    while (i < j)
    {
        int temp = b[i];
        b[i] = b[j];
        b[j] = temp;
        i++;
        j--;
    }
    // check if a[]=b[]
    int value = 1;
    for (int i = 0; i < n; i++)
    {
        if (b[i] != a[i])
            value = 0;
        break;
    }
    if (value == 1)
        cout << "Array's Palindrome";
    else
        cout << "Array's not Palindrome";
}
