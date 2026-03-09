#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int age = 0;
//
//	scanf("%d", &age);//取地址符&
//	if (age < 18)
//		printf("未成年\n");
//	else if (age > 70)
//		printf("老年人\n");
//	else
//		printf("中年人\n");
//	return 0;
//}
//int main()
//{
//	//int a = 0;
//	//scanf("%d", &a);
//	//if (a % 2 == 1)
//	//	printf("奇数");
//	//else
//	//	printf("偶数");
//	//return 0;
//	int a = 0;//初始化
//	while (a < 100)
//	{
//		if (a % 2 == 1)
//		{
//			printf("%d ", a);
//			a++;
//		}
//		else
//			a++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	/*scanf("%d", &a);*/
//	if (scanf("%d", &a) == 1) 
//	{
//		switch (a)         //指定整形
//		{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("工作日\n");
//			break;
//		case 6:
//		case 7:
//			printf("休息日\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//	}
//	else
//		printf("输入格式错误！请输入整数。\n");
//	
//	return 0;
//}
int main()
{
	int a = 0;
	while (a <= 10)
	{
		a++;
		if (a == 5)
			continue;
		printf("%d ", a);
		
	}
	return 0;
}