#include <stdio.h>
#include <string.h>

struct direct
{
	int x, y;
};


int main(void)
{
	struct direct data[3];
	for (int i = 0; i < 3; i++)
	{
		scanf("%d %d", &data[i].x, &data[i].y);
	}
	float sum[2] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		sum[0] += data[i].x;
		sum[1] += data[i].y;
	}
	printf("%.1f %.1f", sum[0] / (double)3, sum[1] / (double)3);
	
	return 0;
}


