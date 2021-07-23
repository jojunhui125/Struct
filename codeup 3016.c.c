#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct class
{
	char name[300];
	int a;
	int b;
	int c;
	
};

int main() 
{ 
	struct class data[100];
	int n,swap;
	int sa[100], sb[100], sc[100];
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%s %d %d %d", data[i].name, &data[i].a, &data[i].b, &data[i].c);
		sa[i] = data[i].a;
		sb[i] = data[i].b;
		sc[i] = data[i].c;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (sa[i] < sa[j])
			{
				swap = sa[i];
				sa[i] = sa[j];
				sa[j] = swap;
			}
			if (sb[i] < sb[j])
			{
				swap = sb[i];
				sb[i] = sb[j];
				sb[j] = swap;
			}
			if (sc[i] < sc[j])
			{
				swap = sc[i];
				sc[i] = sc[j];
				sc[j] = swap;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (sa[0] == data[i].a)
		{
			for (int j = 0; j < n; j++)
			{
				if (data[i].b == sb[j])
				{
					for (int k = 0; k < n; k++)
					{
						if (data[i].c == sc[k])
						{
							printf("%s %d %d", data[i].name, j+1, k+1);
							return 0;
						}
					}
				}
			}
		}
	}

	return 0; 
}


