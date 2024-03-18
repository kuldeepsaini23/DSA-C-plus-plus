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

void printLinkedList(ListNode* head){
  ListNode* temp = head;

  while(temp != NULL){
    cout << temp->val << "->";
    temp = temp->next;
  }
  cout<<endl;
}



// Get length
int getLength(ListNode *head)
{
  int len = 1;
  ListNode *temp = head;
  while (temp)
  {
    temp = temp->next;
    len++;
  }
  return len;
}

//* My Solution to swap Values
ListNode *swapNodes(ListNode *head, int k)
{
  if (!head)
    return nullptr;
  if (k == 1 && !head->next)
    return head;

  ListNode *currStart = head;
  ListNode *prevStart = new ListNode(-1);
  ListNode *nxtStart = head->next;
  ListNode *currEnd = head;
  ListNode *prevEnd = new ListNode(-1);
  ListNode *nxtEnd = head->next;

  int len = getLength(head);
  int lastPosi = len - k;
  // cout << lastPosi;

  while (k - 1)
  {
    prevStart = currStart;
    currStart = currStart->next;
    nxtStart = nxtStart->next ? nxtStart->next : 0;
    k--;
  }

  while (lastPosi - 1)
  {
    prevEnd = currEnd;
    currEnd = currEnd->next;
    nxtEnd = nxtEnd->next ? nxtEnd->next : nullptr;
    lastPosi--;
  }
  int val = currStart->val;

  currStart->val = currEnd->val;
  currEnd->val = val;

  return head;
}

//* Solution two swap links
int getLengthWithRecursion(ListNode *head)
{
  if (!head)
    return 0;
  return 1 + getLength(head->next);
}
ListNode *swapNodesLinks(ListNode *head, int k)
{
  // Case 1
  if (!head || !head->next)
  {
    return head;
  }

  int len = getLength(head);
  int lpos = k;
  int rpos = len - k + 1;

  if (rpos < lpos)
  {
    swap(lpos, rpos);
  }

  // Case 2
  if (lpos == rpos)
    return head;

  // Case 3
  if (len == 2)
  {
    ListNode *nextNode = head->next;
    nextNode->next = head;
    head->next = 0;
    head = nextNode;
    return head;
  }

  // Case 4
  if (lpos == 1)
  {
    ListNode *lp = 0;
    ListNode *ln = head;
    ListNode *rp = head;
    for (int i = 0; i < rpos - 2; i++)
    {
      rp = rp->next;
    }
    ListNode *rn = rp->next;
    ListNode *rsave = rn->next;
    // swapping
    rn->next = ln->next;
    rp->next = ln;
    ln->next = rsave;
    head = rn;
    return head;
  }

  int noOfNodesBetweenSwapNodes = rpos - lpos - 1;
  // Case 5
  if (noOfNodesBetweenSwapNodes == 0)
  {
    // ln and rn are adjacents
    ListNode *lp = head;
    for (int i = 0; i < lpos - 2; i++)
      lp = lp->next;
    ListNode *ln = lp->next;

    ListNode *rp = head;
    for (int i = 0; i < rpos - 2; i++)
      rp = rp->next;
    ListNode *rn = rp->next;
    ListNode *rsave = rn->next;

    // swap
    lp->next = rp->next;
    rn->next = rp;
    rp->next = rsave;
    return head;
  }
  else
  {
    // Case 6 (No of Nodes >=1)
    ListNode *lp = head;
    for (int i = 0; i < lpos - 2; i++)
      lp = lp->next;
    ListNode *ln = lp->next;

    ListNode *rp = head;
    for (int i = 0; i < rpos - 2; i++)
      rp = rp->next;
    ListNode *rn = rp->next;
    ListNode *rsave = rn->next;

    // swap
    lp->next = rn;
    rn->next = ln->next;
    rp->next = ln;
    ln->next = rsave;
    return head;
  }
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

  //* Printing Linked List
  printLinkedList(head);
  cout << endl;

  //After Swapping
  cout << "Printing After Swapping: " << endl;
  printLinkedList(swapNodesLinks(head, 2));


  return 0;
}