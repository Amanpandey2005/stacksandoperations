#include<iostream>
using namespace std;
class stack{
    public:
    int top ;
    int *arr;
    int size;
    // Constructors 
    stack(int size){
        this -> size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack Overflow" << endl;
        }
    }

    void pop(){
        if(top >= 0){
            top --;
        }
        else{
            cout << "Stack Underflow"<< endl;
        }
    }

    int isempty(){
        if(top == -1){
            cout << "stack is empty"<< endl;
        }
        else{
            cout << "Stack is not empty"<< endl;
        }
    }

    int isfull(){
        if(top == size-1){
            cout << "Stack is Full" << endl;
        }
        else{
            cout << "Stack is not full" << endl;
        }
    }

    int peek(){
        if(top >= 0 && top <= size -1){
            return arr[top];
        }
        else{
            return -1;
        }
    }
};

int main(){
    stack str(5);
    str.push(23);
    str.push(89);
    str.push(23);
    str.push(89);

    str.isempty();
    str.isfull();

    cout << "Top element is: " << str.peek() << endl;

    str.pop();
    cout << "Top element after pop is: " << str.peek() << endl;

    return 0;
}