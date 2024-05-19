#ifndef CUSTOM_LINKED_LIST_QUEUE_HEADER
#define CUSTOM_LINKED_LIST_QUEUE_HEADER

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

typedef struct {
    struct node *headNode, *tailNode;
    int length;
} QueueLL;

QueueLL *new_QLL();

// simple 
int head_QLL(QueueLL *queuell);
int rear_QLL(QueueLL *queuell);

bool is_QLL_Empty(QueueLL *queuell);

void print_QLL(QueueLL *queuell);

void enqueue_QLL(QueueLL *queuell, int data);
int dequeue_QLL(QueueLL *queuell);

// double ended input restricted
void enqueue_QLL_DE_IR(QueueLL *queuell, int data);
int dequeue_QLL_DE_IR(QueueLL *queuell, bool atHead);

// double ended output restricted
void enqueue_QLL_DE_OR(QueueLL *queuell, int data, bool atHead);
int dequeue_QLL_DE_OR(QueueLL *queuell);

// circular
void enqueue_QLL_Circular(QueueLL *queuell, int data);
int dequeue_QLL_Circular(QueueLL *queuell);

// priority queue
struct PriorityNode {
    int data;
    int priority;
    struct PriorityNode *next;
    struct PriorityNode *prev;
};

typedef struct {
    struct PriorityNode *headNode, *tailNode;
    int length;
} Priority_QueueLL;

Priority_QueueLL *new_Priority_QLL();

int head_Priority_QLL(Priority_QueueLL *priorityQueueLL);
int rear_Priority_QLL(Priority_QueueLL *priorityQueueLL);

bool is_Priority_QLL_Empty(Priority_QueueLL *priorityQueueLL);

void print_Priority_QLL(Priority_QueueLL *priorityQueueLL);

void enqueue_Priority_Ascending_QLL(Priority_QueueLL *priorityQueueLL, int data, int priorityLevel);
void enqueue_Priority_Descending_QLL(Priority_QueueLL *priorityQueueLL, int data, int priorityLevel);

int dequeue_Priority_QLL(Priority_QueueLL *priorityQueueLL);



#endif
