#include <iostream>
using namespace std;

void showElement(int A[])
{
    cout << "Array elements: ";
    for (int i = 0; i < 10; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void searchNonDuplicate(int A[], int value)
{
    for (int i = 0; i < 10; i++)
    {
        if (A[i] == value)
        {
            cout << "Value " << value
                 << " found at index: " << i + 1 << endl;
            break;
        }
    }
}

void searchDuplicate(int A[], int value)
{
    bool found = false;

    cout << "Duplicate indexes for value " << value << ":" << endl;

    for (int i = 0; i < 10; i++)
    {
        if (A[i] == value)
        {
            cout << "Index: " << i + 1 << endl;
            found = true;
        }
    }

    if (!found)
    {
        cout << "Value not found." << endl;
    }
}

int main()
{
    int A[10] = {19, 15, 15, 15, 9, 18, 15, 17, 19, 11};

    showElement(A);

    int value;
    cout << "Enter value to search: ";
    cin >> value;

    searchNonDuplicate(A, value);
    searchDuplicate(A, value);

    return 0;
}
