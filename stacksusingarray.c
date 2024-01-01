#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int *arr;
    int top;
};

int isempty(struct stack *s){
        if (s->top == -1)
        {
            printf("The stack is empty");
        }
        else
        {
            printf("The stack is not empty");
        }
}

int isfull(struct stack *s){
        if (s->top == s -> size-1)
        {
            printf("The stack is full");

        }
        else
        {
            printf("The stack is not full");
        }
}

int elementshow(struct stack*s, int size){
    int i;
    for (int i = 0; i <= s-> top ; i++)
    {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}

int main(){
struct stack *s;
s-> size = 100;
s-> top = -1;
s-> arr = (int*)malloc(s->size * sizeof (int));

// pushing an element in the array
s-> arr[0]= 2;
s-> top++;
s-> arr[1]= 3;
s-> top++;
s-> arr[2]= 4;
s-> top++;
s-> arr[3]= 5;
s-> top++;
//to check the stack is empty or not
isempty(s);

printf("\n");

// to check whether the stack is full or not
isfull(s);
printf("\n");

printf("Elements in the stack is: ");
elementshow(s, 100);
return 0;
}