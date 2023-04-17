#pragma once
#define NAME_MAX 20
#define SEX_MAX 5
#define ADRESS_MAX 15
#define TELE_MAX 15
#define MAX 1000




#include <stdio.h>
#include <string.h>




struct PeoInfo
{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char adress[ADRESS_MAX];
	
};

struct Contact
{
	struct PeoInfo data[MAX];
	int size;
};



void init_contact(struct Contact* str);
void Add_Contract(struct Contact* str);
void Show_Contact(struct Contact* str);
