/**
 *main - prints the size of various types
 *
 *Return: Always 0
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
/*initialising each type*/

char charType;
int intType;
long longType;
long long longLongType;
float floatType;

/*initialising lengths*/

int charLenght = sizeof(charType);
int intLenght = sizeof(intType);
int longLenght = sizeof(longType);
int longlongLenght = sizeof(longLongType);
int floatLenght = sizeof(floatType);

/*printing*/

printf("Size of a char: %d byte(s)\n", charLenght);
printf("Size of an int: %d byte(s)\n", intLenght);
printf("Size of a long int: %d byte(s)\n", longLenght);
printf("Size of a long long int: %d byte(s)\n", longlongLenght);
printf("Size of a float: %d byte(s)\n", floatLenght);


return (0);
}
