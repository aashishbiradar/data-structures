#include<iostream>
using namespace std;

class Queue
{
    int front,rear,size,capacity;
    int *arr;

    public:
        Queue(unsigned capacity)
        {
            this->capacity = capacity;
            this->arr = new int[(capacity * sizeof(int))];
            this->front = this->rear = -1;
            this->size = 0;
        }
        bool isFull()
        {
            return (this->size == this->capacity);
        }
        bool isEmpty()
        {
            return (this->size == 0);
        }
        void enqueue(int elem)
        {
            if(this->isFull())
            {
                cout<<"Queue full! enqueue failed for elem "<<elem<<endl;
            }
            else
            {
                this->arr[++this->rear] = elem;
                ++this->size;
                cout<<elem<<" enqueued "<<endl;
            }
        }
        void display()
        {
            cout<<"Displaying queue : [ ";

            for(int i = 0; i < this->size; i++)
            {
                cout<<this->arr[i]<<" ";
            }
            cout<<"]"<<endl;
        }
};

int main()
{
    Queue q(5);
    q.display();
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.display();
    q.enqueue(50);
    q.enqueue(60);
    q.display();
    return 0;
}