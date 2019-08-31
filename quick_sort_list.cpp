#include<iostream>
#include<cstdlib>
using namespace std;
class Node
{
	public:
    int data;
     Node *next;
};

/* A utility function to insert a node at the beginning of linked list */
void push( Node** head_ref, int new_data)
{
    /* allocate node */
    Node* new_node = new Node;

    /* put in the data  */
    new_node->data  = new_data;

    /* link the old list off the new node */
    new_node->next = (*head_ref);

    /* move the head to point to the new node */
    (*head_ref)    = new_node;
}

/* A utility function to print linked list */
void print_list(Node *node)
{
	 while (node != NULL)
    {
        printf("%d  ", node->data);
        node = node->next;
    }
    printf("\n");
}

// Returns the last node of the list
 Node *getTail( Node *cur)
{
    while (cur != NULL && cur->next != NULL)
        cur = cur->next;
    return cur;
}
 Node *partition( Node *head, Node *end, 
                        Node **newHead, Node **newEnd) 
{ 
     Node *pivot = end; 
     Node *prev = NULL, *cur = head, *tail = pivot; 
  
    // During partition, both the head and end of the list might change 
    // which is updated in the newHead and newEnd variables 
    while (cur != pivot) 
    { 
        if (cur->data < pivot->data) 
        { 
            // First node that has a value less than the pivot - becomes 
            // the new head 
            if ((*newHead) == NULL) 
                (*newHead) = cur; 
  
            prev = cur;   
            cur = cur->next; 
        } 
        else // If cur node is greater than pivot 
        { 
            // Move cur node to next of tail, and change tail 
            if (prev) 
                prev->next = cur->next; 
             Node *tmp = cur->next; 
            cur->next = NULL; 
	       tail->next = cur;
            tail = cur;
            cur = tmp;
        }
    }

    // If the pivot data is the smallest element in the current list,
    // pivot becomes the head
    if ((*newHead) == NULL)
        (*newHead) = pivot;

    // Update newEnd to the current last node
    (*newEnd) = tail;

    // Return the pivot node
    return pivot;
}


//here the sorting happens exclusive of the end node
 Node *quickSortRecur( Node *head, Node *end)
{
    // base condition
    if (!head || head == end)
	         return head;

    Node *newHead = NULL, *newEnd = NULL;

    // Partition the list, newHead and newEnd will be updated
    // by the partition function
     Node *pivot = partition(head, end, &newHead, &newEnd);

    // If pivot is the smallest element - no need to recur for
    // the left part.
    if (newHead != pivot)
    {
        // Set the node before the pivot node as NULL
        struct Node *tmp = newHead;
        while (tmp->next != pivot)
            tmp = tmp->next;
        tmp->next = NULL;

        // Recur for the list before pivot
        newHead = quickSortRecur(newHead, tmp);

        // Change next of last node of the left half to pivot
        tmp = getTail(newHead);
        tmp->next =  pivot;
    }     
    pivot->next = quickSortRecur(pivot->next, newEnd);

    return newHead;
}

void quick_sort(Node** head_ref){
	*head_ref=quickSortRecur(*head_ref,getTail(*head_ref));
	return;
}
int main(int argc,const char* argv[]){
	 Node* head=NULL;
	for(int i=argc-1;i>=1;i--){
		push(&head,atoi(argv[i]));
	}
	quick_sort(&head);
	print_list(head);
	return 0;
}
