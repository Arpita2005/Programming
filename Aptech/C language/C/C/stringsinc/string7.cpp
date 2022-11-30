#include <stdio.h>
// Length of string
int main()
{
	char str[200];
	int i = 0;
	printf("\n Enter a string \n");
	gets(str);

	while (str[i] != '\0')
		i++;
	printf("\n Length of %s = %d", str, i);

	return 0;
}
