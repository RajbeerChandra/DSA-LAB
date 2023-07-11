// #include <stdio.h>
// int max(int m, int n) { return (m > n) ? m : n; }
// int *add(int A[], int B[], int m, int n)
// {
// 	int size = max(m, n);
// 	int *sum[size];
// 	for (int i = 0; i < m; i++)
// 		sum[i] = A[i];
// 	for (int i = 0; i < n; i++)
// 		sum[i] += B[i];
// 	return sum;
// }
// void printPoly(int poly[], int n)
// {
// 	for (int i = 0; i < n; i++)
// 	{
// 		printf("%d", poly[i]);
// 		if (i != 0)
// 			printf("x^", i);
// 		if (i != n - 1)
// 			printf(" + ");
// 	}
// }
// int main()
// {
// 	int A[] = {5, 0, 10, 6};
// 	int B[] = {1, 2, 4};
// 	int m = sizeof(A) / sizeof(A[0]);
// 	int n = sizeof(B) / sizeof(B[0]);
// 	printf("First polynomial is \n");
// 	printPoly(A, m);
// 	printf("\nSecond polynomial is \n");
// 	printPoly(B, n);
// 	int *sum = add(A, B, m, n);
// 	int size = max(m, n);
// 	printf("\nsum polynomial is \n");
// 	printPoly(sum, size);
// 	return 0;
// }
#include<stdio.h>
#include<malloc.h>
struct node
{
 int coeff;
 int power;
 struct node *next;
};

struct node *start1=NULL;
struct node *start2=NULL;
struct node *start3=NULL;

struct node *create_poly(struct node *start)
{

  struct node *new_node,*ptr;
  int c,p;
  printf("\n Enter the coefficient:");
  scanf("%d",&c);
  printf("\n Enter the power:");
  scanf("%d",&p);

while(p !=-1)
{
new_node=(struct node *)malloc(sizeof(struct node));
    new_node->coeff=c;
    new_node->power=p;
    new_node->next=NULL;

  if(start==NULL)
  {
    
start=new_node;
ptr=start;
  }

else
  {
     
ptr->next=new_node;
ptr=new_node;
  }

  printf("\n Enter the coefficient:");
  scanf("%d",&c);
  printf("\n Enter the power:");
  scanf("%d",&p);
}
return start;
}

struct node *display_poly(struct node *start)
{
  struct node *ptr;
  ptr=start;

  while(ptr != NULL)
  {

    printf("\n %d x %d \t",ptr->coeff,ptr->power);
    ptr=ptr->next;
  }
  return start;
}

struct node *add_poly(struct node *start1,struct node *start2,struct node *start3)
{
 
 struct node *ptr1,*ptr2;
 int sum;

ptr1=start1;
ptr2=start2;

while(ptr1 != NULL && ptr2 != NULL)
{
 
  if(ptr1->power == ptr2->power)
  {
    sum=ptr1->coeff + ptr2->coeff;
    start3=add_node(start3, sum, ptr1->power);
    ptr1=ptr1->next;
    ptr2=ptr2->next;
  }

else if(ptr1->power > ptr2->power)
{
 
  start3=add_node(start3, ptr1->coeff, ptr1->power);
  ptr1=ptr1->next;

}
else if(ptr1->power < ptr2->power)
{
 
  start3=add_node(start3, ptr2->coeff, ptr2->power);
  ptr2=ptr2->next;

}
}

if(ptr1==NULL)
{
  while(ptr2 != NULL)
 {
  start3=add_node(start3, ptr2->coeff, ptr2->power);
  ptr2=ptr2->next;
 }
}

if(ptr2==NULL)
{
  while(ptr1 != NULL)
 {
  start3=add_node(start3, ptr1->coeff, ptr1->power);
  ptr1=ptr1->next;
 }
}

return start3;
}
int main()
{

 printf("\n Enter the first polynomial");
 start1=create_poly(start1);
 printf("\n Display the first polynomial");
 start1=display_poly(start1);

 printf("\n Enter the second polynomial");
 start2=create_poly(start2);
 printf("\n Display the second polynomial");
 start2=display_poly(start2);

 printf("\n Add the two polynomials");
 start3=add_poly(start1,start2,start3);

 printf("\n Display the result");
 start3=display_poly(start3);

 return 0;
}