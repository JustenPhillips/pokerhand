# pokerhand
poker game text based written in C++
PokerHand.cpp
Requested files: PokerHand.h, PokerHand.cpp, PokerHand_test.cpp (Download)
Type of work: Individual work

Write a program that reads five cards from the user, then analyzes the cards and prints out the category of hand that they represent.  

Poker hands are categorized according to the following labels: Straight flush, four of a kind, full house, straight, flush, three of a kind, two pairs, pair, high card.

To simplify the program we will ignore card suits, and face cards. The values that the user inputs will be integer values from 2 to 9.  When your program runs it should start by collecting five integer values from the user. It might look like this (user input is in orange for clarity):

Enter five numeric cards, no face cards. Use 2 - 9.

Card 1: 8 

Card 2: 7

Card 3: 8

Card 4: 2

Card 5: 3

(This is a pair, since there are two eights)

Since we are ignoring card suits there won’t be any flushes. Your program should be able to recognize the following hand categories, listed from least valuable to most valuable:

Hand Type
	

Description
	

Example

High Card
	

There are no matching cards, and the hand is not a straight
	

2, 5, 3, 8, 7

Pair
	

Two of the cards are identical
	

2, 5, 3, 5, 7

Two Pair
	

Two different pairs
	

2, 5, 3, 5, 3

Three of a kind
	

Three matching cards
	

5, 5, 3, 5, 7

Full House
	

A pair, and a three of a kind
	

5, 7, 5, 7, 7

Straight
	

Card values can be arranged in order
	

3, 4, 5, 6, 7

Four of a kind
	

Four matching cards
	

2, 5, 5, 5, 5

(A note on straights: a hand is a straight regardless of the order. So the values 3, 4, 5, 6, 7 represent a straight, but so do the values 7, 4, 5, 6, 3)

Your program should read in five values and then print out the appropriate hand type. If a hand matches more than one description, the program should print out the most valuable hand type.

Here is are two sample runs of the program:

Enter five numeric cards, no face cards. Use 2 - 9.

Card 1: 8 

Card 2: 7

Card 3: 8

Card 4: 2

Card 5: 7

Two Pair!

Enter five numeric cards, no face cards. Use 2 - 9.

Card 1: 4 

Card 2: 5

Card 3: 6

Card 4: 8

Card 5: 7

Straight!

Enter five numeric cards, no face cards. Use 2 - 9.

Card 1: 9

Card 2: 2

Card 3: 3

Card 4: 4

Card 5: 5

High Card!

Requirements

You must write a method for each hand type.  Each method should accept an int array. You can assume that the array will have five elements. The methods should have the following signatures.  

bool  containsPair(int hand[])

bool  containsTwoPair(int hand[])

bool  containsThreeOfaKind(int hand[])

bool  containsStraight(int hand[])

bool  containsFullHouse(int hand[])

bool  containsFourOfaKind(int hand[])

You do not need to write a containsHighCard method. All hands contain a highest card. If you determine that a particular hand is not one of the better hand types, then you know that it is a High Card hand.

Suggestions

Test these method independently. Once you are sure that they all work, the program logic for the complete program will be fairly straightforward.

Grade
Reviewed on Sunday, 11 June 2017, 11:52 AM by Courtney Brown
Grade 100 / 100
Assessment report
[-]TEST 1 straight-
PASS - straight correctly detected--
[-]TEST 2 straight-
PASS - straight correctly detected--
[-]TEST 3 full house-
PASS - full house correctly detected--
[-]TEST 4 four of a kind-
PASS - four of a kind correctly detected--
[-]TEST 5 high card-
PASS - high card correctly detected--
[-]TEST 6 pair-
PASS - pair correctly detected--
[-]TEST 7 three of a kind-
PASS - three of a kind correctly detected--
[-]TEST 8 two pair-
PASS - two pair correctly detected--
