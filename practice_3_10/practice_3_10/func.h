#include<stdio.h>
#include<string.h>

#define MAX 1000
#define name_max 10
#define phone_max 20
#define addr_max 10
void Initial(struct contact *s);
void Del(struct contact *s);
int Add(struct contact *s);
void Show(struct contact *s);
void Seacher(struct contact *s);
struct people
{
	char name[name_max];
	char phone[phone_max];
	char addr[addr_max];
};
struct contact
{
	struct people arr[MAX];
	int sz;
};