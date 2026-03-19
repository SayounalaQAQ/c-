#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int* pa = &a;
//	int** ppa = &pa;
//	printf("%p", &pa);
//	return 0;
//}
#define value 10

//指针加减整数
int main()
{
	//int arr[10] = { 0 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int i = 0;
	//int* p = arr;
	////常规方法
	////for (i = 0; i < sz; i++)
	////{
	////	arr[i] = 1;
	////}
	////
	////第二种 利用指针
	////for (i = 0; i < sz; i++)
	////{
	////	//*p = i;
	////	//p++;
	////	*p++=1;
	////}


	////第三种
	//for (i = 0; i < sz; i++)
	//{
	//	*(p +i)= i;
	//}
	//for (i = 0; i < sz; i++)
	//{
	//	printf("%d ", arr[i]);
	//}

	//return 0;


	//利用指针比较进行初始化数组
	/*int arr[value];
	int* p = arr;
	int i = 0;
	for (p=&arr[value-1];p>=&arr[0];)
	{
		*p-- = 1;
	}
	for (i = 0; i < value; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;*/
    

	int arr[10] = { 0 };
	int* p = arr;
	
	for (int i = 0; i < 10; i++)
	{
		printf("%p------%p------%p------%p\n", p + i, &arr[i], arr + i,&arr+i);
	}
	printf("%d ", sizeof(arr[0]));
	printf("%d ", sizeof(arr));
	printf("%d ", sizeof(&arr[0]));
	printf("%d ", sizeof(&arr));
}
