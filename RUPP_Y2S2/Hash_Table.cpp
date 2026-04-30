#include <iostream>
#define Array_Size 200
using namespace std;

string HashTable[Array_Size];

// Hash function
int HashFunction(string key) {
    int hashValue = 0;
    for (char ch : key) {
        hashValue += ch; // sum ASCII
    }
    return hashValue % Array_Size;
}

// Insert with Linear Probing
void Insert(string key) {
    int index = HashFunction(key);

    // Linear probing
    while (HashTable[index] != "") {
        index = (index + 1) % Array_Size;
    }

    HashTable[index] = key;
}

// Search with Linear Probing
bool Search(string key) {
    int index = HashFunction(key);
    int start = index;

    while (HashTable[index] != "") {
        if (HashTable[index] == key)
            return true;

        index = (index + 1) % Array_Size;

        // Stop if we loop back
        if (index == start)
            return false;
    }

    return false;
}

int main() {
    Insert("ck");
    Insert("ak");
    Insert("zk");

    if (Search("ak"))
        cout << "Found\n";
    else
        cout << "Not Found\n";

    return 0;
}