#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 1000

void get_factor(char buff);

int main(int argc, char *argv[])
{
	FILE *fp = fopen(argv[1], "r");
	//int num;
	char buff[100];

	if (!fp)
	{
		return 1;
	}
	while (fgets(buff, 99, fp) != NULL)
	{
		//c = fgetc(fp);
		//num = atoi(num);
		//printf("%c", c);
		get_factor(c);
	}
	return 0;
}

void get_factor(char buff)
{
	printf("Char .. %s", buff);
}
