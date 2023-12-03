#include <stdio.h>
int main(void)
{
	FILE *file = fopen("text.txt", "w");

	if (file != NULL)
	{
		/*Read or write operations can be performed here*/
		/*fclose(file);*/
		printf("File closed successfully!\n");
	}

	else
	{
		printf("Failed to open the file.\n");
	}
	return 0;
}
