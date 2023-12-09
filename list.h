#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
typedef int Entry;
typedef struct nodet{
Entry info;
struct nodet *next;
}Node;
typedef struct list{
Node *head;
int ListSize;
}listType;
void  createList(listType *L);
int  isListEmpty(listType L);
int  isListFull(listType L);
void  insertList(listType *L,Entry element,int pos);
Entry  retrieveList(listType *L,int pos);
void  clearList(listType *L);
void  joinList(listType *L,listType *n);

#endif // LIST_H_INCLUDED
