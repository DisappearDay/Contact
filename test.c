#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"



//
// 名字   年龄   性别   电话    住址
// 
// 
// 
// 
//

void menu(void) {
	printf("************************************\n");
	printf("****** 1. add        2. del    *****\n");
	printf("****** 3. search     4. modify *****\n");
	printf("****** 5. show       6. print  *****\n");
	printf("****** 0. exit                 *****\n");
	printf("************************************\n");
}

int main() {
	int input = 0;
	struct Contact con;
	init_contact(&con);

	do
	{
		menu();
		printf("请选择 :> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			Add_Contract(&con);
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			Show_Contact(&con);
		case 6:
			break;
		case 0:
			break;
		default:
			printf("输入错误，请输入正确的值");
			break;
		}

	} while (input);


	return 0;
}
