#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.*/
struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printLinkedList(ListNode *head)
{
  ListNode *temp = head;

  while (temp != NULL)
  {
    cout << temp->val << "->";
    temp = temp->next;
  }
  cout << endl;
}

//* Double a Number Represented as a Linked List
void solve(ListNode *head, int &carry)
{
  if (!head)
    return;

  solve(head->next, carry);
  int prod = head->val * 2 + carry;
  head->val = prod % 10;
  carry = prod / 10;
}
ListNode *doubleIt(ListNode *head)
{
  int carry = 0;
  solve(head, carry);
  if (carry != 0)
  {
    ListNode *newHead = new ListNode(carry);
    newHead->next = head;
    head = newHead;
  }
  return head;
}

int main()
{

  ListNode *first = new ListNode(9);
  ListNode *second = new ListNode(9);
  ListNode *fifth = new ListNode(9);

  first->next = second;
  second->next = fifth;
  fifth->next = nullptr;

  ListNode *head = first;

  printLinkedList(head);
  cout << endl;

  //* Merging LL
  cout << "Double a Number Represented as a Linked List: " << endl;
  printLinkedList(doubleIt(head));
  cout << endl;
  return 0;
}