/* *simple demonstration of function pointer usage */

#include <stdio.h>

void printmsg()
{
   printf("printing a simple message\n");
}

int main()
{
    void (*fp)() = printmsg;
    fp();
    return 0;
}


