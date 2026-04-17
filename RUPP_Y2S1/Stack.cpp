#include <iostream>
#include <limits>
using namespace std;

const int b = 10;
int A[b];
int top = -1;

void push()
{
    int x;
    if (top == b - 1)
    {
        cout << "Stack is FULL!" << endl;
        return;
    }
    cout << "Enter value: ";
    cin >> x;
    top++;
    A[top] = x;
    cout << "Pushed successfully!" << endl;
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack is EMPTY!" << endl;
        return;
    }
    cout << "Popped: " << A[top] << endl;
    top--;
}

void peek()
{
    if (top == -1)
    {
        cout << "Stack is EMPTY!" << endl;
        return;
    }
    cout << "Top element: " << A[top] << endl;
}

void size()
{
    cout << "Size: " << top + 1 << endl;
}

void isEmpty()
{
    if (top == -1)
        cout << "Stack is EMPTY" << endl;
    else
        cout << "Stack is NOT empty" << endl;
}

void isFull()
{
    if (top == b - 1)
        cout << "Stack is FULL" << endl;
    else
        cout << "Stack is NOT full" << endl;
}

void PrintStack()
{
    if (top == -1)
    {
        cout << "Stack is EMPTY!" << endl;
        return;
    }

    cout << "Stack: ";
    for (int i = 0; i <= top; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main()
{

    int option = 0;

    while (option != 8)
    {

        cout << "\n1-Push";
        cout << "\n2-Pop";
        cout << "\n3-Peek";
        cout << "\n4-Size";
        cout << "\n5-isEmpty";
        cout << "\n6-isFull";
        cout << "\n7-Print Stack";
        cout << "\n8-Exit ";
        cout << "\nChoose option: ";

        cin >> option;

        // input validation
        if (cin.fail())
        {
            cout << "Numbers only!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        switch (option)
        {

        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            size();
            break;
        case 5:
            isEmpty();
            break;
        case 6:
            isFull();
            break;
        case 7:
            PrintStack();
            break;

        case 8:
            cout << "Thanks for using program!" << endl;
            break;

        default:
            cout << "Invalid option!" << endl;
        }
    }
    return 0;
}