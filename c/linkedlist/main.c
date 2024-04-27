#include <stdio.h>
#include <stdlib.h>

#include "custom_linked_list_header.h"

int main() {
    struct node *head = NULL; 

    // give address of head 
    insert_At_Head(&head, 1);
    insert_At_Head(&head, 2);

    traverse_Linked_List_From_Head(head);
    
    insert_At_Tail(&head, 3);

    traverse_Linked_List_From_Head(head);

    insert_At_Position(&head, 6, 1);

    traverse_Linked_List_From_Head(head);

    return 0;
}
