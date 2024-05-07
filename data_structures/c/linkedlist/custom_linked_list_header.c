#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "custom_linked_list_header.h"

struct sll_node *currentNode_SLL;
struct sll_node *newNode_SLL;
struct sll_node *oldNode_SLL;

struct dll_node *currentNode_DLL;
struct dll_node *newNode_DLL;
struct dll_node *oldNode_DLL;

struct csll_node *currentNode_CSLL;
struct csll_node *newNode_CSLL;
struct csll_node *oldNode_CSLL;

struct cdll_node *currentNode_CDLL;
struct cdll_node *newNode_CDLL;
struct cdll_node *oldNode_CDLL;

void traverse_SLL_From_Head(struct sll_node *headRef) {
    if(headRef == NULL) {
        printf("\tList empty\n");
    } else {
        printf("\t");
        while(headRef != NULL) {
            printf("%i ", headRef->data);
            headRef = headRef->next;
        }
        printf("\n");
    }
}

int get_Length_Of_SLL(struct sll_node *headRef) {
    int i = 0;

    for(; headRef != NULL; i++) {
        headRef = headRef->next;
    }

    return i;
}

bool search_Node_In_SLL(struct sll_node *headRef, int data) {
    while(headRef != NULL) {
        if(headRef->data == data) {
            return true;
        }
        headRef = headRef->next;
    }    

    return false;
}

int get_Node_Index_In_SLL(struct sll_node *headRef, int data) {
    for(int i = 0; headRef != NULL; i++) {
        if(headRef->data == data) {
            return i;
        }

        headRef = headRef->next;
    }

    return -1;
}

void insert_At_Head(struct sll_node **headRef, int newData) {
    newNode_SLL = (struct sll_node*) malloc(sizeof(struct sll_node)); 

    newNode_SLL->data = newData;
    newNode_SLL->next = *headRef;

    *headRef = newNode_SLL;
}

void insert_At_Tail(struct sll_node **headRef, int newData) {
    newNode_SLL = (struct sll_node*) malloc(sizeof(struct sll_node)); 
    currentNode_SLL = *headRef; 

    newNode_SLL->data = newData;
    newNode_SLL->next = NULL;

    if(*headRef == NULL)  {
        *headRef = newNode_SLL;
    } else {
        while(currentNode_SLL->next != NULL) 
            currentNode_SLL = currentNode_SLL->next;

        currentNode_SLL->next = newNode_SLL;
    }
}

void insert_At_Position(struct sll_node **headRef, int newData, int pos) {
    newNode_SLL = (struct sll_node*) malloc(sizeof(struct sll_node)); 

    newNode_SLL->data = newData;

    if(pos > get_Length_Of_SLL(*headRef)) {
        printf("\tGiven position is greater than the length of list\n");
    } else if(*headRef == NULL || pos == 0) {
        newNode_SLL->next = *headRef;
        *headRef = newNode_SLL;
    } else {
        currentNode_SLL = *headRef; 

        for(int i = 1; i < pos; i++) {
            currentNode_SLL = currentNode_SLL->next;
        }

        newNode_SLL->next = currentNode_SLL->next;
        currentNode_SLL->next = newNode_SLL;
    }
}

void delete_Head(struct sll_node **headRef) {
    if((*headRef) == NULL) {
        printf("\tLinked list is already empty.\n");
    } else if((*headRef)->next == NULL) {
        oldNode_SLL = (*headRef);
        (*headRef) = NULL;
        free(oldNode_SLL);
    } else {
        oldNode_SLL = *headRef;
        *headRef = (*headRef)->next;

        free(oldNode_SLL);
    }
}

void delete_Tail(struct sll_node **headRef) {
    if((*headRef) == NULL) {
        printf("\tLinked list is already empty.\n");
    } else if((*headRef)->next == NULL) {
        oldNode_SLL = (*headRef);
        (*headRef) = NULL;
        free(oldNode_SLL);
    } else {
        currentNode_SLL = *headRef;

        while(currentNode_SLL->next->next != NULL) {
            currentNode_SLL = currentNode_SLL->next;
        }

        oldNode_SLL = currentNode_SLL->next;

        currentNode_SLL->next = NULL;

        free(oldNode_SLL);
    }
}

void delete_At_Position(struct sll_node **headRef, int pos) {
    currentNode_SLL = *headRef;

    if(*headRef == NULL) {
        printf("\tLinked list is already empty.\n");
    } else if(pos > get_Length_Of_SLL(*headRef)) {
        printf("\tGiven position is greater than the length of list\n");
    } else if((*headRef)->next == NULL) {
        oldNode_SLL = (*headRef);
        (*headRef) = NULL;
        free(oldNode_SLL);
    } else if(pos == 0) {
        (*headRef) = currentNode_SLL->next;    
        free(currentNode_SLL);
    } else {
        for(int i = 1; i < pos; i++) {
            currentNode_SLL = currentNode_SLL->next;
        } 

        oldNode_SLL = currentNode_SLL->next;

        currentNode_SLL->next = currentNode_SLL->next->next;

        free(oldNode_SLL);
    }
}

void traverse_DLL_From_Head(struct dll_node *headRef) {
    if(headRef == NULL) {
        printf("\tList empty\n");
    } else {
        printf("\t");
        while(headRef != NULL) {
            printf("%i ", headRef->data);
            headRef = headRef->next;
        }
        printf("\n");
    }
}

int get_Length_Of_DLL(struct dll_node *headRef) {
    int i = 0;

    for(; headRef != NULL; i++) {
        headRef = headRef->next;
    }

    return i;
}

bool search_Node_In_DLL(struct dll_node *headRef, int data) {
    while(headRef != NULL) {
        if(headRef->data == data) {
            return true;
        }
        headRef = headRef->next;
    }    

    return false;
}

int get_Node_Index_In_DLL(struct dll_node *headRef, int data) {
    for(int i = 0; headRef != NULL; i++) {
        if(headRef->data == data) {
            return i;
        }
        headRef = headRef->next;
    }

    return -1;
}

struct dll_node *get_Tail_In_DLL(struct dll_node **headRef) {
    currentNode_DLL = *headRef;
    if(currentNode_DLL == NULL) {
        return NULL;
    } else if(currentNode_DLL->next == NULL) {
        return currentNode_DLL;
    } else {
        while(currentNode_DLL->next != NULL) {
            currentNode_DLL = currentNode_DLL->next;
        }

        return currentNode_DLL;
    }
}

void insert_At_Head_DLL(struct dll_node **headRef, int newData) {
    newNode_DLL = (struct dll_node*) malloc(sizeof(struct dll_node));

    newNode_DLL->data = newData;
    newNode_DLL->prev = NULL;

    if(*headRef == NULL) {
        newNode_DLL->next = NULL;
        *headRef = newNode_DLL;
    } else {
        newNode_DLL->next = *headRef;
        (*headRef)->prev = newNode_DLL;
        *headRef = newNode_DLL;
    }
}

void insert_At_Tail_DLL(struct dll_node **headRef, int newData) {
    newNode_DLL = (struct dll_node*) malloc(sizeof(struct dll_node)); 

    newNode_DLL->data = newData;
    newNode_DLL->next = NULL;

    if(*headRef == NULL) {
        newNode_DLL->prev = NULL;
        *headRef = newNode_DLL;
    } else {
        currentNode_DLL = *headRef;

        while(currentNode_DLL->next != NULL) {
            currentNode_DLL = currentNode_DLL->next;
        }

        currentNode_DLL->next = newNode_DLL;
        newNode_DLL->prev = currentNode_DLL;
    }
}

void insert_At_Position_DLL(struct dll_node **headRef, int newData, int pos) {
    newNode_DLL = (struct dll_node*) malloc(sizeof(struct dll_node));
    newNode_DLL->data = newData;

    if(pos > get_Length_Of_DLL(*headRef)) {
        printf("\tGiven position is greater than the length of list\n");
    } else if(pos == 0 || *headRef == NULL) {
        newNode_DLL->next = (*headRef);
        newNode_DLL->prev = NULL;
        (*headRef) = newNode_DLL;
    } else {
        currentNode_DLL = *headRef;  

        for(int i = 1; i < pos && currentNode_DLL->next != NULL; i++) {
            currentNode_DLL = currentNode_DLL->next;
        }

        newNode_DLL->next = currentNode_DLL->next;
        newNode_DLL->prev = currentNode_DLL;
        currentNode_DLL->next = newNode_DLL;
    }
}

void delete_Head_DLL(struct dll_node **headRef) {
    if((*headRef) == NULL) { 
        printf("\tLinked list is already empty.\n");
    } else if((*headRef)->next == NULL) { 
        oldNode_DLL = (*headRef);
        (*headRef) = NULL; 
        free(oldNode_DLL);
    } else {
        oldNode_DLL = (*headRef);
        (*headRef) = (*headRef)->next;
        (*headRef)->prev = NULL;
        free(oldNode_DLL);
    }
}

void delete_Tail_DLL(struct dll_node **headRef, struct dll_node **tailRef) {
    if((*headRef) == NULL) {
        printf("\tLinked list is already empty.\n");
    } else if((*tailRef)->prev == NULL) { 
        oldNode_DLL = (*headRef);
        (*headRef) = (*tailRef) = NULL;
        free(oldNode_DLL);
    } else {
        oldNode_DLL = (*tailRef);   

        (*tailRef) = (*tailRef)->prev;
        (*tailRef)->next = NULL;

        free(oldNode_DLL);
    }
}

void delete_At_Position_DLL(struct dll_node **headRef, int pos) {
    currentNode_DLL = *headRef;
    int length = get_Length_Of_DLL(*headRef);

    if ((*headRef) == NULL) {
        printf("\tLinked list is already empty.\n");
    } else if(pos > length) {
        printf("\tGiven position is greater than the length of list\n");
    } else if((*headRef)->next == NULL) {
        oldNode_DLL = (*headRef);
        (*headRef) = NULL;

        free(oldNode_DLL);
    } else if(pos == 0) {
        oldNode_DLL = currentNode_DLL;
        (*headRef) = currentNode_DLL->next;    
        (*headRef)->prev = NULL;

        free(oldNode_DLL);
    } else {
        for(int i = 1; i < pos; i++) {
            currentNode_DLL = currentNode_DLL->next;
        }

        oldNode_DLL = currentNode_DLL->next; 
        currentNode_DLL->next = oldNode_DLL->next;

        if(currentNode_DLL->next != NULL) {
            oldNode_DLL->next->prev = currentNode_DLL;
        }
        
        free(oldNode_DLL);
    }
}

void traverse_CSLL_From_Tail(struct csll_node *tailRef) {
    if(tailRef == NULL) {
        printf("\tList is empty\n");
    } else {
        struct csll_node *start = tailRef->next;

        printf("\t");
        do {
            tailRef = tailRef->next;
            printf("%i ", tailRef->data);
        } while(start != tailRef->next);
        printf("\n");
    }
}

int get_Length_Of_CSLL(struct csll_node *headRef) {
    int i = 0;

    if(headRef != NULL) {
        struct csll_node *start = headRef;
        do {
            i++;
            headRef = headRef->next;
        } while(headRef != start);
    }

    return i;
}

bool search_Node_In_CSLL(struct csll_node *tailRef, int data) {
    if(tailRef != NULL) {
        currentNode_CSLL = tailRef;
        do {
            if(currentNode_CSLL->data == data) 
                return true;
            currentNode_CSLL = currentNode_CSLL->next;
        } while(currentNode_CSLL != tailRef);
    }

    return false;
}

void insert_At_Head_CSLL(struct csll_node **tailRef, int newData) {
    newNode_CSLL = (struct csll_node*) malloc(sizeof(struct csll_node));
    newNode_CSLL->data = newData;

    if((*tailRef) == NULL) {
        newNode_CSLL->next = newNode_CSLL;
        (*tailRef) = newNode_CSLL;
    } else if((*tailRef)->next == (*tailRef)) { 
        (*tailRef)->next = newNode_CSLL;
        newNode_CSLL->next = (*tailRef);
    } else {
        newNode_CSLL->next = (*tailRef)->next;
        (*tailRef)->next = newNode_CSLL;
    }
}

void insert_At_Tail_CSLL(struct csll_node **tailRef, int newData) {
    newNode_CSLL = (struct csll_node*) malloc(sizeof(struct csll_node));
    newNode_CSLL->data = newData;

    if((*tailRef) == NULL) {
        newNode_CSLL->next = newNode_CSLL;
        (*tailRef) = newNode_CSLL;
    } else if((*tailRef)->next == (*tailRef)) {
        (*tailRef)->next = newNode_CSLL; 
        newNode_CSLL->next = (*tailRef);
        (*tailRef) = newNode_CSLL;
    } else {
        newNode_CSLL->next = (*tailRef)->next;
        (*tailRef)->next = newNode_CSLL;
        (*tailRef) = newNode_CSLL;
    }
}

void insert_Before_Node_CSLL(struct csll_node **tailRef, int newData, int flag) {
    newNode_CSLL = (struct csll_node*) malloc(sizeof(struct csll_node));
    newNode_CSLL->data = newData;

    if((*tailRef) == NULL) { 
        newNode_CSLL->next = newNode_CSLL;
        (*tailRef) = newNode_CSLL;
    } else {
        currentNode_CSLL = *tailRef;

        do {
            if(currentNode_CSLL->next->data == flag) {
                newNode_CSLL->next = currentNode_CSLL->next;
                currentNode_CSLL->next = newNode_CSLL;

                if(currentNode_CSLL == (*tailRef))
                    (*tailRef) = newNode_CSLL;

                return;
            }
            currentNode_CSLL = currentNode_CSLL->next;
        } while(currentNode_CSLL != (*tailRef));
        
        printf("\tNode given not found\n");
    }
}

void insert_After_Node_CSLL(struct csll_node **tailRef, int newData, int flag) {
    newNode_CSLL = (struct csll_node*) malloc(sizeof(struct csll_node));
    newNode_CSLL->data = newData;

    if((*tailRef) == NULL) {
        newNode_CSLL->next = newNode_CSLL;
        (*tailRef) = newNode_CSLL;
    } else {
        currentNode_CSLL = (*tailRef);

        do {
            if(currentNode_CSLL->data == flag) {
                newNode_CSLL->next = currentNode_CSLL->next;
                currentNode_CSLL->next = newNode_CSLL;

                if(currentNode_CSLL == (*tailRef)) {
                    (*tailRef) = newNode_CSLL;
                }

                return;
            }
            currentNode_CSLL = currentNode_CSLL->next;
        } while(currentNode_CSLL != (*tailRef));

        printf("\tNode given not found\n");
    }

}

void delete_Head_CSLL(struct csll_node **tailRef) {
    if((*tailRef) == NULL) {
        printf("\tLinked list is already empty.\n");
    } else if((*tailRef)->next == (*tailRef)) {
        oldNode_CSLL = (*tailRef);
        (*tailRef) = NULL; 
        free(oldNode_CSLL);
    } else {
        oldNode_CSLL = (*tailRef)->next;

        (*tailRef)->next = oldNode_CSLL->next;
        free(oldNode_CSLL);
    }
}

void delete_Tail_CSLL(struct csll_node **tailRef) {
    if((*tailRef) == NULL) {
        printf("\tLinked list is already empty.\n");
    } else if((*tailRef)->next == (*tailRef)) {
        oldNode_CSLL = (*tailRef);
        (*tailRef) = NULL; 
        free(oldNode_CSLL);
    } else {
        oldNode_CSLL = (*tailRef);
        newNode_CSLL = (*tailRef);

        while(newNode_CSLL->next != oldNode_CSLL) {
            newNode_CSLL = newNode_CSLL->next;
        }

        newNode_CSLL->next = oldNode_CSLL->next;
        (*tailRef) = newNode_CSLL;
        free(oldNode_CSLL);
    }
}

void delete_Node_By_Data_CSLL(struct csll_node **tailRef, int flag) {
    if((*tailRef) == NULL) {
        printf("\tLinked list is already empty.\n");
    } else if((*tailRef)->next == (*tailRef)) {
        if((*tailRef)->data == flag) {
            oldNode_CSLL =(*tailRef);
            (*tailRef) = NULL;
            free(oldNode_CSLL);
        } else {
            printf("\tNode given not found\n");
        }
    } else {
        currentNode_CSLL = (*tailRef);

        do {
            if(currentNode_CSLL->next->data == flag) {
                oldNode_CSLL = currentNode_CSLL->next;

                if(currentNode_CSLL->next == (*tailRef)) {
                    (*tailRef) = currentNode_CSLL;
                }

                currentNode_CSLL->next = oldNode_CSLL->next;

                free(oldNode_CSLL);

                return;
            }
            currentNode_CSLL = currentNode_CSLL->next;

        } while(currentNode_CSLL != (*tailRef));

        printf("\tNode given not found\n");
    }
}

void delete_Before_Node_CSLL(struct csll_node **tailRef, int flag) {
    if((*tailRef) == NULL) {
        printf("\tLinked list is already empty.\n");
    } else if((*tailRef)->next == (*tailRef)) { 
        if((*tailRef)->data == flag) {
            oldNode_CSLL =(*tailRef);
            (*tailRef) = NULL;
            free(oldNode_CSLL);
        } else {
            printf("\tNode given not found\n");
        }
    } else {
        currentNode_CSLL = (*tailRef);

        do {
            if(currentNode_CSLL->next->next->data == flag) {
                oldNode_CSLL = currentNode_CSLL->next;

                if(currentNode_CSLL->next == (*tailRef)->next) {
                    (*tailRef) = currentNode_CSLL;
                }

                currentNode_CSLL->next = oldNode_CSLL->next;

                free(oldNode_CSLL);

                return;
            }

            currentNode_CSLL = currentNode_CSLL->next;

        } while(currentNode_CSLL != (*tailRef));

        printf("\tNode given not found\n");
    }
}

void delete_After_Node_CSLL(struct csll_node **tailRef, int flag) {
    if((*tailRef) == NULL) {
        printf("\tLinked list is already empty.\n");
    } else if((*tailRef)->next == (*tailRef)) {
        if((*tailRef)->data == flag) {
            oldNode_CSLL =(*tailRef);
            (*tailRef) = NULL;
            free(oldNode_CSLL);
        } else {
            printf("\tNode given not found\n");
        }
    } else {
        currentNode_CSLL = (*tailRef);

        do {
            if(currentNode_CSLL->data == flag) {
                oldNode_CSLL = currentNode_CSLL->next;

                if(currentNode_CSLL->next == (*tailRef)->next) {
                    (*tailRef) = currentNode_CSLL;
                }

                currentNode_CSLL->next = oldNode_CSLL->next;

                free(oldNode_CSLL);

                return;
            }

            currentNode_CSLL = currentNode_CSLL->next; 
        } while(currentNode_CSLL != (*tailRef)); 
        
        printf("\tNode given not found\n");
    }
}

void traverse_CDLL_From_Head(struct cdll_node *headRef) {
    if(headRef == NULL) {
        printf("\tList is empty\n");
    } else {
        struct cdll_node *start = headRef;

        printf("\t");
        do {
            printf("%i ", headRef->data);
            headRef = headRef->next;
        } while(headRef != start);

        printf("\n");
    }

}

int get_Length_Of_CDLL(struct cdll_node *headRef) {
    int i = 0;

    if(headRef != NULL) {
        struct cdll_node *head = headRef;
        do {
            i++;
            headRef = headRef->next;
        } while(headRef != head);
    }

    return i;
}

bool search_Node_In_CDLL(struct cdll_node *headRef, int data) {
    if(headRef != NULL) {
        currentNode_CDLL = headRef;
        do {
            if(currentNode_CDLL->data == data) 
                return true;
            currentNode_CDLL = currentNode_CDLL->next;
        } while(currentNode_CDLL != headRef);
    }

    return false;
}

void insert_At_Head_CDLL(struct cdll_node **headRef, int newData) {
    newNode_CDLL = (struct cdll_node*) malloc(sizeof(struct cdll_node));
    newNode_CDLL->data = newData;

    if((*headRef) == NULL) {
        newNode_CDLL->next = newNode_CDLL;
        newNode_CDLL->prev = newNode_CDLL;
        (*headRef) = newNode_CDLL;
    } else if((*headRef)->next == (*headRef)) {
        newNode_CDLL->next = (*headRef);
        newNode_CDLL->prev = (*headRef);
        (*headRef)->next = newNode_CDLL;
        (*headRef)->prev = newNode_CDLL;
        (*headRef) = newNode_CDLL;
    } else {
        currentNode_CDLL = (*headRef);

        newNode_CDLL->next = currentNode_CDLL;
        newNode_CDLL->prev = currentNode_CDLL->prev;
        currentNode_CDLL->prev->next = newNode_CDLL;

        (*headRef) = newNode_CDLL;
    }
}

void insert_At_Tail_CDLL(struct cdll_node **headRef, int newData) {
    newNode_CDLL = (struct cdll_node*) malloc(sizeof(struct cdll_node));
    newNode_CDLL->data = newData;

    if((*headRef) == NULL) {
        newNode_CDLL->next = newNode_CDLL;
        newNode_CDLL->prev = newNode_CDLL;
        (*headRef) = newNode_CDLL;
    } else if((*headRef)->next == (*headRef)) {
        (*headRef)->next = newNode_CDLL;
        (*headRef)->prev = newNode_CDLL;
        newNode_CDLL->next = (*headRef);
        newNode_CDLL->prev = (*headRef);
    } else {
        currentNode_CDLL = (*headRef);

        do { 
            currentNode_CDLL = currentNode_CDLL->next;
        } while(currentNode_CDLL != (*headRef)->prev);

        currentNode_CDLL->next = newNode_CDLL; 
        newNode_CDLL->prev = currentNode_CDLL;
        newNode_CDLL->next = (*headRef);
        (*headRef)->prev = newNode_CDLL;
    }
}

void insert_Before_Node_CDLL(struct cdll_node **headRef, int newData, int flag) {
    newNode_CDLL = (struct cdll_node*) malloc(sizeof(struct cdll_node));
    newNode_CDLL->data = newData;

    if((*headRef) == NULL) {
        newNode_CDLL->next = newNode_CDLL;
        newNode_CDLL->prev = newNode_CDLL;
        (*headRef) = newNode_CDLL;
    } else {
        currentNode_CDLL = (*headRef);

        do {
            if(currentNode_CDLL->next->data == flag) {
                newNode_CDLL->next = currentNode_CDLL->next;
                newNode_CDLL->prev = currentNode_CDLL;
                currentNode_CDLL->next->prev = newNode_CDLL;
                currentNode_CDLL->next = newNode_CDLL; 

                if(newNode_CDLL->next == (*headRef)) {
                    (*headRef) = newNode_CDLL;
                }

                return;
            }
            currentNode_CDLL = currentNode_CDLL->next;
        } while(currentNode_CDLL != (*headRef));

        printf("\tNode given not found\n");
    }
}

void insert_After_Node_CDLL(struct cdll_node **headRef, int newData, int flag) {
    newNode_CDLL = (struct cdll_node*) malloc(sizeof(struct cdll_node));
    newNode_CDLL->data = newData;
    
    if((*headRef) == NULL) {
        newNode_CDLL->next = newNode_CDLL;
        newNode_CDLL->prev = newNode_CDLL;
        (*headRef) = newNode_CDLL;
    } else {
        currentNode_CDLL = (*headRef);

        do {
            if(currentNode_CDLL->data == flag) {
                newNode_CDLL->next = currentNode_CDLL->next;
                newNode_CDLL->prev = currentNode_CDLL;
                currentNode_CDLL->next->prev = newNode_CDLL;
                currentNode_CDLL->next = newNode_CDLL; 

                return; 
            }
            currentNode_CDLL = currentNode_CDLL->next;

        } while(currentNode_CDLL != (*headRef)); 

        printf("\tNode given not found\n");
    }
}

void delete_Head_CDLL(struct cdll_node **headRef) {
    if((*headRef) == NULL) {
        printf("\tLinked list is already empty.\n");
    } else if((*headRef)->next == (*headRef)) {
        oldNode_CDLL = (*headRef);
        (*headRef) = NULL;
        free(oldNode_CDLL);
    } else {
        oldNode_CDLL = (*headRef);
        newNode_CDLL = (*headRef)->next;

        newNode_CDLL->prev = oldNode_CDLL->prev;
        oldNode_CDLL->prev->next = newNode_CDLL;
        (*headRef) = newNode_CDLL;

        free(oldNode_CDLL);
    }
}

void delete_Tail_CDLL(struct cdll_node **headRef) {
    if((*headRef) == NULL) {
        printf("\tLinked list is already empty.\n");
    } else if((*headRef)->next == (*headRef)) {
        oldNode_CDLL = (*headRef);
        (*headRef) = NULL;
        free(oldNode_CDLL);
    } else {
        oldNode_CDLL = (*headRef);

        while(oldNode_CDLL->next != (*headRef)) {
            oldNode_CDLL = oldNode_CDLL->next;
        }

        newNode_CDLL = oldNode_CDLL->prev;
        newNode_CDLL->next = oldNode_CDLL->next;
        oldNode_CDLL->next->prev = newNode_CDLL;

        free(oldNode_CDLL);
    }
}

void delete_Node_By_Data_CDLL(struct cdll_node **headRef, int flag) {
    if((*headRef) == NULL) {
        printf("\tLinked list is already empty.\n");
    } else if((*headRef)->next == (*headRef)) {
        if((*headRef)->data == flag) {
            oldNode_CDLL = (*headRef);
            (*headRef) = NULL;
            free(oldNode_CDLL);
        } else {
            printf("\tNode given not found\n");
        }
    } else {
        currentNode_CDLL = (*headRef);
        do {
            if(currentNode_CDLL->next->data == flag) {
                oldNode_CDLL = currentNode_CDLL->next;
                currentNode_CDLL->next = oldNode_CDLL->next;
                oldNode_CDLL->next->prev = currentNode_CDLL;

                if(oldNode_CDLL == (*headRef)) {
                    (*headRef) = currentNode_CDLL;
                }

                free(oldNode_CDLL);

                return;
            }
            
            currentNode_CDLL = currentNode_CDLL->next;
        } while(currentNode_CDLL != (*headRef));

        printf("\tNode given not found\n");
    }
}

void delete_Before_Node_CDLL(struct cdll_node **headRef, int flag) {
    if((*headRef) == NULL) {
        printf("\tLinked list is already empty.\n");
    } else if((*headRef)->next == (*headRef)) {
        if((*headRef)->data == flag) {
            oldNode_CDLL = (*headRef);
            (*headRef) = NULL;
            free(oldNode_CDLL);
        } else {
            printf("\tNode given not found\n");
        }
    } else {
        currentNode_CDLL = (*headRef);

        do {
            if(currentNode_CDLL->next->data == flag) {
                oldNode_CDLL = currentNode_CDLL;

                if(currentNode_CDLL == (*headRef)) {
                    (*headRef) = currentNode_CDLL->next;
                }

                oldNode_CDLL->prev->next = currentNode_CDLL->next;
                currentNode_CDLL->next->prev = oldNode_CDLL->prev;

                free(oldNode_CDLL);

                return;
            }

            currentNode_CDLL = currentNode_CDLL->next;
        } while(currentNode_CDLL != (*headRef));

        printf("\tNode given not found\n");
    }
}

void delete_After_Node_CDLL(struct cdll_node **headRef, int flag) {
    if((*headRef) == NULL) {
        printf("\tLinked list is already empty.\n");
    } else if((*headRef)->next == (*headRef)) {
        if((*headRef)->data == flag) {
            oldNode_CDLL = (*headRef);
            (*headRef) = NULL;
            free(oldNode_CDLL);
        } else {
            printf("\tNode given not found\n");
        }
    } else {
        currentNode_CDLL = (*headRef);

        do {
            if(currentNode_CDLL->data == flag) {
                oldNode_CDLL = currentNode_CDLL->next;

                if(currentNode_CDLL->next == (*headRef)) {
                    (*headRef) = currentNode_CDLL;
                }

                currentNode_CDLL->next = oldNode_CDLL->next;
                currentNode_CDLL->prev = oldNode_CDLL->prev;

                free(oldNode_CDLL);
                return;
            }

            currentNode_CDLL = currentNode_CDLL->next;
        } while(currentNode_CDLL != (*headRef));
        
        printf("\tNode given not found\n");
    }
}

void traverse_GHLL_From_Head(struct sll_node *headerRef) {
    if(headerRef->next == NULL) {
        printf("\tList empty.\n");
    } else {
        currentNode_SLL = headerRef->next;
        printf("\t");
        while(currentNode_SLL != NULL) {
            printf("%i ", currentNode_SLL->data);
            currentNode_SLL = currentNode_SLL->next;
        }
        printf("\n");
    }
}

bool search_Node_In_GHLL(struct sll_node *headerRef, int data) {
    currentNode_SLL = headerRef->next;

    while(currentNode_SLL != NULL) {
        if(currentNode_SLL->data == data) {
            return true;
        }
        currentNode_SLL = currentNode_SLL->next;
    }

    return false;
}

int get_Node_Index_In_GHLL(struct sll_node *headerRef, int data) {
   currentNode_SLL = headerRef->next;

    for(int i = 0; i < headerRef->data; i++) {
        if(currentNode_SLL->data == data) {
            return i;
        }
        currentNode_SLL = currentNode_SLL->next;
    }

    return -1;
}

void insert_At_Head_GHLL(struct sll_node **headerRef, int newData) {
    newNode_SLL = (struct sll_node*) malloc(sizeof(struct sll_node));

    newNode_SLL->data = newData;

    if((*headerRef)->data == 0) {
        newNode_SLL->next = NULL;
        (*headerRef)->next = newNode_SLL;
        (*headerRef)->data++;
    } else {
        newNode_SLL->next = (*headerRef)->next;
        (*headerRef)->next = newNode_SLL;
        (*headerRef)->data++;
    }
}

void insert_At_Tail_GHLL(struct sll_node **headerRef, int newData) {
    newNode_SLL = (struct sll_node*) malloc(sizeof(struct sll_node));

    newNode_SLL->data = newData;
    newNode_SLL->next = NULL;

    if((*headerRef)->data == 0) {
        (*headerRef)->next = newNode_SLL;
        (*headerRef)->data++;
    } else {
        currentNode_SLL = (*headerRef)->next;
        while(currentNode_SLL->next != NULL) {
            currentNode_SLL = currentNode_SLL->next;
        }
        currentNode_SLL->next = newNode_SLL;
        (*headerRef)->data++;
    }
}

void insert_At_Position_GHLL(struct sll_node **headerRef, int newData, int pos) {
    newNode_SLL = (struct sll_node*) malloc(sizeof(struct sll_node)); 

    newNode_SLL->data = newData;

    if(pos > (*headerRef)->data) {
        printf("\tGiven index is out of bounds\n");
    } else if((*headerRef)->next == NULL || pos == 0) {
        newNode_SLL->next = (*headerRef)->next;
        (*headerRef)->next = newNode_SLL;
        (*headerRef)->data++;
    } else {
        currentNode_SLL = (*headerRef)->next;

        for(int i = 1; i < pos; i++) {
            currentNode_SLL = currentNode_SLL->next;
        }

        newNode_SLL->next = currentNode_SLL->next;
        currentNode_SLL->next = newNode_SLL;                
        (*headerRef)->data++;
    }
}

void delete_Head_GHLL(struct sll_node **headerRef) {
    if((*headerRef)->next == NULL) {
        printf("\tLinked list is already empty.\n");
    } else if((*headerRef)->next->next == NULL) {
        oldNode_SLL = (*headerRef)->next;
        (*headerRef)->next = NULL;
        
        free(oldNode_SLL);
        (*headerRef)->data--;
    } else {
        oldNode_SLL = (*headerRef)->next;
        (*headerRef)->next = oldNode_SLL->next;

        free(oldNode_SLL);
        (*headerRef)->data--;
    }
}

void delete_Tail_GHLL(struct sll_node **headerRef) {
    if((*headerRef)->next == NULL) {
        printf("\tLinked list is already empty.\n");
    } else if((*headerRef)->next->next == NULL) {
        oldNode_SLL = (*headerRef)->next;
        (*headerRef)->next = NULL;
        
        free(oldNode_SLL);
        (*headerRef)->data--;
    } else {
        currentNode_SLL = (*headerRef)->next;
        while(currentNode_SLL->next->next != NULL) {
            currentNode_SLL = currentNode_SLL->next;
        }

        oldNode_SLL = currentNode_SLL->next;
        currentNode_SLL->next = NULL;

        free(oldNode_SLL);
        (*headerRef)->data--;
    }
}

void delete_At_Position_GHLL(struct sll_node **headerRef, int pos) {
    if((*headerRef)->next == NULL) {
        printf("\tLinked list is already empty.\n");
    } else if(pos >= (*headerRef)->data) {
        printf("\tGiven index is out of bounds\n");
    }  else if(pos > (*headerRef)->data) {
        oldNode_SLL = (*headerRef)->next;
        (*headerRef)->next = NULL;
        
        free(oldNode_SLL);
        (*headerRef)->data--;
    } else if(pos == 0) {
        oldNode_SLL = (*headerRef)->next;
        (*headerRef)->next = oldNode_SLL->next;

        free(oldNode_SLL);
        (*headerRef)->data--;
    } else {
        currentNode_SLL = (*headerRef)->next;
        for(int i = 1; i < pos; i++) {
            currentNode_SLL = currentNode_SLL->next;
        }

        oldNode_SLL = currentNode_SLL->next;
        currentNode_SLL->next = oldNode_SLL->next;
        free(oldNode_SLL);
        (*headerRef)->data--;
    }
}

void traverse_CHLL_From_Head(struct sll_node *headerRef) {
    if(headerRef->next == NULL) {
        printf("\tList empty.\n");
    } else {
        currentNode_SLL = headerRef->next;

        printf("\t");
        do {
            printf("%i ", currentNode_SLL->data);
            currentNode_SLL = currentNode_SLL->next;
        } while(currentNode_SLL != headerRef);

        printf("\n");
    }
}

bool search_Node_In_CHLL(struct sll_node *headerRef, int data) {
    currentNode_SLL = headerRef->next;

    do {
        if(currentNode_SLL->data == data) {
            return true;
        }
        currentNode_SLL = currentNode_SLL->next;
    } while(currentNode_SLL->next != headerRef);

    return false;
}

void insert_At_Head_CHLL(struct sll_node **headerRef, int newData) {
    newNode_SLL = (struct sll_node*) malloc(sizeof(struct sll_node));

    newNode_SLL->data = newData;

    if((*headerRef)->data == 0) {
        newNode_SLL->next = (*headerRef);
        (*headerRef)->next = newNode_SLL;
    } else {
        newNode_SLL->next = (*headerRef)->next;
        (*headerRef)->next = newNode_SLL;
    }
    (*headerRef)->data++;
}

void insert_At_Tail_CHLL(struct sll_node **headerRef, int newData) {
    newNode_SLL = (struct sll_node*) malloc(sizeof(struct sll_node));

    newNode_SLL->data = newData;
    newNode_SLL->next = (*headerRef);

    if((*headerRef)->data == 0) {
        (*headerRef)->next = newNode_SLL;
    } else {
        currentNode_SLL = (*headerRef)->next;

        do{
            currentNode_SLL = currentNode_SLL->next;
        } while(currentNode_SLL->next != (*headerRef));
        
        currentNode_SLL->next = newNode_SLL;
    }
    (*headerRef)->data++;
}

void insert_Before_Node_CHLL(struct sll_node **headerRef, int newData, int flag) {
    newNode_SLL = (struct sll_node*) malloc(sizeof(struct sll_node));
    newNode_SLL->data = newData;

    if((*headerRef)->next == NULL) { 
        newNode_SLL->next = (*headerRef);
        (*headerRef)->next = newNode_SLL;
        (*headerRef)->data++;
    } else {
        currentNode_SLL = (*headerRef)->next;

        do {
            if(currentNode_SLL->next->data == flag) {
                newNode_SLL->next = currentNode_SLL->next;
                currentNode_SLL->next = newNode_SLL;

                if(currentNode_SLL == (*headerRef)->next)
                    (*headerRef)->next = newNode_SLL;

                (*headerRef)->data++;
                return;
            }
            currentNode_SLL = currentNode_SLL->next;
        } while(currentNode_SLL->next != (*headerRef)); 

        printf("\tNode given not found\n");
    }
}

void insert_After_Node_CHLL(struct sll_node **headerRef, int newData, int flag) {
    newNode_SLL = (struct sll_node*) malloc(sizeof(struct sll_node));
    newNode_SLL->data = newData;

    if((*headerRef)->next == NULL) {
        newNode_SLL->next = (*headerRef);
        (*headerRef)->next = newNode_SLL;
        (*headerRef)->data++;
    } else {
        currentNode_SLL = (*headerRef)->next;

        do {
            if(currentNode_SLL->data == flag) {
                newNode_SLL->next = currentNode_SLL->next;
                currentNode_SLL->next = newNode_SLL;

                (*headerRef)->data++;
                return;
            }
            currentNode_SLL = currentNode_SLL->next;
        } while(currentNode_SLL->next != (*headerRef)); 

        printf("\tNode given not found\n");
    }

}
void delete_Head_CHLL(struct sll_node **headerRef) {
    if((*headerRef)->next == NULL) {
        printf("\tLinked list is already empty.\n");
    } else if((*headerRef)->next->next == (*headerRef)) {
        oldNode_SLL = (*headerRef)->next;
        (*headerRef)->next = NULL;
        
        free(oldNode_SLL);
        (*headerRef)->data--;
    } else {
        oldNode_SLL = (*headerRef)->next;
        (*headerRef)->next = oldNode_SLL->next;

        free(oldNode_SLL);
        (*headerRef)->data--;
    }
}

void delete_Tail_CHLL(struct sll_node **headerRef) {
    if((*headerRef)->next == NULL) {
        printf("\tLinked list is already empty.\n");
    } else if((*headerRef)->next->next == (*headerRef)) {
        oldNode_SLL = (*headerRef)->next;
        (*headerRef)->next = NULL;
        
        free(oldNode_SLL);
        (*headerRef)->data--;
    } else {
        currentNode_SLL = (*headerRef)->next;

        do {
            currentNode_SLL = currentNode_SLL->next;
        } while(currentNode_SLL->next->next != (*headerRef));
       

        oldNode_SLL = currentNode_SLL->next;
        currentNode_SLL->next = (*headerRef);

        free(oldNode_SLL);
        (*headerRef)->data--;
    }
}

void delete_Node_By_Data_CHLL(struct sll_node **headerRef, int flag) {
    if((*headerRef)->next == NULL) {
        printf("\tLinked list is already empty.\n");
    } else {
        currentNode_SLL = (*headerRef);

        do {
            if(currentNode_SLL->next->data == flag) {
                oldNode_SLL = currentNode_SLL->next;

                if((*headerRef)->next == currentNode_SLL->next) {
                    (*headerRef)->next = currentNode_SLL->next->next;
                } else {
                    currentNode_SLL->next = currentNode_SLL->next->next;
                }                   

                free(oldNode_SLL);

                (*headerRef)->data--;
                return;
            }
            currentNode_SLL = currentNode_SLL->next;
        } while(currentNode_SLL != (*headerRef)); 

        printf("\tNode given not found\n");
    }
}
