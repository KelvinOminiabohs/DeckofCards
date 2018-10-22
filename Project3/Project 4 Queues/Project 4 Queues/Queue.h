#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;



class Queue

{
    
    
private:
    int queuefront; // first element
    int queueback; // last element
    int queuemax; //maxium numbers the queue can hold
    int count =0; // how many elements in queue currently
    int list[1];
    
    
public:
    Queue();
    bool isEmptyQueue() const;
    bool isFullQueue() const;
    int front() const;
    int back() const;
    void addQueue();
    void deleteQueue();
    int random();
    
    
    
    
};

Queue:: Queue()
{
    queuemax = 100;
    queuefront=0;
    queueback = queuemax -1;
    count = 0;
    
}

bool Queue :: isEmptyQueue() const
{
    return (count == 0);
}

bool Queue :: isFullQueue() const
{
    return (count == queuemax);
}

int Queue :: front() const
{
    
    if(!isEmptyQueue());
    return list[queuefront];
    
}

int Queue :: back() const
{
    assert(!isEmptyQueue());
    return list[queueback];
    
}
void Queue :: addQueue()
{
    if (!isFullQueue())
    {
        queueback = (queueback+1) % queuemax;
        
        count++;
        list[queueback] = random();
        
    }
    else
        cout<< " CANNOT ADD TO A FULL QUEUE "<<endl;
    
    
}

void Queue :: deleteQueue()
{
    if (!isEmptyQueue())
    {
        count--;
        queuefront=(queuefront + 1 ) % queuemax;
    }
    else
        cout<< "Cannot remove from an empty queue "<<endl;
    
    
}

int Queue:: random()
{
    // srand(time(NULL));
    int num = (rand()%10)+1;
    
    return num;
}
