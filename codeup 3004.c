#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct sort
{
	unsigned int num;
	
};

int main(void)
{
	struct sort data[100];
	int n, number[100000] = { 0 },swap;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &data[i].num);
		number[i] = data[i].num;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (data[i].num > data[j].num)
			{
				swap = data[i].num;
				data[i].num = data[j].num;
				data[j].num = swap;
			}
		}
	}
	//0 1 2 3 4 -> 2 0 3 1 4
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (data[i].num == number[j])
			{
				number[j] = cnt;
				cnt++;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		printf("%d ", number[i]);
	}
}

