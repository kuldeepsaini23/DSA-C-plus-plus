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

//* Remove N Nodes From last

 int getLength(ListNode* head){
        ListNode* itr = head;
        int length = 1;
        while(itr->next != NULL){
            length++;
            itr = itr->next;
        }
        return length;
    }
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = getLength(head);
        int posi = len - n;
        ListNode* itr = head;
        if(posi == 0){

            if(itr->next == NULL){
                return NULL;
            }
            else{
                return head->next;
            }
        }
        while(posi-1 > 0 ){
            if(itr->next == NULL) return NULL;
            itr = itr->next;
            posi--;
            
        }
    
        ListNode* temp = itr->next;
        
        if(temp->next == NULL){
            itr->next = NULL;
        }
        else{
            itr->next = temp->next;
        }
        
        delete temp;
        return head;
    }

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

    //* Merging LL
     cout << "After Merging: " <<endl;
    printLinkedList(removeNthFromEnd(head,2));
     cout << endl;
    return 0;
}