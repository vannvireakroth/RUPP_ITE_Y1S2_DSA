#include <iostream>
using namespace std;

void showArray(int arr[], int size)
{
    cout << "Array elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertElement(int arr[], int &size, int element, int position)
{
    for (int i = size; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    size++;
}

void deleteElement(int arr[], int &size, int position)
{
    for (int i = position; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
}

int main()
{
    int arr[100];
    int size;

    cout << "Enter number of elements: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter elements" << i + 1 << ":";
        cin >> arr[i];
    }

    showArray(arr, size);

    int element, position;
    cout << "\nEnter element to insert: ";
    cin >> element;

    cout << "Enter position(1-" << size << "): ";
    cin >> position;

    insertElement(arr, size, element, position - 1);
    showArray(arr, size);

    cout << "\nEnter position to delete: ";
    cin >> position;

    deleteElement(arr, size, position - 1);
    showArray(arr, size);

    return 0;
}
