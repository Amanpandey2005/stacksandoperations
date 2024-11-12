#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};
    class Stack{
        public:
        Node* top;

    public:
    Stack(){
        top = NULL;
        }
    
    void push(int element){
            Node *newnode = new Node(element);
             newnode -> next = top;
             top = newnode;
                if(!newnode){
                    cout << "Stack Oveeflow, Memory is not dynamically Allocated" << endl;
                }
    }
    void pop(){
        if(top != NULL){
            Node* temp = top;
            top = top -> next;
            delete temp;
        }
        else{
            cout << "Stack Underflow , Stack is empty" << endl;
        }
    }
    void isempty(){
        if(top == NULL){
            cout << "Stack is empty" <<endl;
        }
        else{
            cout << "Stack is not empty"<< endl;
        }
    }
    void isfull(){
        Node* temp = new(nothrow) Node(0); // Tempoary node It does not returns error if it fails..
        if(temp == NULL){
            cout << "Allocation Failed"<< endl;
        }
        else{
            cout << "Allocation was Successful"<< endl;
            delete temp;
        }
    }
    int peek(){
        if(top == NULL){
            return -1;
        }
        else{
            return top -> data;
        }
    }
    
};

int main(){
    Stack stack;
    stack.push(56);
    stack.push(90);
    cout << "Top element is "<< stack.peek() << endl;
    stack.pop();
    cout << "Top element after popping is "<< stack.peek() << endl;
    return 0;
}