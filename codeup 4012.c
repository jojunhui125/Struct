#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct class
{

	int score;
	
};

int main() 
{ 
	int n, result[200] = { 0 },swap;
	scanf("%d", &n);

	struct class data[200];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &data[i].score);
		result[i] = data[i].score;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (result[i] < result[j])
			{
				swap = result[i];
				result[i] = result[j];
				result[j] = swap;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (data[i].score==result[j])
			{
				printf("%d %d\n", data[i].score, j + 1);
				break;
			}
		}
		
	}

	return 0; 
}


