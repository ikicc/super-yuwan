//menu2_2.cpp
#include <stdio.h>
#include <iostream>
/*
void dispMenu2_2() {
	local(4, 20);  printf("C˳��ṹ���\n");
	local(1, 24);  printf("1. ��ʽ�����ʽ��\n");
	colum_n(24);  printf("2. ��������scanf()\n");
	colum_n(24);  printf("3. ��Ļ���printf()\n");
	colum_n(24);  printf("4. ���������\n");
	colum_n(24);  printf("5. �߼������\n");

	local(2, 24);  printf("0. ����\n");
	local(2, 20);  printf("��ѡ��");

}
*/
//��˳���������֪ʶ��
/*
void m2_1_1(void) {    //1. ���ݷ���

	system("cls");     //����ϵͳ�������
	printf("\n\n    C���ݷ��� \n\n  ");
	printf("��Ϊ ���� int ,ʵ�� float���ַ��� char\n");
	printf("\t  int�ַ�Ϊ short��int��long \n");
	printf(" ÿ�������ַ�Ϊ signed��unsigned \n");
	printf("������ϸ��������\n");
	printf("\n���س�������...");
	getchar();
	rewind(stdin);     //������뻺����
	//getchar();
	//rewind(stdin);*/
void m2_2_1(void) {    //1. ��ʽ�����ʽ��
	system("cls");     //����ϵͳ�������
	printf("\n\n    ��ʽ�����ʽ�� \n\n  ");
	printf("��ʽ����\n");
	printf("%%d  %%f  %%c  %%s  %%e  %%g  %%o  %%x  %%p  %%u\n");
	printf("��ʽ����\n");
	printf("%%d  %%f  %%c  %%s  %%e  %%g  %%o  %%x  %%p  %%u\n");
	printf("\n���س�������...");
	getchar();
	rewind(stdin);     //������뻺����
}
void m2_2_2(void) {    //2. ��������scanf()
	system("cls");     //����ϵͳ�������
	printf("\n\n    ��������scanf() \n\n  ");
	printf("scanf(\"%%d\",&a);  //��������\n");
	printf("scanf(\"%%f\",&b);  //����ʵ��\n");
	printf("scanf(\"%%c\",&c);  //�����ַ�\n");
	printf("scanf(\"%%s\",&s);  //�����ַ���\n");
	printf("\n���س�������...");
	getchar();
	rewind(stdin);     //������뻺����
}
void m2_2_3(void) {    //3. ��Ļ���printf()
	system("cls");     //����ϵͳ�������
	printf("\n\n    ��Ļ���printf() \n\n  ");
	printf("printf(\"%%d\",a);  //�������\n");
	printf("printf(\"%%f\",b);  //���ʵ��\n");
	printf("printf(\"%%c\",c);  //����ַ�\n");
	printf("printf(\"%%s\",s);  //����ַ���\n");
	printf("\n���س�������...");
	getchar();
	rewind(stdin);     //������뻺����
}
void m2_2_4(void) {    //4. ���������
	system("cls");     //����ϵͳ�������
	printf("\n\n    ��������� \n\n  ");
	printf(" +  -  *  /  %%  ++  --\n");
	printf("\n���س�������...");
	getchar();
	rewind(stdin);     //������뻺����
}
void m2_2_5(void) {    //5. �߼������
	system("cls");     //����ϵͳ�������
	printf("\n\n    �߼������ \n\n  ");
	printf(" &&  ||  !  >  <  ==  !=  >=  <=\n");
	printf("\n���س�������...");
	getchar();
	rewind(stdin);     //������뻺����
}


