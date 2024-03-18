//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print zs in a given linked list */
void printList(struct Node *node)
{
    while(node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert(int n1)
{
    int n,value;
    n=n1;
    struct Node *temp;
    
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp=start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp=temp->next;
        }
    }
}


class Solution
{
    public:
    void linkdelete(struct Node  *head, int M, int N)
    {
        //My Method 
        cout << "head: " <<head->data << endl;
        if(!head) return;
        Node* curr = head;
        Node* prev = new Node(-1);
        int n = N;
        
        for(int i=0; i<M; i++){
            if(!curr) return;
            prev = curr;
            curr = curr->next;
        }
        
        
        while(n){
            if(!curr){
                prev->next = NULL;
                return;  
            } 
            n--;
            curr = curr->next;
        }
        
        // cout << "curr after while loop: " << curr->data<<endl;
            
        prev->next = curr;
        if(curr==NULL) return;
        linkdelete(curr,M,N);    
        
        // Bhaiya Method
        // if(!head) return;
        // Node* it = head;
        
        // for(int i=0; i<M-1; i++){
        //     if(!it) return;
            
        //     it = it->next;
        // }
        
        // if(!it) return ;
        // //jisko delete krna hai uspe aate hai
        // Node* MthNode = it;
        // it = it->next;
        
        // for(int i=0; i<N; i++){
        //     if(!it) break;
        //     Node* temp = it->next;
        //     delete it;
        //     it  = temp;
        // }
        // MthNode->next = it;
        // linkdelete(it,M,N);   
        
    }
};



//{ Driver Code Starts.
int main()
{
    int t,n1;
    cin>>t;
    while (t--) {
        cin>>n1;
        int m,n;
        cin>>m;
        cin>>n;
        insert(n1);
        Solution ob;
        ob.linkdelete(start,m,n);
        printList(start);
    }
    
    return 0;
}

// } Driver Code Ends