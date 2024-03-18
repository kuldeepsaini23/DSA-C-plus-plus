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

ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    if (list1 == 0)
        return list2;
    if (list2 == 0)
        return list1;

    ListNode *ans = new ListNode(-1);
    ListNode *mptr = ans;

    while (list1 && list2)
    {
        if (list1->val < list2->val)
        {
            mptr->next = list1;
            mptr = list1;
            list1 = list1->next;
        }
        else
        {
            mptr->next = list2;
            mptr = list2;
            list2 = list2->next;
        }
    }

    if (list1)
    {
        mptr->next = list1;
    }

    if (list2)
    {
        mptr->next = list2;
    }

    return ans->next;
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

    ListNode *head1 = first;

    //* Printing Linked List
    printLinkedList(head1);
    cout << endl;

    ListNode *one = new ListNode(27);
    ListNode *two = new ListNode(200);
    ListNode *three = new ListNode(300);


    one->next = two;
    two->next = three;
    three->next = nullptr;

    ListNode *head2 = one;

    
    //* Printing Linked List
    printLinkedList(head2);
    cout << endl;


    //* Merging LL
     cout << "After Merging: " <<endl;
    printLinkedList(mergeTwoLists(head1,head2));
     cout << endl;
    return 0;
}