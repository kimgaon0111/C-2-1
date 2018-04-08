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
	puts("������ ������ �Է����ּ���.");

	scanf_s("%d", &n);

	if ((n < 1 || 99 < n))
	{
		printf("\n������ ������ 1~99������ �մϴ�. (�Էµ� ���� : %d��)\n", n);
		return;
	}

	printf("���� %d���� �Է����ּ���.\n", n);

	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
		sum = sum + a[i];
	}

	printf("\n��� : %.4f\n�л� : %.4f\n�ִ� : %d\n�ּڰ� : %d\n", m(), u(m()), maximum(), minimum());
	return 0;
}