#include <stdio.h>
#include <string.h>

int main()
{
	char name[] = "okpo";
	char * olw ;
	int i = 0;
 	while (i < strlen(name)) {
		olw = &name[i];
		printf('%s',name);
	}
}
