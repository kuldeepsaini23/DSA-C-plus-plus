
#include <iostream>
using namespace std;

/**
 * Definition for singly-linked list.*/
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
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

int getLength(ListNode *head)
{
    ListNode *itr = head;
    int length = 1;
    while (itr->next != nullptr)
    {
        length++;
        itr = itr->next;
    }
    return length;
}
ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
{
    int LenA = getLength(headA);
    int LenB = getLength(headB);

    ListNode *itr1 = headA;
    ListNode *itr2 = headB;

    while (LenA < LenB)
    {
        if (LenB == 0)
            break;
        LenB--;
        itr2 = itr2->next;
    }

    while (LenB < LenA)
    {
        if (LenA == 0)
            break;
        LenA--;
        itr1 = itr1->next;
    }

    while (itr1 != itr2)
    {
        if (!itr1 || !itr2)
        {
            return nullptr;
        }
        itr1 = itr1->next;
        itr2 = itr2->next;
    }

    return itr1;
}

int main()
{
    
    ListNode *first = new ListNode(1);
    ListNode *second = new ListNode(9);
    ListNode *third = new ListNode(1);
    ListNode *fourth = new ListNode(2);
    ListNode *fifth = new ListNode(4);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = nullptr;

    ListNode *head1 = first;

    //* Printing Linked List
    printLinkedList(head1);
    cout << endl;

    ListNode *one = new ListNode(3);
    one->next = fourth;

    ListNode *head2 = one;

    
    //* Printing Linked List
    printLinkedList(head2);
    cout << endl;


    //* Merging LL
     cout << "Intersection Node: " <<endl;
    printLinkedList(getIntersectionNode(head1,head2));
     cout << endl;
    return 0;
}