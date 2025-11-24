#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *lchild,*rchild;
};
struct node *insert(struct node *root,int data)
{
struct node *t1,*t2,*t;
t1=root;
t2=(struct node *)0;
while(t1!=(struct node *)0 && t1->data!=data)
{
t2=t1;
if(data<t1->data)
t1=t1->lchild;
else
t1=t1->rchild;
}
if(t1!=(struct node *)0)
printf("Duplicate!!");
else
{
t=(struct node *)malloc (sizeof(struct node));
t->data=data;
t->lchild->rchild=(struct node *)0;
if(root==(struct node *)0)
root=t;
else
{
if(data<t2->data)
t2->lchild=t;
else
t2->rchild=t;
}
printf("%d is inserted",data);
}
return root;
}
void inorder(struct node *root)
{
if(root! =(struct node *)0)
{
inorder(root->lchild);
printf("%d\t",root->data);
inorder(root->child);
}
}
struct node *search(struct node *root,int item)
{
struct node *t=root;
while(t!=(struct node *)0 && t->data!=item)
if(item<t->data)
t=t->lchild;
else
t=t->rchild;
return t;
}
struct node *delete(struct node *root,int item)
{
struct node *t1,*t,*par,*sucpar,*suc;
t=root;
par=(struct node *)0;
while(t!=(struct node *)0 && t->data!=item))
{
par=t;
if(item<t->data)
t=t->lchild;
else t=t->rchild;
}
if(t==(struct node *)0)

t=t->lchild;
else t=t
