
     // Name: Justen Phillips
     // Course: CIS 006 Intro to programming
     // CRN: 20577
     // Date: 3/10/2017
     // Assignment: Poker Hand
     #include "PokerHand.h"
     
     
     int main(void)
    {
    //declare variables and initialize 
    //array hand as 5 card elements
    const short cards = 5;
    int hand[cards];
    char ask;//hold char for postfix try again loop
    do
    {
    //get cards store in array as 5 elements
    cout << "Enter five numeric cards, no face cards. Use 2 - 9." << endl;
    
    for(short i = 0,j = 1; i < cards; i++, j++)
    {
    	cout << "Card " << j << endl;
    	cin >> hand[i];
    }
    
    //bubble sort cards into lowest to highest order
    //removed at professors request
    //for (short i = 0; i < cards; ++i)
    //{
    	//for (short j = 0; j < cards - i - 1; ++j)
    		//if (hand[j] > hand[j + 1])
         		//{
            	//short temp = hand[j];
            	//hand[j] = hand[j + 1];
            	//hand[j + 1] = temp;
          		//}
    //}
    
    //call function to check cards in hand for types
    checkHand(hand, cards);
    
    //commented out for evaluator
    //display hand
    //cout << "Your hand: ";
    //for(short i = 0; i < cards; i++)
    //{	cout << hand[i];}
     //	cout << endl;
    
    
    cout << "Try Again?(y/n) ";
    cin >> ask;
    ask = tolower(ask);
    
    		while((ask != 'y') && (ask != 'n'))
    		{
   			cout << "Invalid Input. Try Again?(y/n) ";
    			cin >> ask;
    		}
    }
    while(ask == 'y');
    
    return 0;
    
    }
