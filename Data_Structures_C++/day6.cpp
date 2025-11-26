#include <iostream>
using namespace std;


class Stack{
    public:
    int top;
    int cap;
    int *arr;

    Stack(int size){
        arr=new int[size];
        cap=size;
        top=0;
    }

    void push(int val){
        if(top==cap){
            cout<<"Stack is Full"<<endl;
            return;
        }
        arr[top]=val;
        top++;
    }

    int pop(){
        if(top==0){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        int x=arr[top];
        top--;
        return x;
    }

    void displayStack(){
        for (int i = 0; i < top; i++)
        {
            cout<<arr[i]<<" "<<endl;
        }
        
    }
    bool isEmpty(){
        if(top==0){
            return true;
        }else{
            return false;
        }
    }
};

int main()
{
    
    Stack *s1=new Stack(5);

    s1->push(45);
    s1->push(47);
    s1->push(89);
    s1->push(23);
    s1->push(90);
    s1->pop();
    s1->pop();
    s1->pop();
    s1->pop();
    s1->displayStack();
    // s1->displayStack();
    if(s1->isEmpty()){
        cout<<"Stack is Empty Khali hai"<<endl;
    }else{
        cout<<"Stack is not Empty not Khali hai"<<endl;
    }
    return 0;
}