#include "shell.h"
/**
 * ment - degg
 * @data: ththt
 * Return: Always 0
 */
int ment(info_t *data)
{
print_list_str(data->env);
return (0);
}
/**
 * theev - ilimb
 * @data: ffbbb
 * @evnme: bmm
 * Return: jhy
 */
char *theev(info_t *data, const char *evnme)
{
list_t *node = data->env;
char *s;
while (node)
{
s = starts_with(node->str, evnme);
if (s && *s)
return (s);
node = node->next;
}
return (NULL);
}
/**
 * badfun - drrrr
 * @data: Structure containing potential arguments. Used to maintain
 *  Return: Always 0
 */

int badfun(info_t *data)
{
if (data->argc != 3)
{
_eputs("Incorrect number of arguements\n");
return (1);
}
if (_setenv(data, data->argv[1], data->argv[2]))
return (0);
else
return (1);
}
/**
 * goodfun - Remove an environment variable
 * @data: eege
 * Return: gb
 */
int goodfun(info_t *data)
{
int f;
if (data->argc == 1)
{
_eputs("Too few arguements.\n");
return (1);
}
for (f = 1; f <= data->argc; f++)
_unsetenv(data, data->argv[f]);
return (0);
}
/**
 *  neweve - pyyyyy
 * @data: myy
 * Return: Always 0
 */
int neweve(info_t *data)
{
list_t *node = NULL;
size_t j;
for (j = 0; environ[j]; j++)
add_node_end(&node, environ[j], 0);
data->env = node;
return (0);
}
