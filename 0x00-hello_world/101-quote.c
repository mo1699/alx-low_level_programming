#include <unistd.h>

/**
 * main - Entery point
 *
 * Description: print a qout using write function
 *      ssize_t write(int fd.const void *buf.size_t count);
 *
 *Return: 1 (error)
*/


int main(void)
{	
	char quo[] = "and that piece of art is usefu\" - Dora Korpar,
	     2015 - 1 0 - 19\n";

	writ(1, quo, 59);
return (1);
}
