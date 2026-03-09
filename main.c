#define _CRT_SECURE_NO_WARNINGS
//#define MAX 100
//#define Str "asdfg"
//#include<stdio.h>
//
//enum color
//{
//	red,
//	blue,
//	green
//};
//int main()
//{
//	//const int a = 10;
//	//a = 20;
//	//printf("%d\n", a);
//	//const int a = 10;    \\err
//	//int arr[a] = { 10 }; \\err
//	//printf("%d\n", MAX);
//	//int a = MAX;
//	//printf("%d\n", a);
//	//char b = Str[0];
//
//	//printf("%s\n", Str);
//	//printf("%c\n", b);
//	enum color r = red;
//
//	return 0;
//}
//#include<stdio.h>
////#include<string.h>
//int main()
//{
//	//char arr1[7] = "abcdef";
//	//char arr2[7] = { 'a','b','c','d','e','f','\0'};
//	//printf("%c\n", arr1[1]);
//	//printf("%zu\n", strlen(arr2));
//	printf("%d",120);
//
//	return 0;
//
//}
//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	printf("1 or 2 ?\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("true\n");
//		return 0;
//
//	}
//	else
//	{
//		printf("false\n");
//		return 0;
//
//	}
//
//}
//int main()
//{
//	int line = 0;
//	while (line<20)
//	{
//		
//		printf("写了%d行代码\n",line);
//		line++;
//	}
//	if (line >=20)
//	{
//		printf("恭喜！\n");
//	}
//	else
//	{
//		printf("kexi...\n");
//	}
//	return 0;
//
//}
//#include<stdio.h>
//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//int main()
//{
//	/*int i = 0;
//	while (i < 10)
//	{
//		printf("%d ",arr[i]);
//		i++;
//	}*/
//	printf("abcd\nef");
//	return 0;
//}
#include<stdio.h>
int Max(int x, int y)
{
	if (x < y)
		return y;
	else
		return x;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int c = Max(a, b);
	printf("%d\n", c);
	return 0;
}
