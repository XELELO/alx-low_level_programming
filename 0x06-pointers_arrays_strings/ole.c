#include <stdio.h>

int main(void)
{
	int i =0 ;
	int j =6;
	while (i <= 6 && j >= 0)
	{
		printf("i:%d,j:%d\n",i,j);
		i++;
		j--;
	}
	return (0);
}
