#include "main.h"
/**
 * prev_string - Reverse the given string
 * @s: Character variable to be used
 */
void rev_string(char *s)
{
	int first_v = 0;
	int second_v;
	int third_v;
	char temporary;

	while (s[first_v] != '\0')
	{
		first_v++;
	}
	third_v = first_v - 1;
	for (second_v = 0; third_v >= 0 && second_v < third_v;
			third_v--, second_v++)
	{
		temporary = s[second_v];
		s[second_v] = s[third_v];
		s[third_v] = temporary;
	}
}
