#include <iostream>
using namespace std;

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n, bool ascending) {
    // Outer loop controls the number of passes
    for (int i = 0; i < n - 1; i++) {
        // Inner loop compares adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            
            // If ascending is true → sort from small to large
            if (ascending) {
                if (arr[j] > arr[j + 1]) {
                    // Swap arr[j] and arr[j+1]
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
            // If ascending is false → sort from large to small
            else {
                if (arr[j] < arr[j + 1]) {
                    // Swap arr[j] and arr[j+1]
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
}

int main() {
    int n;

    cout << "Enter number of index: ";
    cin >> n;

    int arr[n];

    // Input array values

    for (int i = 0; i < n; i++) {
        cout << "Enter elements:";
        cin >> arr[i];
    }

    int choice;
    cout << "Choose sorting order:\n";
    cout << "1. Ascending\n";
    cout << "2. Descending\n";
    cin >> choice;

    bool ascending = (choice == 1);

    // Call Bubble Sort function
    bubbleSort(arr, n, ascending);

    // Display sorted array
    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
