#include <iostream>
using namespace std;

int BinarySearch(int KeySearch)
{
    int SIZE = 20;
    int arr[SIZE] = {2, 5, 8, 12, 15, 18, 21, 25, 28, 30, 33, 37, 40, 44, 47, 50, 55, 60, 65, 70};

    int left = 0;
    int right = SIZE - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] == KeySearch)
            return mid;
        else if (KeySearch < arr[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int main()
{
    int key;
    cout << "Enter value to search: ";
    cin >> key;

    int result = BinarySearch(key);

    if (result != -1)
        cout << "Found at index: " << result + 1 << endl;
    else
        cout << "Not found." << endl;

    return 0;
}
