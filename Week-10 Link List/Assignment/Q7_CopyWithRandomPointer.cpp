#include <iostream>
#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.*/
struct Node
{
  int val;
  Node *next;
  Node *random;

  Node(int _val)
  {
    val = _val;
    next = NULL;
    random = NULL;
  }
};

void printLinkedList(Node *head)
{
  Node *temp = head;

  while (temp != NULL)
  {
    cout << temp->val << "->";
    temp = temp->next;
  }
  cout << endl;
}

//* Copy with Random Pointer
// Method-1: Map Method
Node *helper(Node *head, unordered_map<Node *, Node *> &mp)
{
  if (head == 0)
    return 0;

  Node *newHead = new Node(head->val);
  mp[head] = newHead;
  newHead->next = helper(head->next, mp);
  // Backtracking
  if (head->random)
  {
    newHead->random = mp[head->random];
  }
  return newHead;
}

// Method-2:
Node *copyRandom(Node *head)
{
  if (!head)
    return 0;

  // Step-1: Clone A` to A
  Node *it = head;
  while (it)
  {
    Node *clonedNode = new Node(it->val);
    clonedNode->next = it->next;
    it->next = clonedNode;
    it = it->next->next;
  }

  // Step-2: Assign Random links of A` with the help of A
  it = head;
  while (it)
  {
    Node *clonedNode = it->next;
    clonedNode->random = it->random ? it->random->next : nullptr;
    it = it->next->next;
  }

  // Step-3: Deatach A` from A
  it = head;
  Node *clonedHead = it->next;
  while (it)
  {
    Node *clonedNode = it->next;
    it->next = clonedNode->next;
    it = it->next;
    // it->next = it->next->next;
    if (clonedNode->next)
    {
      clonedNode->next = clonedNode->next->next;
    }
  }

  return clonedHead;
}

Node *copyRandomList(Node *head)
{
  // unordered_map<Node*,Node*> mp; //old ndoe --> new node mapping
  // return helper(head,mp);

  // Method2:
  return copyRandom(head);
}

int main()
{

  Node *first = new Node(10);
  Node *second = new Node(20);
  Node *third = new Node(30);
  Node *fourth = new Node(40);
  Node *fifth = new Node(50);

  first->next = second;
  first->random = nullptr;

  second->next = third;
  second->random = first;

  third->next = fourth;
  third->random = fifth;

  fourth->next = fifth;
  fourth->random = third;

  fifth->next = nullptr;
  fifth->random = first;

  Node *head = first;

  //* Printing Linked List
  printLinkedList(head);
  cout << endl;

  //* Merging LL
  cout << "After Deep Copying: " << endl;
  printLinkedList(copyRandomList(head));
  cout << endl;
  return 0;
}