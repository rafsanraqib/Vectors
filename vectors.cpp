#include <iostream>
#include <sstream>
#include <string>

using namespace std;

// Struct consisting of vector attributes.
struct Vector
{
    int data;
    struct Vector *next;
};
struct Vector *head = NULL;

//  Adds userData to the front of the vector by creating a new node
void push_front(int userData)
{
    struct Vector *new_node = (struct Vector *)malloc(sizeof(struct Vector));
    new_node->data = userData;
    new_node->next = head;
    head = new_node;
}

// Removes the first item of the vector
void remove()
{
    struct Vector *ptr;
    ptr = head;
    head = head->next;
    free(ptr);
}

// Removes from the given index
int removeFrom(int index)
{
    struct Vector *ptr, *initialPos, *newPtr;
    int initialIndex = 0;
    initialPos = head;

    if (index == 0)
    {
        ptr = head;
        head = head->next;
        free(ptr);
        return 0;
    }
    else if (index == 1)
    {
        ptr = head->next;
        head->next = ptr->next;
        free(ptr);
        return 0;
    }
    while (index - initialIndex != 1)
    {
        initialIndex++;
        head = head->next;
    }
    ptr = head->next;
    head->next = ptr->next;
    head = initialPos;
    free(ptr);
    return 0;
}

// Prints the item from the given index
void printFrom(int index)
{
    struct Vector *ptr;
    ptr = head;
    if (index == 0)
    {
        ptr = head;
    }
    else if (index == 1)
    {
        ptr = head->next;
    }
    else
    {
        while (index != 0)
        {
            index = index - 1;
            ptr = ptr->next;
        }
    }
    cout << ptr->data << "\n";
}

// Displays all the items in the vector
void displayAll()
{
    struct Vector *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        std::cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << std::endl;
}

int main()
{
    // Test cases //

    // push_front(5);
    // push_front(4);
    // push_front(6);
    // push_front(23);
    // push_front(8);
    // push_front(34);
    // push_front(45);
    // printFrom(5);
    // displayAll();
}