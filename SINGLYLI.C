#include<stdio.h>
#include<stdlib.h>
struct node
{
     int data;
     struct node *link;

}*start;//end of the struct

void list(int r);
void display();
void deletef();
void sort();
void main()
//void deletel
{
    int choice,r;
    clrscr();
    while(1)
    {
       printf("\nplease enter the choice..\n");
       printf("\n1.for create the list");
       printf("\n2.for display the list");
       printf("\n3.for insert element at last");
       printf("\n4.for the delete element first");
       printf("\n5.for the sort element ..");
       printf("\n6.for exit\n");
       scanf("%d",&choice);
       switch(choice)
       {
	  case 1:
	  {
	     printf("enter the data..");
	     scanf("%d",&r);
	     list(r);
	     break;
	  }
	  case 2:
	  {
		 display();
		  break;
	  }
	  case 3:
	  {
	     printf("enter the data for insert et last...");
	     scanf("%d",&r);
	     list(r);
	     break;

	  }
	  case 4:
	  {
	     deletef();
	     break;
	  }
	  case 5:
	  {
	   sort();
	   break;

	  }
	  case 6:
	  {
	  exit(0);
	  break;
	  }
	  default:
	  {
	  printf("\nenter the valid choice...\n ");
	  break;
	  }

	}//end of the choice

    }//end of the while
       //	display();getch();
}//end of the main
getch();
void list(int r)
{
    struct node *p,*n;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=r;
    p->link=NULL;
    if(start==NULL)
    start=p;
    else
    {
      n=start;
      while(n->link!=NULL)
      n=n->link;

      n->link=p;

    }//end of the else

}//end of the list
void display()
{
   struct node *s;
   if(start==NULL)
   printf("...list is empty...\n");
   else
   {
   printf("\nlist is\n");
   s=start;
   while(s!=NULL)
   {
     printf("%d\n",s->data);
     s=s->link;
   }

   }//end of else


}//end of the display
void deletef()
{
 struct node *temp;
   if(start==NULL)
       printf("\nlist is the empty\n");
     else
   {
     temp=start;//100
     start=start->link;//200
     free(temp);//100

   }


}
void sort()
{

   struct node *p,*s;
   int t;
   p=start;
   while(p!=NULL)
   {
   s=p->link;
   while(s!=NULL)
   {
      if(p->data>s->data)
      {
      t=p->data;
      p->data=s->data;
      s->data=t;
      }
      s=s->link;
      }
      p=p->link;
       }

   p=start;
   while(p!=NULL)
   {
   printf("\n%d",p->data);
   p=p->link;
    }


} //emd f