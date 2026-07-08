#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

class Node
{
public:
    int data;
    Node *next;

public:
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

Node *convertArr2LL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *newNode = new Node(arr[i]);
        mover->next = newNode;
        mover = mover->next;
    }
    return head;
}

void printLL(Node *head)
{
    Node *tmp = head;
    while (tmp)
    {
        cout << tmp->data << endl;
        tmp = tmp->next;
    }
}
Node *removeHeadOfLL(Node *head)
{
    if (head == NULL)
    {
        return head;
    }
    Node *tmp = head;
    head = head->next;
    free(tmp);
    return head;
}
Node *removeTailofLL(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    Node *tmp = head;

    while (tmp->next->next != NULL)
    {
        tmp = tmp->next;
    }
    delete tmp->next;
    tmp->next = NULL;
    return head;
}

Node *removeK(Node *head, int k)
{
    if (head == NULL)
        return head;
    if (k == 1)
    {
        Node *tmp = head;
        head = head->next;
        free(tmp);
        return head;
    }
    int cnt = 0;
    Node *prev = NULL;
    Node *tmp = head;
    while (tmp != NULL)
    {
        cnt++;
        if (cnt == k)
        {
            prev->next = prev->next->next;
            free(tmp);
            break;
        }
        prev = tmp;
        tmp = tmp->next;
    }
    return head;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v = {1, 2, 3, 4};
    Node *head = convertArr2LL(v);
    // head = removeHeadOfLL(head);
    // head = removeTailofLL(head);
    head = removeK(head, 3);
    printLL(head);
}