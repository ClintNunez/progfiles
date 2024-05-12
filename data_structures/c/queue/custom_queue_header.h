#ifndef CUSTOM_QUEUE_HEADER
#define CUSTOM_QUEUE_HEADER

typedef struct {
    int *head, *rear, length, maxLength;
} Array_Queue;

Array_Queue *new_Array_Queue(int length);

bool is_Array_Queue_Empty(Array_Queue *arrayQueue);
bool is_Array_Queue_Full(Array_Queue *arrayQueue);

int array_Queue_Size(Array_Queue *arrayQueue);

int peek_Array_Queue(Array_Queue *arrayQueue);
int rear_Array_Queue(Array_Queue *arrayQueue);

void enqueue_Array_Queue(Array_Queue *arrayQueue, int data);
int dequeue_Array_Queue(Array_Queue *arrayQueue);

void print_Array_Queue(Array_Queue *arrayQueue);

#endif
