#include<stdio.h>
int main()
{
    int a[100], size, i,l, s;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array:", size);
    for(i = 0; i < size; i++)
    scanf("%d", &a[i]);
    l = a[0]; 
    for(i = 1; i < size; i++)
    {
        if(l < a[i])
        l = a[i]; 
        
    }
    printf("The largest element is: %d\n", l);
    s = a[0]; 
    for(i = 1; i < size; i++)
    {
        if(s>a[i])   
        s = a[i];   
    }
    printf("The smallest element is: %d", s);
    return 0;
}