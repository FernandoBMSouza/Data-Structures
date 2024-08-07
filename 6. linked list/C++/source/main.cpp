#include "circularDoublyLinkedList.h"
#include <iostream>

int main()
{
    const int size = 5;
    int* values = new int[size] {5, 9, 3, 7, 1};
    CircularDoublyLinkedList<int> linkedList(values, size);

    linkedList.display();

    delete[] values;
    return 0;
}