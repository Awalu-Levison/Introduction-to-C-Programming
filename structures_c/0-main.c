#include <stdio.h>
#include <string.h>
/**
 *struct - Dealing with structures in C programming

 * @student : Member of the structures in C
 */
struct student
{
	char name[50];
	int age;
	char address[100];

};
int main(void)
{
	/*Creating an instance of student*/
	struct student s1;
	struct student s2;

	strcpy(s1.name, "AWALU LEVISON");
	s1.age = 26;
	strcpy(s1.address, "Area 24, Lilongwe");

	/*Copying data between two structures in C*/
	s2 = s1;

	/*Printing the value*/
	printf("Your name is : %s\n", s2.name);
	printf("Your age is : %d\n", s2.age);
	printf("Your address is : %s\n", s2.address);

	return (0);
}
