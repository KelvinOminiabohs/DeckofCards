#include <iostream>
#include "Queue.h"
#include <cstdlib>
#include <ctime>


using namespace std;



int main()
{
    
    
    
    
    srand(time(NULL));
    Queue deck;
    
    
    
    int totalpointsone=0, totalpointtwo=0;
    
    
    //intializing the decks
    
    
    
    // to put random number into stack into stack
    
    
    cout<<"LET THE GAMES BEGIN "<<endl<<endl;
    cout<<"Player 1 score: "<<totalpointsone<<endl;
    cout<<"Player 2 score: "<<totalpointtwo<<endl;
    
    cout<<"Player One Draws Card"<<endl<<endl;
    
    while (totalpointtwo<=100 && totalpointsone<=100)
    {
        
        // player one
        cout<<"Player One Draws Card"<<endl<<endl;
        
        deck.addQueue();
        
        cout<<"Player one draws "<<deck.back()<<endl<<endl;
        
        
        
        if (deck.back() == 0 )
        {
            totalpointsone = totalpointsone - 10;
            cout<<" Player one has " << totalpointsone<<endl<<endl;
            
            
        }
        
        
        //Draw One
        else if (deck.back() == 1)
        {
            
            totalpointsone =totalpointsone + 1;
            cout<<" Player one has " << totalpointsone<<endl<<endl;
            cout<<" Since Player drew 1, Draw again"<<endl<<endl;
            
            deck.addQueue();
            
            totalpointsone = totalpointsone + deck.back();
            
            cout<<" Player one has " << totalpointsone<<endl<<endl;
            
            // if he draws a one again
            while(deck.back()==1)
            {
                
                totalpointsone =totalpointsone + 1;
                cout<<" Since Player drew 1, Draw again"<<endl<<endl;
                
                 deck.addQueue();
                
                totalpointsone = totalpointsone + deck.back();
                
                cout<<" Player one has " << totalpointsone<<endl<<endl;
                
                if (deck.back() == 0 )
                {
                    totalpointsone = totalpointsone - 10;
                    cout<<" Player one has " << totalpointsone<<endl<<endl;
                    
                    
                }
                else if (deck.back() ==2)
                {
                    
                    totalpointsone =totalpointsone + 2;
                    
                    
                    
                     deck.addQueue();
                    cout<<" Player one has " << totalpointsone<<endl<<endl;
                    
                    
                }
                else
                {
                    //3-10
                    totalpointsone = totalpointsone + deck.back();
                    cout<<" Player one has " << totalpointsone<<endl<<endl;
                    
                }
                
            }
            
            
        }
        
        
        //Draw 2
        else if (deck.back() == 2)
        {
            
            totalpointsone =totalpointsone + 2;
            
            
            
             deck.addQueue();
            cout<<" Player one has " << totalpointsone<<endl<<endl;
            
            
        }
        else
        {
            //3-10
            totalpointsone = totalpointsone + deck.back();
            cout<<" Player one has " << totalpointsone<<endl<<endl;
            
        }
        if (totalpointsone>= 100)
        {
            cout<<"Player one wins "<<endl<<endl;
            break;
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        // player two
        cout<<"Player Two Draws Card"<<endl<<endl;
        
         deck.addQueue();
        
        cout<<"Player Two draws "<<deck.back()<<endl<<endl;
        
        
        
        if (deck.back() == 0 )
        {
            totalpointtwo = totalpointtwo - 10;
            cout<<" Player Two has " << totalpointtwo<<endl<<endl;
            
        }
        
        else if (deck.back() == 1)
        {
            
            totalpointtwo =totalpointtwo + 1;
            cout<<" Player one has " << totalpointtwo<<endl<<endl;
            cout<<" Since Player drew 2, Draw again "<<endl<<endl;
            
             deck.addQueue();
            
            totalpointtwo = totalpointtwo + deck.back();
            
            cout<<" Player one has " << totalpointtwo<<endl<<endl;
            
            // if he draws a one again
            while(deck.back() == 1)
            {
                
                totalpointtwo =totalpointtwo + 1;
                cout<<" Since Player drew 2, Draw again"<<endl<<endl;
                
                 deck.addQueue();
                
                totalpointtwo = totalpointtwo + deck.back();
                
                cout<<" Player Two has " << totalpointtwo<<endl<<endl;
                
                if (deck.back() == 0 )
                {
                    
                    totalpointtwo = totalpointtwo - 10;
                    cout<<" Player two has " << totalpointtwo<<endl<<endl;
                    
                }
                
                else if (deck.back() == 2)
                {
                    
                    totalpointtwo =totalpointtwo + 2;
                    
                    
                    
                    deck.addQueue();
                    
                    cout<<" Player Two has " << totalpointtwo<<endl<<endl;
                    
                    
                }
                else
                {
                    //3-10
                    totalpointtwo = totalpointtwo +  deck.back();
                    cout<<" Player Two has " << totalpointtwo<<endl<<endl;
                    
                }
                
            }
            
            
        }
        else if (deck.back() == 2)
        {
            
            totalpointtwo =totalpointtwo + 2;
            
            
            
            
            cout<<" Player Two has " << totalpointtwo<<endl<<endl;
            
            
        }
        else
        {
            totalpointtwo = totalpointtwo + deck.back();
            cout<<" Player Two has " << totalpointtwo<<endl<<endl;
            
        }
        
        if (totalpointtwo>= 100)
        {
            cout<<"Player two wins "<<endl;
            break;
        }
        cout<<"Player 1 score: "<<totalpointsone<<endl;
        cout<<"Player 2 score: "<<totalpointtwo<<endl<<endl;
        
        if (deck.isFullQueue())
            
        {
            cout<<"The deck is empty, replenshing deck "<<endl<<endl;
            break;
        }
    }
    
    
    
    
    
    
    
    
    
}
