// If an array contains n elements then check whether the array is palindrome or not(copied from chatgpt)
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> a(n);
    cout << "Enter values:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // Check palindrome directly without reversing into another vector
    bool isPalindrome = true;
    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "Array is Palindrome";
    else
        cout << "Array is not Palindrome";

    return 0;
}
