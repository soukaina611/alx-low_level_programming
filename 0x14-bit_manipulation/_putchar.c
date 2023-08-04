#include <unistd.h>

/**
 * _putchar function : write the caracter c  to stdout
 * &c is a character that we want to print
 * Return 1 on Success, -1 on Error
*/

int _putchar(char c)
{
        return (write(1, &c, 1));

}
