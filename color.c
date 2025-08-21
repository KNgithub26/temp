#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

void otherprint(void);
int main (void) 
{
	printf("\033[31;42;1;5;5;5;5;5m##\033[0m\033[35mpurple\033[0mnormal\n");
	otherprint();
	return 0;
}
