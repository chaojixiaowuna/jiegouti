//结构体自引用 必须引用指针 引用同一类型的结构体变量会报错
//#include<stdio.h>
//struct node
//{
//	char a;
//	struct node* pa;
//}pa;
//int main()
//{
//	struct node a;
//	return 0;
//} 
//结构体内存对齐
//第一个成员在与结构体变量偏移量为0的地址处
//其他成员变量要对其到某个数字（对齐数）的整数倍的地址处
//对齐数=编译器默认的一个对齐数与该成员大小的较小值//gcc没有默认对齐数
//VS中默认的值为8
//结构体总大小为最大对齐数（每个成员变量都有一个对齐数）的整数倍
//如果嵌套了结构体的情况，嵌套的结构体对齐到自己的最大对齐数的整数倍处，结构体的
//整体大小就是所有最大对齐数（含嵌套结构体的对齐数）的整数倍

//#pragma pack(4)
////设置默认对齐数为4
//
//#pragma pack()
////取消设置的默认对齐数


//offsetof 返回成员变量相对于起始位置的偏移量
//#include<stdio.h>
//#include<stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//int main()
//{
//	printf("%d\n",offsetof(struct S,c));
//	printf("%d\n",offsetof(struct S,i));
//	printf("%d\n",offsetof(struct S,d));
//	return 0;
//}

//#include<stdio.h>
//void move(int a[5],int b)
//{
//	int i;
//	b=74751;
//	for(i=0;i<5;i++)
//	{
//		a[i]=0;
//	}
//}
//int main()
//{
//	int a[5]={1,2,3,4,5};
//	int i=0;
//    move(a,i);
//	for(i=0;i<5;i++)
//	{
//		printf("%d",a[i]);
//	}
//	return 0;
//}
//位段
//位段的声明和结构是类似的，有两个不同
//位段的成员必须是相同的类型，int unsigned int 或 signed int 
//位段的成员名后面有一个冒号和一个数字
//#include<stdio.h>
// struct a
//{
//	int _a:2;
//	int _b:5;
//	int _c:10;//占用几个比特位
//	int _d:30;//按整型 一次分配4个字节 32个比特位
//}; 
// int main()
// {
//	 struct a s;
//	 printf("%d\n",sizeof(s));
//	 return 0;
// }