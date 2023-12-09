#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#define MAX 10
typedef int Type;
typedef struct{
    int front;
    int rear;
    int size;
    Type enter[MAX];
}QueueType;
void CreateQueue(QueueType *q);
int IsQueueFull(QueueType q);
int IsQueueEmpty(QueueType q);
void Enqueue(Type element,QueueType *q);
Type Dequeue(QueueType *q);
int Qsize(QueueType q);
void Qcopy(QueueType q,QueueType *n);
Type QlastElement(QueueType *q);
Type QfirstElement(QueueType *q);

#endif // QUEUE_H_INCLUDED
