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
        this->next = next;
    }
};

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
int countLL(Node *head)
{
    int count = 0;
    Node *tmp = head;

    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Node *head = NULL;
    int n;
    while (true)
    {
        cin >> n;
        if (n == -1)
        {
            break;
        }
        head = insertInTail(head, n);
    }

    cout << countLL(head) << endl;
}