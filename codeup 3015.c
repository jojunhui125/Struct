#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct class
{
	char name[100];
	int score;
};

int main() 
{ 
	struct class data[105];
	int n, m,swap;
	scanf("%d %d", &n, &m);
	int result[100] = { 0 };


	for (int i = 0; i < n; i++)
	{
		scanf("%s %d", data[i].name, &data[i].score);
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
	int cnt = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (result[i] == data[j].score)
			{
				printf("%s\n", data[j].name);
				cnt++;
				if (cnt == m)
				{
					return 0;
				}
			}
		}
		
	}

	 // 95 85 80 95 100
	// 100 95 95 85 80
	return 0; 
}


