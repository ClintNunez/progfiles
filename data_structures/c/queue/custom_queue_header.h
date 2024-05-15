#ifndef CUSTOM_QUEUE_HEADER
#define CUSTOM_QUEUE_HEADER

typedef struct {
    int *headPointer, *tailPointer, length, maxLength;
} Array_Queue;

Array_Queue *new_Array_Queue(int length);

bool is_Array_Queue_Empty(Array_Queue *arrayQueue);
bool is_Array_Queue_Full(Array_Queue *arrayQueue);

int peek_Array_Queue(Array_Queue *arrayQueue);
int rear_Array_Queue(Array_Queue *arrayQueue);

void print_Array_Queue(Array_Queue *arrayQueue);

void enqueue_Array_Simple_Queue(Array_Queue *arrayQueue, int data);
int dequeue_Array_Simple_Queue(Array_Queue *arrayQueue);

// DOUBLE ENDED QUEUES
// input restricted
void enqueue_Array_DE_IR_Queue(Array_Queue *arrayQueue, int data);
int dequeue_Array_DE_IR_Queue(Array_Queue *arrayQueue, bool atHead);

// output restricted
void enqueue_Array_DE_OR_Queue(Array_Queue *arrayQueue, int data, bool atHead);
int dequeue_Array_DE_OR_Queue(Array_Queue *arrayQueue);

typedef struct {
    int *headPointer, *tailPointer, *firstIndex, *lastIndex, length, maxLength;
} Circular_Array_Queue;

Circular_Array_Queue *new_Circular_Array_Queue(int length);

bool is_Circular_Array_Queue_Empty(Circular_Array_Queue *circularArrayQueue);
bool is_Circular_Array_Queue_Full(Circular_Array_Queue *circularArrayQueue);

int peek_Circular_Array_Queue(Circular_Array_Queue *circularArrayQueue);
int rear_Circular_Array_Queue(Circular_Array_Queue *circularArrayQueue);

void print_Circular_Array_Queue(Circular_Array_Queue *circularArrayQueue);

void enqueue_Circular_Array_Queue(Circular_Array_Queue *circularArrayQueue, int data);
int dequeue_Circular_Array_Queue(Circular_Array_Queue *circularArrayQueue);

typedef struct {
    int data, priorityLvl;
} PriorityElement;

typedef struct {
    PriorityElement *headPointer, *tailPointer;
    int length, maxLength;
} Priority_Array_Queue;

Priority_Array_Queue *new_Priority_Array_Queue(int length);

bool is_Priority_Array_Queue_Empty(Priority_Array_Queue *priorityArrayQueue);
bool is_Priority_Array_Queue_Full(Priority_Array_Queue *priorityArrayQueue);

int peek_Priority_Array_Queue(Priority_Array_Queue *priorityArrayQueue);
int rear_Priority_Array_Queue(Priority_Array_Queue *priorityArrayQueue);

void print_Priority_Array_Queue(Priority_Array_Queue *priorityArrayQueue);

void enqueue_Priority_Ascending_Array_Queue(Priority_Array_Queue *priorityArrayQueue, int data, int priorityLvl);
PriorityElement *dequeue_Priority_Ascending_Array_Queue(Priority_Array_Queue *priorityArrayQueue);

#endif
