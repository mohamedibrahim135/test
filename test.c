#include "shell.h"


/**
 * _txemy - to close the shell
 * @data: for data
 * Return: the state
 * (0) if info.argv[0] != "exit"
 */

int _txemy(info_t *data)
{
int exthck;
if (data->argv[1])
{
exthck = _erratoi(data->argv[1]);
if (exthck == -1)
{
data->status = 2;
print_error(data, "Illegal number: ");
_eputs(data->argv[1]);
_eputchar('\n');
return (1);
}
data->err_num = _erratoi(data->argv[1]);
return (-2);
}
data->err_num = -1;
return (-2);
}

/**
 * comd - hth
 * @data: htht
 * Return: Always 0
 */
int comd(info_t *data)
{
char *n, *tory, buff[1024];
int ar;
s = getcwd(buff, 1024);
if (!s)
_puts("TODO: >>getcwd failure emsg here<<\n");
if (!data->argv[1])
{
tory = _getenv(data, "HOME=");
if (!tory)
ar = chdir((tory = _getenv(data, "PWD=")) ? tory : "/");
else
ar = chdir(tory);
}
else if (_strcmp(data->argv[1], "-") == 0)
{
if (!_getenv(data, "OLDPWD="))
{
_puts(n);
_putchar('\n');
return (1);
}
_puts(_getenv(data, "OLDPWD=")), _putchar('\n');
ar = chdir((tory = _getenv(data, "OLDPWD=")) ? tory : "/");
}
else
ar = chdir(data->argv[1]);
if (ar == -1)
{
print_error(data, "can't cd to !");
_eputs(data->argv[1]), _eputchar('\n');
}
else
{
_setenv(data, "OLDPWD", _getenv(data, "PWD="));
_setenv(data, "PWD", getcwd(buff, 1024));
}
return (0);
}

/**
 *to_as -fff
 *@data: Skuku
 *Return: Always 0
 */
int to_as(info_t *data)
{
char **mentarr;
mentarr = data->argv;
_puts("help call works, Function not yet implemented \n");
if (0)
_puts(*mentarr);
return (0);
}
