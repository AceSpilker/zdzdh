#include<stdio.h>

//连续子数组的最大和
int MaxNum2(int* arr, int len)
{
	int max = 0;//0x8000 0000是十六进制的最小值
	int sum = 0;
	int i;
	for (i = 0; i < len; i++)
	{
		if (sum <= 0)
		{
			sum = arr[i];//当sum<=0时，将第i个指向值给sum
		}
		else
		{
			sum += arr[i];//否则sum+下个指向值
		}

		if (sum > max)//当此sum比上个sum大时，赋值给max
		{
			max = sum;
		}
	}
	return max;
}

int main()
{
	int arr[6] = { -2,11,-4,13,-5,-2 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int max = MaxNum2(arr, len);
	printf("%d\n", max);
	return 0;
}