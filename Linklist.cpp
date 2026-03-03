#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node *next;
};

// Create 10 linked nodes
Node *createList()
{
    Node *head = nullptr;
    Node *temp = nullptr;

    for (int i = 1; i <= 10; i++)
    {
        Node *newNode = new Node;
        newNode->data = i;
        newNode->next = nullptr;

        if (head == nullptr)
        {
            head = newNode;
            temp = newNode;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }

    return head;
}

// Insert at any position
Node *insertAtPosition(Node *head, int value, int position)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (position == 1)
    {
        newNode->next = head;
        return newNode;
    }

    Node *temp = head;
    for (int i = 1; i < position - 1 && temp != nullptr; i++)
    {
        temp = temp->next;
    }

    if (temp == nullptr)
    {
        cout << "Invalid position!" << endl;
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}

// Delete at any position
Node *deleteAtPosition(Node *head, int position)
{
    if (head == nullptr)
    {
        cout << "List is empty!" << endl;
        return head;
    }

    Node *temp = head;

    if (position == 1)
    {
        head = head->next;
        delete temp;
        return head;
    }

    for (int i = 1; i < position - 1 && temp->next != nullptr; i++)
    {
        temp = temp->next;
    }

    if (temp->next == nullptr)
    {
        cout << "Invalid position!" << endl;
        return head;
    }

    Node *nodeToDelete = temp->next;
    temp->next = nodeToDelete->next;
    delete nodeToDelete;

    return head;
}

// Insert at tail
Node *insertAtTail(Node *head, int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr)
        return newNode;

    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    return head;
}

// Print value and address
void printList(Node *head)
{
    Node *temp = head;

    if (temp == nullptr)
    {
        cout << "List is empty!" << endl;
        return;
    }

    while (temp != nullptr)
    {
        cout << "Value: " << temp->data
             << " | Address: " << temp
             << " | Next: " << temp->next << endl;
        temp = temp->next;
    }
}

// ================= MAIN =================

int main()
{

    Node *head = createList();
    int choice;

    do
    {
        cout << "\n===== LINKED LIST MENU =====\n";
        cout << "1. Print List\n";
        cout << "2. Insert at Position\n";
        cout << "3. Delete at Position\n";
        cout << "4. Insert at Tail\n";
        cout << "5. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        switch (choice)
        {

        case 1:
            printList(head);
            break;

        case 2:
        {
            int value, position;
            cout << "Enter value: ";
            cin >> value;
            cout << "Enter position: ";
            cin >> position;
            head = insertAtPosition(head, value, position);
            break;
        }

        case 3:
        {
            int position;
            cout << "Enter position to delete: ";
            cin >> position;
            head = deleteAtPosition(head, position);
            break;
        }

        case 4:
        {
            int value;
            cout << "Enter value: ";
            cin >> value;
            head = insertAtTail(head, value);
            break;
        }

        case 5:
            cout << "Program Ended.\n";
            break;

        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}