#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
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

int  isfull(struct stack *s){
        if (s->top == s -> size-1)
        {
            printf("The stack is full");

        }
        else
        {
            printf("The stack is not full");
        }
}

int elementshow(struct stack *s){
    for (int i = 0; i <= s-> top ; i++)
    {
        printf("%d ", s->arr[i]);
    }
    printf("\n");
}

int pushvalue(struct stack *s, int value) {
    if (s->top == s->size - 1) {
        printf("Stack overflow\n");
    } else {
        s->top++;
        s->arr[s->top] = value;
    }
}

int popvalue(struct stack *s){
if(s->top == -1){
    printf("stack underflow");
}
else{
    int value = s->arr[s->top];
    s->top--;
}
}
int peakvalue(struct stack *s, int i){
    if(s-> top-i+1 < 0 )
    {
    printf("not a valid position");
    return -1;
    }
    else{
    return s->arr[s->top-i+1];
}
}
int topstack(struct stack *s){
    return s -> arr[s->top];
}
int bottomstack(struct stack *s){
    return s-> arr[0];
}
int main(){
struct stack *s = (struct stack *)malloc(sizeof(struct stack));
s-> size = 100;
s-> top = -1;
s-> arr = (int*)malloc(s->size * sizeof (int));

//to check the stack is empty or not
isempty(s);
printf("\n");
// to check whether the stack is full or not
isfull(s);
printf("\n");

printf("Elements in the stack is: ");
pushvalue(s,23);
pushvalue(s,43);
pushvalue(s,65);
pushvalue(s,89);
elementshow(s);
popvalue(s);
printf("The remaining elements in the array are: ");
elementshow(s);
// if we take another variable j in for loop then we have to take j in
// peak value calling function so we can excess the function from (s,j)and i works as an index giving function..
for (int i = 1; i <= s->top +1 ; i++)
{
    printf("The value at position %d is %d\n", i, peakvalue(s,i));
}
printf("The top most value of this stack is %d\n", topstack(s));
printf("The bottom most value of this stack is %d", bottomstack(s));
return 0;
}