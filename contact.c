#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"


void init_contact(struct Contact* str) {
	memset(str->data, 0, sizeof(str->data));
	str->size = 0;
}

void Add_Contract(struct Contact* str) {
	
	if (str->size == 1000) 
	{
		printf("该通讯录已满，不能再录入信息");
	}
	else 
	{
		printf("请输入 姓名:");
		scanf("%s", str->data[str->size].name);
		printf("请输入 年龄:");
		scanf("%d", &(str->data[str->size].age));
		printf("请输入 性别:");
		scanf("%s", str->data[str->size].sex);
		printf("请输入 电话:");
		scanf("%s", str->data[str->size].tele);
		printf("请输入 住址:");
		scanf("%s", str->data[str->size].adress);
		str->size++;
		printf("添加成功\n");
	}
	
}


void Show_Contact(struct Contact* str) 
{
	int i = 0;
	if (str->size == 0) 
	{
		printf("该通讯录为空！\n");
	}
	else 
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\t\n", "姓名", "年龄", "性别", "电话", "住址");
		for (i = 0; i < str->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\t\n",
				(str->data)[i].name, 
				(str->data)[i].age, 
				(str->data)[i].sex, 
				(str->data)[i].tele, 
				(str->data)[i].adress);
		}
	}
	
	
}
