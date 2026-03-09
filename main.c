#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>//Sleep()延时函数
#include<stdlib.h>//system(cls)清空函数
#include<string.h>
#include<time.h>
//int main()
//{
	//int a = 1;
	//int b = 1;
	//int n = 0;
	//int ret = 1;
	//int sum = 0;
	//scanf("%d", &n);
	//for (b = 1 ;b <= n; b++)
	//{
	//	for (a = 1; a <= b; a++)
	//	{
	//		ret = ret * a;
	//	}
	//	sum = sum + ret;
	//	ret = 1;
	//}
	//
	//printf("%d\n", sum);
	//return 0;
	// 
	// 
	// 
	// 
	// 查找，二分化
	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//            //0,1,2,3,4,5,6,7,8,9   位置
	//int sz = sizeof(arr) / sizeof(arr[0]); //sz=10
	//int n = 0;
	//scanf("%d", &n);//查找的数
	//int left = 0;
	//int right = sz - 1;
	//while (left<=right)
	//{
	//	int mid = (left + right) / 2;  //mid=4
	//	if (arr[mid] < n)
	//	{
	//		left = mid + 1;
	//	}
	//	else if(arr[mid]>n)
	//	{
	//		right = mid - 1;
	//	}
	//	else
	//	{
	//		printf("找到了，在角标%d", mid);
	//		break;
	//	}
	//}
	//if (left > right)
	//{
	//	printf("找不到");
	//}

	//return 0;

	// 
	// 
	// 延时输出函数hello world！
//int main()
//{
//	char arr1[] = "hello world!";
//	char arr2[] = "************";
//	int left = 0;
//	int right = strlen(arr1) - 1;//right=11
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		printf("%s\n", arr2);
//		Sleep(1000);//延时函数
//		system("cls");
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
// 
// 
// 
// 创建密码确认密码
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	char arr[20] = { 0 };
//	printf("请创建密码：");
//	scanf("%s", password);
//	for (i = 0; i < 3; i++)
//	{
//		printf("请确认密码(剩余%d次机会)：",3-i);
//		scanf("%s", arr);
//		if (strcmp(arr, password) == 0)
//		{
//			printf("密码正确");
//			break;
//		}
//	}
//	if (i == 3)
//		printf("三次机会用光");
//	return 0;
//}

//猜数字游戏
void menu()
{
	printf("1.开始游戏\n");
	printf("0.退出游戏\n");
}
void game()
{
	
	int ret = rand()%100+1;//随机数1-99
	int cai = 0;
	/*printf("%d\n", ret);*/
	printf("请输入数字：\n");
	
	while (1)
	{
		scanf("%d", &cai);
		if (cai < ret)
			printf("猜小了\n");
		else if (cai > ret)
			printf("猜大了\n");
		else
		{
			printf("猜对了\n");
			break;
		}
	}
	
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//目录
	do
	{
		//目录
		
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
		}
				

	} while (input);

	return 0;
}

	
