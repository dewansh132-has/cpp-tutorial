// Copy contents from one array into another in reverse order
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    cout << "Enter values\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        b[i] = a[n - 1 - i];
        cout << b[i] << " ";
    }
}
