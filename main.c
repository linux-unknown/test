#include <stdio.h>

extern int test(void);

int main(int argc ,char *argv[])
{
	test();
	printf("hello world\n");
	return 0;
}
