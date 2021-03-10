#define _CRT_SECURE_NO_WARNINGS
#include"func.h"
void Show(struct contact *s)
{
	if (s->sz!=0)
	{
		printf("%-15s\t%-15s\t%-15s\n", "名字", "电话", "地址");
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
		printf("通讯录已满。\n");
		return 0;
	}
	int n = s->sz;
	printf("请输入:\n");
	printf("请输入名字。\n");
	scanf("%s", &(s->arr[n].name));
	printf("请输入电话。\n");
	scanf("%s", &(s->arr[n].phone));
	printf("请输入住址。\n");
	scanf("%s", &(s->arr[n].addr));
	s->sz++;
	return 0;
}



void Del(struct contact *s)
{
	int n = 0;
	if (0 == s->sz)
	{
		printf("通讯录没人。\n");
		return;
	}
	else
	{
		printf("请输入要删除的名字\n");
		char sname[10];
		scanf("%s", sname);
		n = Find(sname, s);
		if (n < 0)
		{
			printf("不存在此人。\n");
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
		printf("先加加人吧。\n");
		return ;
	}
	printf("请输入人名\n");
	char sname[10];
	scanf("%s", sname);
	int n = Find(sname, s);
	if (n >= 0)
	{
		printf("%-15s\t%-15s\t%s-15\n", "名字", "电话", "地址");
		printf("%-15s\t", (s->arr[n].name));
		printf("%-15s\t", (s->arr[n].phone));
		printf("%-15s\t\n", (s->arr[n].addr));
		return;
	}
	printf("查无此人\n");
	return;
}