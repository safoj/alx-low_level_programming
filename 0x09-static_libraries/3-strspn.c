#include "main.h"

/**
* _strspn - gets the length of a profix substring
* @s: string to be searched
* @accept: profix to be measured
*
* Return: accepted bytes
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int bytes = 0;
int index;

while (*s)
{
for (index = 0; accept[index]; index++)
{
if (*s == accept[index])
{
bytes++;
break;
}

else if (accept[index + 1] == '\0')
return (bytes);
}
s++;
}
return (bytes);
}
