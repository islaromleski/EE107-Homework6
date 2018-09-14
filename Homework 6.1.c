#include <stdio.h>

int main(void)
{
	void swap (char string1[], char string2[]);
	char string1[10] = {"Test"};
	char string2[10] = {"Works"};
	
	printf("Strings before the swap. String1: %s String2: %s\n", string1, string2);

	swap(string1, string2);
	
	return 0;
}

void swap (char string1[], char string2[])
{
	char temp;
	int i = 0;
	
	while (string1[i] != '\0' || string2[i] != '\0')
	{
		temp = string1[i];
		string1[i] = string2[i];
		string2[i] = temp;
		
		++i;
	}
	
	printf("Strings after the swap. String1: %s String2: %s\n", string1, string2);

}