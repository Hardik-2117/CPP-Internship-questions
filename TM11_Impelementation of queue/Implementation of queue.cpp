#include <iostream>
#include <cstdlib>
using namespace std;
 

#define SIZE 10
 

class Queue
{
    int *arr;       
    int capacity;   
    int front;       
    int rear;       
    int count;      
 
public:
    Queue(int size = SIZE);     // constructor
    ~Queue();                   // destructor
 
    int remove();
    void add(int x);
    int getFront();
    int size();
    bool isEmpty();
    bool isFull();
};
  // Constructor to initialize a queue
Queue::Queue(int size)
{
    arr = new int[size];
    capacity = size;
    front = 0;
    rear = -1;
    count = 0;
}
 
// Destructor to free memory allocated to the queue
Queue::~Queue() {
    delete[] arr;
}
 
// Utility function to dequeue the front element
int Queue::remove()
{
    // check for queue underflow
    if (isEmpty())
    {
        cout << "queue empty";
        exit(EXIT_FAILURE);
    }
 
    int x = arr[front];
    cout << "Removing " << x << endl;
 
    front = (front + 1) % capacity;
    count--;
 
    return x;
}
 
// Utility function to add an item to the queue
void Queue::add(int item)
{
    // check for queue overflow
    if (isFull())
    {
        cout << "Overflow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
 
    cout << "Inserting " << item << endl;
 
    rear = (rear + 1) % capacity;
    arr[rear] = item;
    count++;
}
 
// Utility function to return the front element of the queue
int Queue::getFront()
{
    if (isEmpty())
    {
        cout << "queue empty\n";
        //exit(EXIT_FAILURE);
    }
    return arr[front];
}
 
// Utility function to return the size of the queue
int Queue::size() {
    return count;
}
 
// Utility function to check if the queue is empty or not
bool Queue::isEmpty() {
    return (size() == 0);
}
 
// Utility function to check if the queue is full or not
bool Queue::isFull() {
    return (size() == capacity);
}
 
int main()
{
    // create a queue of capacity 5
    Queue q(5);
 
    q.add(5);
    q.add(10);
    q.add(15);
 
    cout << "The front element is " << q.getFront() << endl;
    q.remove();
    cout << "The front element is " << q.getFront() << endl;
    q.remove();
    q.add(30);
    q.add(37);
    cout << "The front element is " << q.getFront() << endl;
    q.remove();
    cout << "The front element is " << q.getFront() << endl;
    q.remove();
    cout << "The front element is " << q.getFront() << endl;
    q.remove();
    q.remove(); 
    cout<< q.getFront() << endl;
    q.add(45);
    cout << "The front element is " << q.getFront() << endl;
    q.remove();
    q.remove();
    cout<<q.getFront()<<endl;
    
 
    if (q.isEmpty()) {
        cout << "The queue is empty\n";
    }
    else {
        cout << "The queue is not empty\n";
    }
 
    return 0;
}
