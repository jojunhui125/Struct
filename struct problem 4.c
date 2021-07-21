#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct info
{
	char name[100];
	char tel[100];
	char ad[100];
};

int main(void)
{
	struct info data[3];
	for (int i = 0; i < 3; i++)
	{
		scanf("%s %s %s", data[i].name, data[i].tel, data[i].ad);
	}
	char a = 'Z';

	for (int i = 0; i < 3; i++)
	{
		if (a > data[i].name[0])
		{
			a = data[i].name[0];
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (a == data[i].name[0])
		{
			printf("name: %s tel: %s addr: %s\n", data[i].name, data[i].tel, data[i].ad);
		}
	}

	return 0;
}
