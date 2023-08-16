#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<alloc.h>
int x,choice, res=0;
struct node
{
    int info;
    struct node *Rptr, *Lptr;
};

struct node *First ,*New ,*Save, *pred;
void pre(struct node *Save)
{
    printf("%d",save->info);
    if(Save==NULL)return;
    if(Save->Lptr!=NULL)pre(Save->Lptr);
    if(Save->Rptr!=NULL)pre(Save->Rptr);
}

void in(struct node *Save)
{
    if(Save==NULL)return;
    if(Save->Lptr!=NULL)in(Save->Lptr);
    printf("%d",Save->info);
    if(Save->Rptr!=NULL)in(Save->Rptr);
}
void post(struct node *Save)
{
    if(Save==NULL)return;
    if(Save->Lptr!=NULL)post(Save->Lptr);
    if(Save->Rptr!=NULL)post(Save->Rptr);
    printf("%d",Save->info);
}
void lc(struct node *Save, struct node *New,int x)
{
    if(Save==NULL)return;
    if(Save->Lptr!=NULL)lc(Save->Lptr,new,x);
    else{
        (Save->info==x)
        {
            Save->Lptr=New;
            printf("\n......node is left child of %d.....",Save->info);
            return;
        }
        else
        printf("\n.....root not found.....");
    }
    if(Save->Rptr!=NULL)lc(Save->Rptr,New,x);
}