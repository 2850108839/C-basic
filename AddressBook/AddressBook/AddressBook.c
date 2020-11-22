#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int menu() {
	printf("***************************\n");
	printf("1  �����ϵ����Ϣ\n");
	printf("2  ɾ��ָ����ϵ����Ϣ\n");
	printf("3  ����ָ����ϵ����Ϣ\n");
	printf("4  �޸�ָ����ϵ����Ϣ\n");
	printf("5  ��ʾ������ϵ����Ϣ\n");
	printf("6  ���������ϵ��\n");
	printf("0  �˳�\n");
	printf("***************************\n");
	printf("����������ѡ��\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}


//1000���˵���Ϣ��ÿ���˵���Ϣ�������������Ա����䡢�绰��סַ
//����һ���ṹ�壬��ʾһ����ϵ��
typedef struct Person {
	char name[1024];
	char sex[1024];
	char age[1024];
	char tel[1024];
	char address[1024];
}Person;
#define MAX_PERSON 1024
//��ʾͨѶ¼
typedef struct AddressBook {
	Person persons[MAX_PERSON];
	//size���ڿ��Ƶ�ǰͨѶ¼����������
	int size;
}AddressBook;

void init(AddressBook* addressBook) {
	//ͨѶ¼��ʼ��
	//��size��Ϊ0
	addressBook->size = 0;
	//memset(addressBook,0,sizeof(AddressBook))
}

//�����ϵ����Ϣ
void addPerson(AddressBook* addressBook) {
	printf("������ϵ��\n");
	int currentSize = addressBook->size;
	if (currentSize >= MAX_PERSON) {
		printf("ͨѶ¼�Ѿ����ˣ�����ʧ�ܣ�\n");
		return;
	}
	//����һ��ר�ű������ڱ���Ҫ�޸ĵ�Person����
	Person* p = &addressBook->persons[currentSize];
	printf("����������ϵ�˵�������");
	scanf("%s", p->name);
	printf("����������ϵ�˵��Ա�");
		scanf("%s", p->sex);
	printf("����������ϵ�˵����䣺");
    scanf("%s", p->age);
	printf("����������ϵ�˵ĵ绰��");
		scanf("%s", p->tel);
	printf("����������ϵ�˵�סַ��");
		scanf("%s", p->address);
	printf("������ϵ�˳ɹ���\n");
	addressBook->size++;
}

// ɾ��ָ����ϵ����Ϣ
void delPerson(AddressBook* addressBook) {
	printf("ɾ����ϵ��\n");
	printf("������Ҫɾ����ϵ�˵ı�ţ�");
	int id = 0;
	scanf("%d", &id);
	if (id < 0 || id >= addressBook->size) {
		printf("������ı������\n");
		return;
	}
	//ɾ���±�Ϊid��Ԫ��
	if (id == addressBook->size - 1) {
		addressBook->size--;
		printf("��ɾ���ɹ���\n");
		return;
	}
	addressBook->persons[id] = addressBook->persons[addressBook->size - 1];
	addressBook->size--;
	printf("��ɾ���ɹ���\n");
}

//����ָ����ϵ����Ϣ
void findPerson(AddressBook* addressBook) {
	//����������������Ϣ
	printf("��������������ϵ��\n");
	printf("������Ҫ���ҵ�������");
	char name[1024] = { 0 };
	scanf("%s", name);
	for (int i = 0; i < addressBook->size; i++) {
		Person* p = &addressBook->persons[i];
		if (strcmp(name, p->name) == 0) {
			printf("[%d]\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\n", i, p->name, p->sex, p->age, p->tel, p->address);
	     }
	}
}

// �޸�ָ����ϵ����Ϣ
void updatePerson(AddressBook* addressBook) {
	printf("�޸���ϵ��\n");
	printf("������Ҫ�޸���ϵ�˵ı�ţ�");
	int id = 0;
	scanf("%d", &id);
	if (id < 0 || id >= addressBook->size) {
		printf("������ı������\n");
		return;
	}
	int currentSize = addressBook->size;
	Person* p = &addressBook->persons[currentSize];
	printf("�������޸ĺ���ϵ�˵�������");
	scanf("%s", p->name);
	printf("�������޸ĺ���ϵ�˵��Ա�");
	scanf("%s", p->sex);
	printf("�������޸���ϵ�˵����䣺");
	scanf("%d", p->age);
	printf("�������޸ĺ���ϵ�˵ĵ绰��");
	scanf("%s", p->tel);
	printf("�������޸ĺ���ϵ�˵�סַ��");
	scanf("%s", p->address);
	addressBook->size++;
	addressBook->persons[id] = addressBook->persons[addressBook->size - 1];
	addressBook->size--;
	printf("�޸���ϵ�˳ɹ���\n");
}

//��ʾ������ϵ����Ϣ
void printPerson(AddressBook* addressBook) {
	printf("��ӡ������ϵ��\n");
	for (int i = 0; i < addressBook->size; i++) {
		Person* p = &addressBook->persons[i];
		printf("[%d]\t\t%s\t\t%s\t\t%s\t\t%s\t\t%s\n", i,p->name, p->sex, p->age, p->tel, p->address);
	}
	printf("����%d����¼\n", addressBook->size);
}

// ���������ϵ��
void clearPerson(AddressBook* addressBook) {
	memset(addressBook, 0, sizeof(AddressBook));
	printf("��ճɹ���\n");
}

typedef void(*Func)(AddressBook*);
AddressBook addressBook;
int main() {
     //if else����ʱ����ת�Ʊ�
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
	//��ʼ��ͨѶ¼
	init(&addressBook);

	//��ѭ��
	while (1) {
		int choice=menu();
		if (choice < 0 || choice >= sizeof(funcs) / sizeof(funcs[0])) {
			printf("����������Ч��\n");
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