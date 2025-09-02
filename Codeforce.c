
#include <stdio.h>
#include<stdlib.h>
#define size 5

int arr[size];
int top =-1;
void push()
{
    if (top==size-1)
    {
        printf("Overflow\n");
    }
    else 
    {
        top=top+1;
        int val;
        printf("Enter the value you want to push \n");
        scanf("%d",&val);
        arr[top]=val;
    }
}

void pop ()
{
    if (top==-1)
    {
       printf("Underflow \n");
    }
    else
    {
        top=top-1;
    }
    
}

void show()
{   if (top==-1)
{
    printf("Underflow\n");
}
    else{
    for (int  i= top; i >=0; i--)
    {
        printf("%d\n",arr[i]);
    }
}
}
int main() { 
    while(1){
    int choice;
    printf("Enter your choice :");

    printf("Select one option :\n");
    printf("1->Push\n2->Pop\n3->show\n");
    scanf("%d",&choice);


    switch (choice )
    {
    case 1:
        push();
        break;
    case 2:
        pop();
        break;
    case 3:
        show();
        break;
    case 4:
        exit(0);
    default:
       printf("Enter Valid option :\n");
    }
}

    return 0;
}
