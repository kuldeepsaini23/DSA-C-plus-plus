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


//* Merge List
 //find mid
    ListNode* fintMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    //merge two sorted linked list
    ListNode* merge(ListNode* left, ListNode* right){
        if(right == NULL) return left;
        if(left == NULL) return right;

        ListNode* ans = new ListNode(-1);
        ListNode* temp = ans;

        while(left != NULL && right != NULL){
            if(left->val < right->val){
                temp->next = left;
                temp = left;
                left = left->next;
            }
            else{
                temp->next = right;
                temp = right;
                right = right->next;
            }
        }

        if(left){
            temp->next = left;
        }
        
        if(right){
            temp->next = right;
        }

        return ans->next;

    }
    ListNode* sortList(ListNode* head) {
        //Base Case
        if(head==0 || head->next==0){
            return head;
        }

        //Find Mid
        ListNode* mid = fintMid(head);
        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = 0;

        //Recrusive call
        left = sortList(left);
        right = sortList(right);

        //Merge List on backtracking
        ListNode* mergedLL = merge(left,right);
        return mergedLL;
    }

int main()
{

    ListNode *first = new ListNode(40);
    ListNode *second = new ListNode(20);
    ListNode *third = new ListNode(10);
    ListNode *fourth = new ListNode(100);
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

    //* Merging LL
     cout << "After Sorting: " <<endl;
    printLinkedList(sortList(head));
     cout << endl;
    return 0;
}