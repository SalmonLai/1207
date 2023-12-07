#include <stdio.h>
#include <string.h>

struct card
{
	/*char *face;
	char *suit;*/    //課本的
	char face[10];
	char suit[10];   //GPT修改的

};


int main() {
	struct card aCard;
	struct card *cardPtr;

	/*aCard.face = "Ace";
	aCard.suit = "Spades";*/   //課本的
	strcpy_s(aCard.face, sizeof(aCard.face), "Ace");
	strcpy_s(aCard.suit, sizeof(aCard.suit), "Spades");   //GPT修改的
	
	cardPtr = &aCard;

	printf("%s%s%s\n%s%s%s\n%s%s%s\n", aCard.face, " of ", aCard.suit, cardPtr->face, " of ", cardPtr->suit, (*cardPtr).face, " of ", (*cardPtr).suit);
	return 0;
}