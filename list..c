#include "list.h"
#include <stdlib.h>
#include <stdio.h>

void createList(listType *L){
L->ListSize=0;
L->head=NULL;
}
int isListEmpty(listType L){
return (L.head==NULL);
}
int isListFull(listType L){
return 0;
}
void  insertList(listType *L,Entry element,int pos){
if(isListFull(*L)){
    printf("Error : the list is full. \n");
}
else {
    if(pos>=0 && pos<=L->ListSize){
        Node *p = (Node*)malloc(sizeof(Node));
        p->info = element;
        if(pos == 0)
        {
        p->next = L->head;
        L->head = p;
        }
        else
        {
            Node *q;
            int i;
            for(q=L->head,i=0;i<pos-1;i++)
                q = q->next;
            p->next = q->next;
            q->next = p;
    }
    L->ListSize++;
}
}
}
Entry retrieveList(listType *L,int pos){
if(isListEmpty(*L))
    printf("Error : the List is empty.\n");
    else
    {
    if(pos>=0 && pos<L->ListSize){
    int i;
    Entry element;
    Node *q, *tmp;
    if(pos == 0)
    {
        element = L->head->info;
        tmp = L->head;
        L->head=L->head->next;
        free(tmp);
    }
    else
    {
    for(q=L->head,i=0;i<pos-1;i++)
    q=q->next;

    element = q->next->info;
    tmp = q->next;
    q->next = tmp->next;
    free(tmp);
    }
    L->ListSize--;
    return element;
    }
    }
}
void clearList(listType *L){
Node *q;
while(L->head){
    q = L->head;
    L->head = L->head->next;
    free(q);
}
}
void joinList(listType *L,listType *n){
    int s=L->ListSize;
    for(int i=0;i<s;i++){
        insertList(n,L->head->info,n->ListSize);
        L->head=L->head->next;
        L->ListSize++;
    }
    }
