#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *convertIntoLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *tmp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *newNode = new Node(arr[i]);
        tmp->next = newNode;
        tmp = tmp->next;
    }
    return head;
}
void printLL(Node *head)
{
    Node *tmp = head;
    while (tmp)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
Node *insertIntoHead(Node *head, int val)
{
    Node *newHead = new Node(val);
    Node *tmp = head;
    newHead->next = tmp;
    return newHead;
}

Node *insertIntoTail(Node *head, int val)
{
    Node *tmp = head;
    Node *newNode = new Node(val);

    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    return head;
}

Node *insertIntoKPosition(Node *head, int val, int k)
{
    if (head == NULL || k == 1)
        return insertIntoHead(head, val);

    Node *tmp = head;
    Node *newNode = new Node(val);
    for (int i = 1; i <= k - 2; i++)
    {

        if (tmp == NULL)
            return insertIntoTail(head, val);

        tmp = tmp->next;
    }

    newNode->next = tmp->next;
    tmp->next = newNode;
    return head;
}
int main()
{
    vector<int> v = {1, 2, 3, 4};
    Node *head = convertIntoLL(v);
    printLL(head);
    // insert into head
    head = insertIntoHead(head, 10);
    printLL(head);
    head = insertIntoTail(head, 11);
    printLL(head);
    head = insertIntoKPosition(head, 12, 70);
    printLL(head);
}