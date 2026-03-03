#include <iostream>
#include <limits>
using namespace std;

class MyQueue
{
private:
    int A[10];
    int Rear;
    int Front;

public:
    void InitializeQueue();
    void Insert(int Value);
    void Remove();
    void PeekFront();
    int QueueSize();
    bool isEmpty();
    bool isFull();
    void PrintQueue();
};

void MyQueue::InitializeQueue()
{
    Rear = -1;
    Front = -1;
}

bool MyQueue::isEmpty()
{
    return (Front == -1 || Front > Rear);
}

bool MyQueue::isFull()
{
    return (Rear == 9);
}

void MyQueue::Insert(int Value)
{
    if (isFull())
    {
        cout << "Queue is Full!" << endl;
        return;
    }

    if (isEmpty())
        Front = 0;

    Rear++;
    A[Rear] = Value;
}

void MyQueue::Remove()
{
    if (isEmpty())
    {
        cout << "Queue is Empty!" << endl;
        return;
    }

    cout << "Removed: " << A[Front] << endl;
    Front++;

    // Reset when empty
    if (Front > Rear)
    {
        Front = -1;
        Rear = -1;
    }
}

void MyQueue::PeekFront()
{
    if (isEmpty())
    {
        cout << "Queue is Empty!" << endl;
        return;
    }

    cout << "Front Element: " << A[Front] << endl;
}

int MyQueue::QueueSize()
{
    if (isEmpty())
        return 0;
    return (Rear - Front + 1);
}

void MyQueue::PrintQueue()
{
    if (isEmpty())
    {
        cout << "Queue is Empty!" << endl;
        return;
    }

    for (int i = Front; i <= Rear; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

int main()
{

    MyQueue Q;
    Q.InitializeQueue();

    int option = 0;

    while (option != 8)
    {

        cout << "\n1-Insert";
        cout << "\n2-Remove";
        cout << "\n3-Peek";
        cout << "\n4-Size";
        cout << "\n5-isEmpty";
        cout << "\n6-isFull";
        cout << "\n7-Print Queue";
        cout << "\n8-Exit";
        cout << "\nChoose option: ";

        cin >> option;

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
        {
            int value;
            cout << "Enter value: ";
            cin >> value;
            Q.Insert(value);
            break;
        }

        case 2:
            Q.Remove();
            break;
        case 3:
            Q.PeekFront();
            break;
        case 4:
            cout << "Size: " << Q.QueueSize() << endl;
            break;

        case 5:
            if (Q.isEmpty())
                cout << "Queue is Empty!" << endl;
            else
                cout << "Queue is NOT Empty!" << endl;
            break;

        case 6:
            if (Q.isFull())
                cout << "Queue is Full!" << endl;
            else
                cout << "Queue is NOT Full!" << endl;
            break;

        case 7:
            Q.PrintQueue();
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
