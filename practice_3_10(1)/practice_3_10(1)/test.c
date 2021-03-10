#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n = 0;
	while (~scanf("%d", &n))
	{
		int i = 0;
		for (i = 0; i<n; i++)
		{
			int j = 0;
			for (j = 0; j<n; j++)
			{
				if (j + i<n-1)
				{
					printf(" ");
				}
				else
				{
					printf(" *");
				}
			}
			printf("\n");
		}
	}

	return 0;
}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		for (i = 0; i<n; i++)
//		{
//			k = i;
//			if (i)
//			{
//				for (; k>0; k--)
//				{
//					printf(" ");
//				}
//			}
//			for (j = 0; j<n - i; j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[] = { 'a', 'b', 'c', 'd' };
//	char* parr = arr;
//	printf("%d\n%d", strlen(arr),strlen(parr));
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i, j;
//		for (i = 0; i<n; i++)
//		{
//			for (j = 0; j<n; j++)
//			{
//				if (j == i || j == 0 || i == n-1)
//				{
//					printf("* ");
//				}
//				else
//				{
//					printf("  ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[100] = { 0 };
//	int count = 0;
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0;
//		for (i = 1; i<=n; i++)
//		{
//			arr[i-1] = i;
//		}
//		int j = 0;
//		for (i = 2; i<n; i++)
//		{
//			for (j = i; j<n; j++)
//			{
//				if (arr[j] % i == 0  && arr[j] != 0)
//				{
//					arr[j] = 0;
//					count++;
//				}
//			}
//		}
//		for (i = 1; i<n; i++)
//		{
//			if (arr[i])
//			{
//				printf("%d ", arr[i]);
//			}
//		}
//		printf("\n%d", count);
//		printf("\n");
//	}
//	return 0;
//}