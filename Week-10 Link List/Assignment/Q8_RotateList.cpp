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

//* Rotate List
int getLength(ListNode *head)
{
  ListNode *temp = head;
  int count = 0;
  while (temp != 0)
  {
    count++;
    temp = temp->next;
  }
  return count;
}
ListNode *rotateRight(ListNode *head, int k)
{
  if (!head)
    return NULL;
  int len = getLength(head);
  int actualRotateK = (k % len);

  if (actualRotateK == 0)
  {
    return head;
  }

  int posi = len - actualRotateK;
  ListNode *itr = head;
  while (posi - 1)
  {
    itr = itr->next;
    posi--;
  }

  // we are one posi back from where we heve to rotate kth element
  ListNode *curr = itr;
  itr = itr->next;
  curr->next = NULL;

  ListNode *newHead = itr;
  while (itr->next != NULL)
  {
    itr = itr->next;
  }

  itr->next = head;
  return newHead;
}

int main()
{

  ListNode *first = new ListNode(10);
  ListNode *second = new ListNode(20);
  ListNode *third = new ListNode(30);
  ListNode *fourth = new ListNode(40);
  ListNode *fifth = new ListNode(50);

  first->next = second;
  second->next = third;
  third->next = fourth;
  fourth->next = fifth;
  fifth->next = nullptr;

  ListNode *head = first;

  printLinkedList(head);
  cout << endl;

  //* Merging LL
  cout << "After Rotating: " << endl;
  printLinkedList(rotateRight(head, 2));
  cout << endl;
  return 0;
}