#include<stdio.h>
struct stack
{
    int size;
    int top;
    char *arr;
};
int isEmpty(struct stack*ptr)
{
    if(ptr->top==-1)
    return 1;
    else
    return 0;

}
int isFull(struct stack *ptr)
{
    if(ptr->top == ptr->size-1)
    return 1;
    else
    return 0;
}
void push(struct stack *ptr,char ch)
{
    if (isFull(ptr))
    printf("Stack Full");
    else{
        ptr->top++;
        ptr->arr[ptr->top]=ch;
    }
}
char pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    printf("Stack Empty");
    else{
        char ch=ptr->arr[ptr->top];
        ptr->top--;
        return ch;
    }
}
int paranthesisMAtch(char*top2)
{
    struct stack *sp;
    sp->size=100;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size*(sizeof(char)));
    for (int i=0;top2[i]!='\0';i++)
    {
        if(top2[i]=='(')
        push(sp,'(');
        else if(top2[i]==')')
        {
            if(isEmpty(sp))
            return 0;
        }
        pop(sp);
    }
    if(isEmpty(sp))
    return 1;
    else
    return 0;
}
int main()
{
    char *top2="((8)*s(9))";
    if(paranthesisMAtch(top2))
    printf("Paranthesis matching");
    else
    printf("Not Matching");
    return 0;
}

