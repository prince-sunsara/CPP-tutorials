#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<alloc.h>
int x,choice;
struct node
 { int Info;
   struct node *Link;
 };
struct node *First,*New,*Save,*Pred;
void insert()
  {  New=(struct node*) malloc(sizeof(struct node));
     printf("\n1.at begining \n2.at end \n3.after given node \n4.before given node\n Enter choice :");
     scanf("%d",&choice);
     printf("enter the value of x >>");
     scanf("%d",&x);
     New->Info=x;
     New->Link=NULL;
     switch(choice)
      {  case 1:if(First==NULL)
		  First=New;
		else
		 { New->Link=First;
		   First=New; }break;
	 case 2:if(First==NULL)
		  First=New;
	       else
		 { while(Save->Link!=NULL)
		   Save=Save->Link;
		   Save->Link=New;}break;
	  case 3:  printf("\nenter node value after which you want to insert");
		   scanf("%d",&x);
		   if(First->Info==x)
		    { New->Link=First->Link; First->Link=New;return;}
		   while(Save!=NULL)
		    { if(Save->Info==x)
		      { New->Link=Save->Link; Save->Link=New;return;}
		       Save=Save->Link;
		    }
		   printf("\n..........Node Not Found..........");break;
	   case 4:  printf("\nenter node value before which you want to insert");
		   scanf("%d",&x);
		   if(First->Info==x)
		    { New->Link=First;First=New;return;}
		   while(Save->Link!=NULL)
		    { if(Save->Link->Info==x)
		      { New->Link=Save->Link; Save->Link=New;return;}
		       Save=Save->Link;
		    }
		   printf("\n..........Node Not Found..........");
	 }
}
void del()
{
       printf("\nenter node value which you want to delete");
       scanf("%d",&x);
       while(Save!=NULL)
	  {   if(Save->Info==x)
		{Pred->Link=Save->Link;free(Save);return;}
	      Pred=Save; Save=Save->Link;}
	printf("\n...........Node Not Found.............. ");
  }
void print()
{
for(Save=First;Save!=NULL;Save=Save->Link)
  printf("\n %d",Save->Info);
}
void modify()
{
       printf("\nenter node value which you want to Modify");
       scanf("%d",&x);
       printf("\n enter New value ");
       int x1;scanf("%d",&x1);
       while(Save!=NULL)
	 {
	   if(Save->Info==x)
	     {Save->Info=x1;return;}
	   Save=Save->Link;
	 }
	  printf("\n..............Node Not Found...............");
}
void search()
 {   int counter=0;
     printf("\nenter the value of x  To Search>>");
     scanf("%d",&x);
    while(Save!=NULL)
	 { counter++;
	   if(Save->Info==x)
	     {printf("\nNode Found At Position %d",counter);return;}
	   Save=Save->Link;
	 }
     printf("\n..............Node Not Found...............");
 }
void main()
 { clrscr();First=NULL;
  while(1)
   {printf("\n\n1.Insert \n2.Delete \n3.Print  \n4.Modify  \n5.Search  \n6.Exit\nEnter Choice:");
    scanf("%d",&choice);Save=First;
    switch(choice)
      {    case 1:insert();break;
	   case 2:del(); break;
	   case 3:print();break;
	   case 4:modify();break;
	   case 5:search();break;
	   case 6:exit(-1);
	   default:printf("Invalid Entry.................");
      }
    }
  }