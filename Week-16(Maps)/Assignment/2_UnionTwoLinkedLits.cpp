//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node
{
  int data;
  struct Node *next;

  Node(int x)
  {
    data = x;
    next = NULL;
  }
};

class Solution
{
public:
  struct Node *makeUnion(struct Node *head1, struct Node *head2)
  {
    // code here
    map<int, Node *> mapping;
    // storing first LL in the map
    Node *temp = head1;
    while (temp != NULL)
    {
      mapping[temp->data] = temp;
      temp = temp->next;
    }

    // storing second LL in the map
    temp = head2;
    while (temp != NULL)
    {
      mapping[temp->data] = temp;
      temp = temp->next;
    }

    // UNION LIST
    Node *UL = NULL;
    temp = 0;
    // Making new sorted LL
    for (auto it = mapping.begin(); it != mapping.end(); it++)
    {
      if (UL == NULL)
      {
        // first
        UL = it->second;
        // temp= UL;
        temp = it->second;
      }
      else
      {
        // others
        temp->next = it->second;
        // temp = temp->next;
        temp = it->second;
      }
    }
    temp->next = 0;
    return UL;
  }
};

//{ Driver Code Starts.

struct Node *buildList(int size)
{
  int val;
  cin >> val;

  Node *head = new Node(val);
  Node *tail = head;

  for (int i = 0; i < size - 1; i++)
  {
    cin >> val;
    tail->next = new Node(val);
    tail = tail->next;
  }

  return head;
}

void printList(Node *n)
{
  while (n)
  {
    cout << n->data << " ";
    n = n->next;
  }
  cout << endl;
}

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;

    cin >> n;
    Node *first = buildList(n);

    cin >> m;
    Node *second = buildList(m);
    Solution obj;
    Node *head = obj.makeUnion(first, second);
    printList(head);
  }
  return 0;
}

// } Driver Code Ends