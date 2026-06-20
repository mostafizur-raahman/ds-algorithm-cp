#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

using ll = long long;
using vl = vector<ll>;

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        this->next = next;
    }
};
void printLL(Node *head)
{
    Node *tmp = head;
    if (tmp == NULL)
    {
        cout << "Node is empty" << endl;
    }
    while (tmp != NULL)
    {
        cout << tmp->data << endl;
        tmp = tmp->next;
    }
}
Node *insertInTail(Node *head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        return head;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }

    tmp->next = newNode;
    return head;
}
Node *removeTail(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *tmp = head;
    while (tmp->next->next != NULL)
    {
        tmp = tmp->next;
    }
    free(tmp->next);  // last one in free
    tmp->next = NULL; // now previous one next is NULL
    return head;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Node *head = NULL;
    int n;
    while (1)
    {
        cin >> n;
        if (n == -1)
            break;
        head = insertInTail(head, n);
    }
    printLL(head);
    cout << endl;
    head = removeTail(head);
    printLL(head);
}