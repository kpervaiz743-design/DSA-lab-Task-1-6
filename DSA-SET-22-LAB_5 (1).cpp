#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, target;
    int found = -1;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter target element: ";
    cin >> target;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            found = i;
            break;
        }
    }

    if (found != -1)
    {
        cout << "Element found at position: " << found + 1;
    }
    else
    {
        cout << "Element not found";
    }

    return 0;
}
