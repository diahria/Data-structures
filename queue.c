#include <stdio.h>
#include "queue.h"
#define MAX 10
void CreateQueue(QueueType *q){
q->front=0;
q->rear=MAX-1;
q->size=0;
}
int IsQueueEmpty(QueueType q){
return (q.size==0);
}
int IsQueueFull(QueueType q){
return (q.size==MAX);
}
void Enqueue(Type element,QueueType *q){
if(IsQueueFull(*q)){
    printf("queue is full\n");
}
else{
    q->enter[(++q->rear)%MAX]=element;
    q->size++;
}
}
Type Dequeue(QueueType *q){
    Type element;
if(IsQueueEmpty(*q)){
    printf("queue is empty");
    return -118681523;
}
else {
    element= q->enter[(q->front++)%MAX];
    q->size--;
    return element;
}
}
int Qsize(QueueType q){
return q.size;
}
void Qcopy(QueueType q,QueueType *n){
for(int i=0;i<(q.size);i++){
    n->enter[i]=q.enter[i];
}
    n->rear=q.rear;
    n->front=q.front;
    n->size=q.size;
}
Type QlastElement(QueueType *q){
return q->enter[q->rear];
}
Type QfirstElement(QueueType *q){
return q->enter[q->front];
}
void Qdestroy(QueueType *q){
q->front=0;
q->rear=MAX-1;
q->size=0;
}
