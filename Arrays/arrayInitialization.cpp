#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {3, 6, 9, 0, 12}; // declaration + initialization
    // if u r doing declaration + initialization at once then it's not necessary to mention the size....u can directly use 'int arr[] = {3, 6, 9, 0, 12}'
    arr[0] = 1; // updation
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " "; // output
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] * 2 << " ";
    }
    cout << endl;
    // printing the elements in reverse
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}
