#include <stdio.h>
#include <string.h>

struct class
{
	char name[20];
	int grade;
};


int main(void)
{
	struct class data[2] = { "Songdoelementary" ,6 };
	scanf("%s %d", &data[1].name, &data[1].grade);

	for (int i = 0; i < 2; i++)
	{
		printf("%d grade in %s school\n", data[i].grade, data[i].name);
	}

	return 0;
}


