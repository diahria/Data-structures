#include <stdio.h>
#include "stack.h"
#define MAX 10
//Abdelrhman_20210503
void    CreateStack(StackType *s)
{
    s->top=-1;
}
int     IsStackEmpty(StackType s)
{
        return s.top == -1;
}
int     IsStackFull(StackType s)
{
        return s.top == MAX-1;
}
void Push(EntryType item,StackType *s)
{
    if(IsStackFull(*s))
        printf("Stack full!\n");
    else
        s->entry[++s->top]=item;
}
EntryType Pop(StackType *s) {
    EntryType item;
    if (IsStackEmpty(*s)) {
        printf("Stack empty!\n");
        return -156156165;
    } else {
        item = s->entry[s->top--];
        return item;
    }
}
int StackSize(StackType s)
{
   if(!IsStackEmpty(s))
     return(s.top)+1;
   else
    return 0;
}
EntryType FirstElement(StackType s)
{
    return s.entry[0];
}
EntryType LastElement(StackType s)
{
    return s.entry[MAX-1];
}
void DestroyStack(StackType *s)
{
    s->top=-1;
}
void CopyStack(StackType s,StackType *t)
{
    int i;
    for(i=0;i<(s.top)+1;i++)
    {
        t->entry[i]=s.entry[i];
        t->top++;
    }
}
int StackStorage(StackType s)
{
    return MAX-1;
}
