#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *link;
};
class LinkedList
{
    struct Node *first, *last;
    int size;

public:
    LinkedList()
    {
        first = NULL;
        last = NULL;
        size = 0;
    }

    void append(int x);
    void display();
    void deleteElement(int x);
    void insertAfter(int pos, int element);
    int search(int target);

    ~LinkedList()
    {
        struct Node *temp;
        temp = first;
        while (temp->link != NULL)
        {
            temp = temp->link;
            delete first;
            first = temp;
        }
    }
};

void LinkedList ::append(int x)
{

    struct Node *temp;
    if (first == NULL)
    {
        temp = new Node;
        temp->data = x;
        temp->link = NULL;
        first = temp;
        last = temp;
    }
    else
    {
        temp = new Node;
        temp->data = x;
        temp->link = NULL;
        last->link = temp;
        last = temp;
    }
}

void LinkedList ::display()
{
    if (first->link == NULL)
    {
        cout << "\nLinked List is empty! " << endl;
    }
    else
    {
        struct Node *temp;
        temp = first;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->link;
        }
        cout << endl;
    }
}

void LinkedList ::deleteElement(int x)
{
    struct Node *temp, *before;
    temp = first;
    before = first;

    int flag = 0;
    while (temp->link != NULL)
    {
        if (temp->data == x)
        {
            before->link = temp->link;
            delete temp;
        }
        if (flag == 0)
        {
            temp = temp->link;
            flag = 1;
        }
        else
        {
            before = before->link;
            temp = temp->link;
        }
    }
}

void LinkedList ::insertAfter(int pos, int element)
{
    struct Node *temp, *newNode;
    int count = 0;

    temp = first;
    newNode = new Node;

    for (int i = 0; i < pos; i++)
    {
        temp = temp->link;
    }
    newNode->data = element;
    newNode->link = temp->link;
    temp->link = newNode;
}

int LinkedList ::search(int target)
{
    struct Node *temp;
    temp = first;
    int pos = -1;

    while (temp != NULL)
    {
        pos++;
        if (temp->data == target)
        {
            return pos;
        }
        temp = temp->link;
    }
    return -1;
}
int main()
{
    LinkedList L;
    L.append(10);
    L.append(12);
    L.append(14);
    L.append(16);
    L.insertAfter(2, 15);
    L.display();
    L.deleteElement(12);
    L.display();
    int pos = L.search(15);
    cout << "\n Element was found at :" << pos;
}