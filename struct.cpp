//�ṹ�������� ��������ָ�� ����ͬһ���͵Ľṹ������ᱨ��
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
//�ṹ���ڴ����
//��һ����Ա����ṹ�����ƫ����Ϊ0�ĵ�ַ��
//������Ա����Ҫ���䵽ĳ�����֣������������������ĵ�ַ��
//������=������Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ//gccû��Ĭ�϶�����
//VS��Ĭ�ϵ�ֵΪ8
//�ṹ���ܴ�СΪ����������ÿ����Ա��������һ������������������
//���Ƕ���˽ṹ��������Ƕ�׵Ľṹ����뵽�Լ������������������������ṹ���
//�����С��������������������Ƕ�׽ṹ��Ķ���������������

//#pragma pack(4)
////����Ĭ�϶�����Ϊ4
//
//#pragma pack()
////ȡ�����õ�Ĭ�϶�����


//offsetof ���س�Ա�����������ʼλ�õ�ƫ����
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
//λ��
//λ�ε������ͽṹ�����Ƶģ���������ͬ
//λ�εĳ�Ա��������ͬ�����ͣ�int unsigned int �� signed int 
//λ�εĳ�Ա��������һ��ð�ź�һ������
//#include<stdio.h>
// struct a
//{
//	int _a:2;
//	int _b:5;
//	int _c:10;//ռ�ü�������λ
//	int _d:30;//������ һ�η���4���ֽ� 32������λ
//}; 
// int main()
// {
//	 struct a s;
//	 printf("%d\n",sizeof(s));
//	 return 0;
// }