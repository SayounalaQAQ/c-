#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//1.实现字符串反转：
//
//void test(char *arr,int len)
//{
//	int i = 0;
//	//if (len % 2 == 1)
//	//{
//	//	for (i = 0; i < len/2+1; i++)
//	//	{
//	//		if (arr[i] != '\0')
//	//			arr[i] = arr[len - i-1];
//	//	}
//	//}
//	//if (len % 2 == 0)
//	//{
//	//	for (i = 0; i < len / 2 ; i++)
//	//	{
//	//		if (arr[i] != '\0')
//	//			arr[i] = arr[len - i-1];
//	//	}
//	//}
//	for (i = 0; i < len / 2 ; i++)
//	{
//		char arr2 = arr[i];
//		arr[i] = arr[len - 1 - i];
//		arr[len - 1 - i] = arr2;
//	}
//}
//	
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", arr);
//	int len = strlen(arr);
//	test(arr,len);
//	printf("%s\n", arr);
//	return 0;
//}


//2.单链表反转
//单链表是指数组差不多的作用但是插入删除快
//struct age
//{
//	int age;
//	struct age* next;
//};//这个结构体占4+4=8个字节
//struct age* fanzhuan(struct age* p)
//{
//	struct age* a = NULL;
//	struct age* c;
//	while (p!=NULL)
//	{
//		c = p->next;//c --n2               c--n3               c--n4
//		p->next = a;//n1->next --null      n2-->next --n1      n3->next --n2
//		a = p;      //a --n1               a--n2               a--n3
//		p = c;      //p --n2               p--n3               p--n4
//	}
//	return a;
//}
//void print(struct age* n)
//{
//	struct age* p = n;
//	while (p != NULL)
//	{
//		printf("age=%d  ", p->age);
//		p = p->next;
//	}
//	printf("%c",'\n');
//}
//int main()
//{
//	struct age *n1, *n2, *n3; //定义三个结构体的指针
//	n1 = (struct age*)malloc(sizeof(struct age));
//	n2 = (struct age*)malloc(sizeof(struct age));
//	n3 = (struct age*)malloc(sizeof(struct age));
//	n1->age = 16;
//	n2->age = 18;
//	n3->age = 20;
//	n1->next = n2;
//	n2->next = n3;
//	n3->next = NULL;
//	//反转之前
//	print(n1);
//	//反转
//	struct age* p=fanzhuan(n1);
//	print(p);
//	return 0;
//}

//3.统计一个整数二进制里有多少个 1
//关键点：n & n-1 结果为二进制少后边一个n
//int cnt(int n)
//{
//	int count = 0;
//	while (n!=0)
//	{
//		count++;
//		n &= n - 1;     //7:0111   6:0110  111&110=110   5:101  101&110=100  
//	}
//	return(count);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d 的二进制里有 %d 个1",n,cnt(n));
//	return 0;
//}


//4.在有序数组中找目标值，返回下标，找不到返回 - 1。
//有顺序的数组，用二分法
int find(int* arr,int sz,int n)
{
	int left = 0;
	int right = sz - 1;
	while (left<=right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < n)
			left = mid + 1;
		else if (arr[mid] > n)
			right = mid - 1;
		else
			return mid;
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int n = 1;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int s = find(arr, sz, n);
	if (s == -1)
	{
		printf("找不到");
	}
	else
	{
		printf("下标为%d", s);
	}

	return 0;
}
