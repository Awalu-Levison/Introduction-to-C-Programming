#include <stdio.h>
/*
 *
 */
int main(void)
{
	FILE *fp; /*Declare file pointer*/
	/*processing of the files*/
	fp = fopen("text1.txt", "w");

	fprintf(fp, "%s\n", "Hello Malawi");
	/*end of the files*/
	fclose(fp);

	return (0);
}
