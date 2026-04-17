#include <iostream>
using namespace std;

void insertionSort(int arr[], int n, bool order) {

    for (int i = 1; i < n; i++) {  // Start from second element
        int key = arr[i];           // Current element to be inserted
        int j = i - 1;

        // If ascending order
        if (order == true) {
            // Move elements greater than key one step ahead
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
        }
        // If descending order
        else {
            // Move elements smaller than key one step ahead
            while (j >= 0 && arr[j] < key) {
                arr[j + 1] = arr[j];
                j--;
            }
        }

        arr[j + 1] = key;  // Insert key at correct position
    }
}

// Function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main() {
    int n;
    cout << "Enter number of index: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int choice;
    cout << "Enter 1 for Ascending, 2 for Descending: ";
    cin >> choice;

    if (choice == 1)
        insertionSort(arr, n, true);
    else
        insertionSort(arr, n, false);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
