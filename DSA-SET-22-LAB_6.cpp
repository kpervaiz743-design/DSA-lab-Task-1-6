#include <iostream>
using namespace std;

int main()
{
    int arr[100], n, target;
    int low, high, mid;
    int found = -1;

    cout << "Enter array size: ";
    cin >> n;

    cout << "Enter sorted array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter target element: ";
    cin >> target;

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == target)
        {
            found = mid;
            break;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
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
