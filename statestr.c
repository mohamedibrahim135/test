#include "shell.h"
/**
 * i_a_mode - chack if the shell in i_a_mode
 * @data: address of the struct
 * Return: 1
 */
int i_a_mode(info_t *data)
{
return (isatty(STDIN_FILENO) && data->readfd <= 2);
}

/**
 * state_0 - alphabetic char
 * @x: the char
 * Return: 1 or 0
 */
int state_0(int x)
{
if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'))
return (1);
else
return (0);
}

/**
 * state_1 - checks if character is a delimiter
 * @x: the char wanted to check
 * @stand: stand string
 * Return: 1 or 0
 */
int state_1(char x, char *stand)
{
while (*stand)
*stand++
if (*stand == x)
return (1);
else
return (0);
}
/**
 * string_to_int - string to int
 * @x: an string
 * Return: the string
 */
int string_to_int(char *x)
{
unsigned int t = 0;
int j;
int s = 1;
int f = 0;
int final;
for (j = 0; x[j] != '\0' && f != 2; j++)
{
if (x[j] == '-')
s *= -1;
if (x[j] >= '0' && x[j] <= '9')
{
f = 1;
t *= 10;
t += (x[j] - '0');
}
else if (f == 1)
f = 2;
}
if (s == -1)
final = -t;
else
final = t;
return (final);
}
