// #include <stdio.h>
// int main()
// {
//    int a[100], position, c, n;
//    printf("Enter number of elements in array\n");
//    scanf("%d", &n);
//    printf("Enter %d elements\n", n);
//    for (c = 0; c < n; c++)
//       scanf("%d", &a[c]);
//    printf("Enter the location where you wish to delete element\n");
//    scanf("%d", &position);
//    if (position >= n+1)
//       printf("Deletion not possible.\n");
//    else
//    {
//       for (c = position - 1; c < n - 1; c++)
//          a[c] = a[c+1];
//       printf("Resultant array:\n");
//       for (c = 0; c < n - 1; c++)
//          printf("%d\n", a[c]);
//    }
//    return 0;
// }
#include <stdio.h>
int main()
{
  int a[6]={ 1,2,3,4,5,6};
  int i , ind= -1, el ;
  printf("enter the element to delete");
  scanf("%d",&el);
  for(i=0;i<6;i++){
      if(a[i]==el)
      {
          ind=i;
          break;
     }
   }
  
      for(i=ind;i<6-1;i++)
      a[i]=a[i+1];
      printf("new array : \n");
      for(i=0;i<6-1;i++)
      printf("%d", a[i]);
  
    return 0;
}