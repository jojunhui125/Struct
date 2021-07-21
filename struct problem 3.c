#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct info
{
	int x[2];
	int y[2];
};

int main(void)
{
	struct info data[2];
	int one=0, two=0, three=0, four=0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			scanf("%d %d", &data[i].x[j], &data[i].y[j]);
		}
	}
	for (int i = 0; i < 1; i++)
	{
		if (data[i].x[0] > data[i + 1].x[0])
		{
			one = data[i + 1].x[0];
		}
		else if(data[i].x[0]<data[i+1].x[0])
		{
			one = data[i].x[0];
		}
		else if (data[i].y[0] > data[i + 1].y[0])
		{
			two = data[i + 1].y[0];
		}
		else if (data[i].y[0] < data[i + 1].y[0])
		{
			two = data[i].y[0];
		}
	}


	for (int i = 0; i < 1; i++)
	{
		if (data[i].x[1] < data[i + 1].x[1])
		{
			three = data[i + 1].x[1];
		}
		else if (data[i].x[1] > data[i + 1].x[1])
		{
			three = data[i].x[1];
		}
		if (data[i].y[1] < data[i + 1].y[1])
		{
			four = data[i + 1].y[1];
			
		}
		if (data[i].y[1] > data[i + 1].y[1])
		{
			four = data[i].y[1];
			
		}
	}

	printf("%d %d %d %d", one,two,three,four);
	
	return 0;
}

