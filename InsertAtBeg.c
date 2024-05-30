
//Insert element at begining
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
int main()
{
      struct node *ptr,*head;  
      int item;  
      ptr = (struct node *) malloc(sizeof(struct node *));  
      if(ptr == NULL)  
      {  
          printf("\nOVERFLOW");  
      }  
      else  
      {  
          printf("\nEnter value\n");    
          scanf("%d",&item);    
          ptr->data = item;  
          ptr->next = head;  
          head = ptr;  
      }
       printf("\nNode inserted\n");
        printf("Inserted element is :%d ",ptr->data);
       /*for(ptr=head;ptr->next!=NULL;ptr->next)
       {
           printf("%d ",ptr->data);/*
       }*/
  return 0;
}
