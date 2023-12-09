#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define MAX 10
//Abdelrhman_20210503
typedef int EntryType;
typedef struct
{
    int top;
    EntryType entry[MAX];
}StackType;
void    CreateStack(StackType *s);
int     IsStackEmpty(StackType s);
int     IsStackFull(StackType s);
void    Push(EntryType item,StackType *s);
EntryType    Pop(StackType *s);
int StackSize(StackType s);
EntryType FirstElement(StackType s);
EntryType LastElement(StackType s);
void DestroyStack(StackType *s);
void CopyStack(StackType s,StackType *t);
#endif // STACK_H_INCLUDED
