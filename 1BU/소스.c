#include <stdio.h>
#include <math.h>

int sum = 0, n, a[99];

double m()
{
	return sum / n;
}

double u(double x)
{
	double u = 0;
	for (int i = 0; i < n; i++)
	{
		u = u + pow(a[i] - x, 2) / n;
	}
	return u;
}

int maximum()
{
	int max = a[0];
	for (int i = 1; i < n; i++)
	{
		if (max < a[i])
			max = a[i];
	}
	return max;
}

int minimum()
{
	int min = a[0];
	for (int i = 1; i < n; i++)
	{
		if (min > a[i])
			min = a[i];
	}
	return min;
}

int main()
{
	puts("변량의 개수를 입력해주세요.");

	scanf_s("%d", &n);

	if ((n < 1 || 99 < n))
	{
		printf("\n변량의 개수는 1~99개여야 합니다. (입력된 변량 : %d개)\n", n);
		return;
	}

	printf("변량 %d개를 입력해주세요.\n", n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
		sum = sum + a[i];
	}

	printf("\n평균 : %.4f\n분산 : %.4f\n최댓값 : %d\n최솟값 : %d\n", m(), u(m()), maximum(), minimum());
	return 0;
}