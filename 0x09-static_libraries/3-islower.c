#include "main.h"
/**
 * _islower - A  function that checks for lowercase character.
 * @c: The character been checked
 * Return: 0 - SUCCESS
 */
int _islower(int c)
{
int no;
if (c > 96 && c < 123)
no = 1;
else
no = 0;
return (no);
}
