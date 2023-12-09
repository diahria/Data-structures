#include "tree.h"
#include <stdlib.h>
#include <stdio.h>
void CreateTree(TreeType *t){
    *t = NULL;
}
int isEmptyTree(TreeType t){
    return (!t);
}
int isFullTree(TreeType t){
    return 0;
}
void Inorder(TreeType t,void(*pvisit)(EntryType*)){
    if(t){
        Inorder(t->left,pvisit);
        (*pvisit)(&(t->info));
        Inorder(t->right,pvisit);
    }
}
void Preorder(TreeType t,void(*pvisit)(EntryType*)){
    if(t){
        (*pvisit)(&(t->info));
        Preorder(t->left,pvisit);
        Preorder(t->right,pvisit);
    }
}
void Postorder(TreeType t,void(*pvisit)(EntryType*)){
    if(t){
        Postorder(t->left,pvisit);
        Postorder(t->right,pvisit);
        (*pvisit)(&(t->info));
    }
}
int size(TreeType t){
    if(!t)
        return 0;
    return(1+size(t->left)+
            size(t->right));
}
int height (TreeType t){
    if(!t)
        return 0;
    int a=height(t->left);
    int b= height(t->right);
    return (a>b) ? 1+a : 1+b;
}
void ClearTree(TreeType *t){
    if(*t){
        ClearTree(&(*t)->left);
        ClearTree(&(*t)->right);
        free(*t);
        *t = NULL;
    }
}
void Insert(TreeType *t,EntryType item) {
    NodeType *p = (NodeType *)
    malloc(sizeof(NodeType));
    p->info = item;
    p->left = NULL;
    p->right = NULL;
    if (!(*t))
        *t = p;
    else {
        NodeType *pre, *cur;
        cur = *t;
        while (cur) {
            pre = cur;
            if (item < cur->info)
                cur = cur->left;
            else
                cur = cur->right;
            if (item < pre->info)
                pre->left = p;
            else
                pre->right=p;
        }
    }
}
void DeleteNode(TreeType *pt){
    NodeType *q=*pt;
    if(!(q)->left)
        *pt=(q)->right;
    else
        if(!(q)->right)
            *pt=(q)->left;
        else{
            q = (q)->left;
            NodeType  *r=NULL;
            while(q->right){
                r=q;
                q=q->right;
            }
            (*pt)->info=q->info;
            if(r)
                r->right=q->left;
            else
                (*pt)->left=q->left;
        }
        free(q);
}
int Delete(TreeType *t,EntryType k){
    int found = 0;
    NodeType *q = *t;
    NodeType  *r = NULL;
    while(q && !(found=(k==q->info))){
        r=q;
        if(k<q->info)
            q=q->left;
        else
            q=q->right;
        if(found){
            if(!r)
                DeleteNode(t);
            else if((k<r->info))
                DeleteNode(&r->left);
            else
                DeleteNode(&r->right);
        }
        return found;
    }
}
int Search(TreeType t,EntryType key){
    if(t==NULL)
        return 0;
    else if(key==t->info)
        return 1;
    else if(key<t->info)
        Search(t->left,key);
    else
        Search(t->right,key);

}