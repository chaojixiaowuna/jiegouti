//枚举 就是列举 是一种类型
//C语言的源代码——》预编译——》编译——》链接——》可执行程序
//enum color
//{
//	red,
//	green,
//	blue
//};
//联合（共用体）
//联合也是一种特殊的自定义类型，这种类型定义的变量
//也包括一系列的成员，特征是这些成员共用一块空间

//联合-联合体-共用体
//#include<stdio.h>
//union un
//{
//	char c;
//	int i;//i和c共用一块空间 地址相同 不能同时使用
//};
//int main()
//{
//	union un u;
//	printf("%d\n",sizeof(u));
//	return 0;
//}

//大小端判断
#include<stdio.h>
int judge()
{
	union un
	{
		int i;
		char c;
	}u;
	u.i=1;
	return u.c;
}
int main()
{
	int ret=judge();
	if(ret==1)
		printf("小端");
	else
		printf("大端");
	return 0;
}

