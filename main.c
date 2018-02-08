#include <stdio.h>

int main(int argc, char *argv[])
{
    void *foo;

    sleep(5);

    foo = (void *) malloc(1024*1024);

    if (! foo)
	perror("malloc");

    sleep(5);

    free(foo);

    sleep(5);

    exit(0);
}

