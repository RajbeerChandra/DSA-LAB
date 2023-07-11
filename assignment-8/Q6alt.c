#include <stdio.h>
#define n 5
int s1[n],s2[n];
int top1=-1,top2=-1;
//Implementation of queue using stack.
void push1(int b)
{
    top1=top1+1;
    s1[top1]=b;
}
void push2(int b)
{
    top2=top2+1;
    s2[top2]=b;
}

int pop1()
{
    return(s1[top1--]);
}
int pop2()
{
    return(s2[top2--]);
}

void ENqueue(int item)
{
    push1(item);
}
void DEqueue()
{
    //to delete :- reverse ---->delete ----->reverse back.
    while(top1!=-1)
    {
        int elmnt=pop1();
        push2(elmnt);
    }
    top2=top2-1;
    while(top2!=-1)
    {
        int elmnt=pop2();
        push1(elmnt);
    }
}
void show()
{
    for(int i=0;i<=top1;i++)
    {
        printf("%d    ",s1[i]);
    }
}
int main()
{
    ENqueue(5);
    ENqueue(7);
    ENqueue(3);
    DEqueue();
    ENqueue(2);
    show();
    return 0;
}