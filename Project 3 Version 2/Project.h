#include <iostream>
#include <ctime>
#include <cstdlib>
//array header

using namespace std;


class Project

{
private:
    int maxStackSize; // How many stacks in the master stack
    int stackTop; // The top of the stack
    int list[1]; // the array for the stacks
    
public:
    Project(); //The constructor
    void initializeStack(); // Fuction to make the stack
    bool isEmptyStack(); // To tell if the stack is empty
    bool isFullStack(); // To tell if the stack is full
    void push(); // Add new item to the top of the stack
    int top() const; // To show what is on the top of the stack
    void pop(); //to remove the item on the top of the stack
    //Project (int stacksize =100);
    //int list[1];
    int random();// 
};

Project:: Project()
{
    maxStackSize = 100; // the max amount of items in the stack
    
    stackTop=0; //where the stack begins
    
    list[maxStackSize]; // creates array to hold the stack
    
}


void Project::initializeStack()
{
    stackTop = 0; // starts the stack at 0;
    
}


bool Project::isEmptyStack()
{
    return (stackTop==0); // if the stack is at zero, then the stack is empty
    
}


bool Project::isFullStack()
{
    return (stackTop==maxStackSize);// if the top of the stack is at the max size, then the stack is full.
    
}

void Project::push()
{
    
    
    if (!isFullStack()) // if the stack is not full
    {
        list[stackTop] = random(); // the new item will the place at the position of the stack top
        
        stackTop ++; // the stack is now incremented to one place up
    }
    else
        cout<< " cannot add to a full stack,." <<endl;
}



int Project:: top() const
{
    
    
    assert(stackTop!=0); // assume the stack Top is not zero
    
    return list[stackTop-1]; // shows the value this one below the stack top
    
    
}

void Project:: pop()
{
    if (!isEmptyStack()) // if it is not an empty stack
        stackTop--; // the position of the top of the stack is decremented by one
    else
        cout<<"cannot move from empty stack "<<endl<<endl;
    
    
    
}

int Project:: random()
{
    
    int num = (rand()%10)+1;
  
    return num;
}





