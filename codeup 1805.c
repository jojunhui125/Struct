#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct factory
{
	int number[100];
	
};

int main(void)
{
	struct factory data[100];
	int n,swap;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			scanf("%d", &data[i].number[j]);
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (data[i].number[0] > data[j].number[0])
			{
				for (int k = 0; k < 2; k++)
				{
					swap = data[i].number[k];
					data[i].number[k] = data[j].number[k];
					data[j].number[k] = swap;
				}
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d ", data[i].number[j]);
		}
		printf("\n");
	}
	
}
