#include <stdio.h>
#include <conio.h> // Console Input Output Header File
// Input a letter at runtime & check whether it is vowel or consonant
int main()
{
	char ch;
	int lc, uc;
	printf("\nPress any alphabet:   ");
	ch = getche(); // Get character and ENTER
	// Checking for vowels in small letter
	lc = ((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'));
	// Checking for vowels in capital letter
	uc = ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'));
	if (lc || uc) // lc==1 || uc==1
		printf("\n%c is vowel", ch);
	else
		printf("\n%c is consonant", ch);

	return 0;
}
