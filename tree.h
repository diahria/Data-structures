#ifndef MAIN_C_TREE_H
#define MAIN_C_TREE_H
typedef int EntryType;
typedef struct node {
    EntryType info;
    struct node *right;
    struct node *left;
}NodeType;
typedef NodeType *TreeType;
void CreateTree(TreeType *t);
int isEmptyTree(TreeType t);
int isFullTree(TreeType t);
void Inorder(TreeType t,void(*pvisit)(EntryType*));
void Preorder(TreeType t,void(*pvisit)(EntryType*));
void Postorder(TreeType t,void(*pvisit)(EntryType*));
int size(TreeType t);
int height (TreeType t);
void ClearTree(TreeType *t);
void Insert(TreeType *t,EntryType item);
void DeleteNode(TreeType *pt);
int Delete(TreeType *t,EntryType k);
#endif //MAIN_C_TREE_H
