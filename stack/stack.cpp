#include<iostream>
using namespace std;

#define MAX 1000

class Stack
{
    int top;
    int arr[MAX];

    public :
        Stack()
        {
            top = -1;
        }
        void push(int elem)
        {
            if(top < MAX)
            {
                arr[++top] = elem;
                cout<<"Pushed "<<elem<<" into stack"<<endl;
            }
            else
            {
                cout<<"Stack overflow! push failed!"<<endl;
            }
        }

        int pop()
        {
            if(top > -1)
            {
                int popedElem = arr[top--];
                cout<<"Poped "<<popedElem<<endl;
                return popedElem;
            }
            else
            {
                cout<<"Stack empty! pop failed!"<<endl;
                return 0;
            }
        }

        int peek()
        {
            if(top > -1)
            {
                int topElem = arr[top];
                cout<<"Top elem is "<<topElem<<endl;
                return topElem;
            }
            else
            {
                cout<<"Stack empty!"<<endl;
                return 0;
            }
            
        }

        void display()
        {
            cout<<"Displaying stack : [ ";

            for(int i = 0; i <= top; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<"]"<<endl;
        }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.pop();
    s.display();
    s.peek();
    s.display();
    return 0;
}