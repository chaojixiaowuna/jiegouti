//ö�� �����о� ��һ������
//C���Ե�Դ���롪����Ԥ���롪�������롪�������ӡ�������ִ�г���
//enum color
//{
//	red,
//	green,
//	blue
//};
//���ϣ������壩
//����Ҳ��һ��������Զ������ͣ��������Ͷ���ı���
//Ҳ����һϵ�еĳ�Ա����������Щ��Ա����һ��ռ�

//����-������-������
//#include<stdio.h>
//union un
//{
//	char c;
//	int i;//i��c����һ��ռ� ��ַ��ͬ ����ͬʱʹ��
//};
//int main()
//{
//	union un u;
//	printf("%d\n",sizeof(u));
//	return 0;
//}

//��С���ж�
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
		printf("С��");
	else
		printf("���");
	return 0;
}

