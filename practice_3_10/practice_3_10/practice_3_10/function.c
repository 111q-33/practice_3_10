#define _CRT_SECURE_NO_WARNINGS
#include"func.h"
void Show(struct contact *s)
{
	if (s->sz!=0)
	{
		printf("%-15s\t%-15s\t%-15s\n", "����", "�绰", "��ַ");
		int n = s->sz;
		int i = 0;
		for (i = 0; i < n ; i++)
		{
			printf("%-15s\t", (s->arr[i].name));
			printf("%-15s\t", (s->arr[i].phone));
			printf("%-15s\t\n", (s->arr[i].addr));
		}
	}
	return;
}
int Find(char*a,struct contact *s)
{
	int i = 0;
	int n = s->sz;
	for (i = 0; i < n; i++)
	{
		if (strcmp(a, s->arr[i].name) == 0)
			return i;
	}
	return -1;
}
void Initial(struct contact *s)
{
	s->sz = 0;
	memset(s->arr, 0, sizeof(s->arr));
}
int Add(struct contact *s)
{
	if (MAX == s->sz)
	{
		printf("ͨѶ¼������\n");
		return 0;
	}
	int n = s->sz;
	printf("������:\n");
	printf("���������֡�\n");
	scanf("%s", &(s->arr[n].name));
	printf("������绰��\n");
	scanf("%s", &(s->arr[n].phone));
	printf("������סַ��\n");
	scanf("%s", &(s->arr[n].addr));
	s->sz++;
	return 0;
}



void Del(struct contact *s)
{
	int n = 0;
	if (0 == s->sz)
	{
		printf("ͨѶ¼û�ˡ�\n");
		return;
	}
	else
	{
		printf("������Ҫɾ��������\n");
		char sname[10];
		scanf("%s", sname);
		n = Find(sname, s);
		if (n < 0)
		{
			printf("�����ڴ��ˡ�\n");
			return;
		}
		else
		{
			for (; n < s->sz - 1; n++)
			{
				s->arr[n] = s->arr[n + 1];
			}
			s->sz--;
		}
	}
	return;
}
void Seacher(struct contact *s)
{
	if (s->sz == 0)
	{
		printf("�ȼӼ��˰ɡ�\n");
		return ;
	}
	printf("����������\n");
	char sname[10];
	scanf("%s", sname);
	int n = Find(sname, s);
	if (n >= 0)
	{
		printf("%-15s\t%-15s\t%s-15\n", "����", "�绰", "��ַ");
		printf("%-15s\t", (s->arr[n].name));
		printf("%-15s\t", (s->arr[n].phone));
		printf("%-15s\t\n", (s->arr[n].addr));
		return;
	}
	printf("���޴���\n");
	return;
}