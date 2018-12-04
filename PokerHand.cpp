// Name: Justen Phillips
     // Course: CIS 006 Intro to programming
     // CRN: 20577
     // Date: 3/10/2017
     // Assignment: Poker Hand
     #include "PokerHand.h"
     
     //check hand for type without sorting the hand
     int checkHand(int hand[], const short cards)
    {	short pair = 0;
    	//bool check[] = {false, false, false, false, false};
    //loop to find patterns of pairs and accumulate that value 
    for(short i = 0; i < cards; i++)
    	for(short j = i+1; j < cards; j++)
    {
    	if(hand[i] == hand[j])
    	{	++pair;
    		//check[i] = true;
    		//check[j] = true;
    	}
    }
    //these are the patterns returned that are equvilant to the type of hand
    if (pair == 1)
    	{cout << "Pair!" << endl;}
    else if(pair == 2)
    	{cout << "Two Pairs!" << endl;}
    else if(pair == 3)
    	{cout << "Three of a kind!" << endl;}
    else if(pair == 6)
    	{cout << "Four of a Kind!" << endl;}
    else if(pair == 4)
    	{cout << "Full House!" << endl;}
    else if(pair == 10)
    	{cout << "Four of a Kind!" << endl;}
    else
    {	
    //if no pairs check for a straight with some more loops
    //find the smallest numeric value
    //test if the next value increments once
    //if all elements increment by one it is a straight
    bool straight = false;	
    short min = hand[0];
    for(short i = 1; i < cards; i++)
    {
    	if(hand[i] < min)
    	{
    		min = hand[i];
    	}
    }
    
    	short next = min + 1;
    	short i = 0;
    while(i < cards)
    {
    	if(hand[i] == next)
    	{
    		next++;
    		i=0;
    	}
    	else
    	{
    		i++;
    	}
    }
    if(next == (min+5))
    {
    	straight = true;
    }
    else
    {
    	straight = false;
    }
    	if (!straight)
    		cout << "High Card!" << endl;
    	else
    		cout << "Straight!" << endl;
    }
    }
    
   
    //test purposes 
    //elements 0 1 2 3 4
    //value    5 5 3 7 4
    // is element [0] {5} the same as element [1] {5} if so increment X
   
