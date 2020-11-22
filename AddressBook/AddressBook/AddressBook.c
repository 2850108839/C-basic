#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int menu() {
	printf("***************************\n");
	printf("1  添加联系人信息\n");
	printf("2  删除指定联系人信息\n");
	printf("3  查找指定联系人信息\n");
	printf("4  修改指定联系人信息\n");
	printf("5  显示所有联系人信息\n");
	printf("6  清空所有联系人\n");
	printf("0  退出\n");
	printf("***************************\n");
	printf("请输入您的选择：\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}


//1000个人的信息，每个人的信息包括：姓名、性别、年龄、电话、住址
//创建一个结构体，表示一个联系人
typedef struct Person {
	char name[1024];
	char sex[1024];
	char age[1024];
	char tel[1024];
	char address[1024];
}Person;
#define MAX_PERSON 1024
//表示通讯录
typedef struct AddressBook {
	Person persons[MAX_PERSON];
	//size用于控制当前通讯录中已有人数
	int size;
}AddressBook;

void init(AddressBook* addressBook) {
	//通讯录初始化
	//将size设为0
	addressBook->size = 0;
	//memset(addressBook,0,sizeof(AddressBook))
}

//添加联系人信息
void addPerson(AddressBook* addressBook) {
	printf("新增联系人\n");
	int currentSize = addressBook->size;
	if (currentSize >= MAX_PERSON) {
		printf("通讯录已经满了，新增失败！\n");
		return;
	}
	//创建一个专门变量用于保存要修改的Person变量
	Person* p = &addressBook->persons[currentSize];
	printf("请输入新联系人的姓名：");
	scanf("%s", p->name);
	printf("请输入新联系人的性别：");
		scanf("%s", p->sex);
	printf("请输入新联系人的年龄：");
    scanf("%s", p->age);
	printf("请输入新联系人的电话：");
		scanf("%s", p->tel);
	printf("请输入新联系人的住址：");
		scanf("%s", p->address);
	printf("新增联系人成功！\n");
	addressBook->size++;
}

// 删除指定联系人信息
void delPerson(AddressBook* addressBook) {
	printf("删除联系人\n");
	printf("请输入要删除联系人的编号：");
	int id = 0;
	scanf("%d", &id);
	if (id < 0 || id >= addressBook->size) {
		printf("您输入的编号有误！\n");
		return;
	}
	//删除下标为id的元素
	if (id == addressBook->size - 1) {
		addressBook->size--;
		printf("您删除成功！\n");
		return;
	}
	addressBook->persons[id] = addressBook->persons[addressBook->size - 1];
	addressBook->size--;
	printf("您删除成功！\n");
}

//查找指定联系人信息
void findPerson(AddressBook* addressBook) {
	//根据姓名查其他信息
	printf("按照姓名查找联系人\n");
	printf("请输入要查找的姓名：");
	char name[1024] = { 0 };
	scanf("%s", name);
	for (int i = 0; i < addressBook->size; i++) {
		Person* p = &addressBook->persons[i];
		if (strcmp(name, p->name) == 0) {
			printf("[%d]\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\n", i, p->name, p->sex, p->age, p->tel, p->address);
	     }
	}
}

// 修改指定联系人信息
void updatePerson(AddressBook* addressBook) {
	printf("修改联系人\n");
	printf("请输入要修改联系人的编号：");
	int id = 0;
	scanf("%d", &id);
	if (id < 0 || id >= addressBook->size) {
		printf("您输入的编号有误！\n");
		return;
	}
	int currentSize = addressBook->size;
	Person* p = &addressBook->persons[currentSize];
	printf("请输入修改后联系人的姓名：");
	scanf("%s", p->name);
	printf("请输入修改后联系人的性别：");
	scanf("%s", p->sex);
	printf("请输入修改联系人的年龄：");
	scanf("%d", p->age);
	printf("请输入修改后联系人的电话：");
	scanf("%s", p->tel);
	printf("请输入修改后联系人的住址：");
	scanf("%s", p->address);
	addressBook->size++;
	addressBook->persons[id] = addressBook->persons[addressBook->size - 1];
	addressBook->size--;
	printf("修改联系人成功！\n");
}

//显示所有联系人信息
void printPerson(AddressBook* addressBook) {
	printf("打印所有联系人\n");
	for (int i = 0; i < addressBook->size; i++) {
		Person* p = &addressBook->persons[i];
		printf("[%d]\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\n", i,p->name, p->sex, p->age, p->tel, p->address);
	}
	printf("共计%d条记录\n", addressBook->size);
}

// 清空所有联系人
void clearPerson(AddressBook* addressBook) {
	memset(addressBook, 0, sizeof(AddressBook));
	printf("清空成功！\n");
}

typedef void(*Func)(AddressBook*);
AddressBook addressBook;
int main() {
     //if else过多时，用转移表
	Func funcs[] = {
	NULL,
	addPerson,
	delPerson,
	findPerson,
	updatePerson,
	printPerson,
	clearPerson,
	sortPerson,
	};
	//初始化通讯录
	init(&addressBook);

	//主循环
	while (1) {
		int choice=menu();
		if (choice < 0 || choice >= sizeof(funcs) / sizeof(funcs[0])) {
			printf("您的输入无效！\n");
			continue;
		}
		if (choice == 0) {
			printf("GOODBEY\n");
			break;
		}
		
		funcs[choice](&addressBook);
	}
	system("pause");
	return 0;
}