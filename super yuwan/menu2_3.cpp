//menu2_3.cpp
#include <stdio.h>
#include <iostream>
void m2_3_1(void) {//1. if语句——张力轩
	system("cls");     //调用系统命令，清屏
	printf("\n\n    if语句 \n\n  ");
	printf("if语句用于判断条件是否成立\n");
	printf("if语句的格式为：\n");
	printf("if(条件) 语句\n");
	printf("条件为真时，执行语句\n");
	printf("条件为假时，不执行语句\n");
	printf("\n按回车键返回...");
	getchar();
	rewind(stdin);     //清空输入缓冲区
}
void m2_3_2(void) {//2. if-else语句——张力轩
	system("cls");     //调用系统命令，清屏
	printf("\n\n    if-else语句 \n\n  ");
	printf("if-else语句用于判断条件是否成立\n");
	printf("if-else语句的格式为：\n");
	printf("if(条件) 语句1\n");
	printf("else 语句2\n");
	printf("条件为真时，执行语句1\n");
	printf("条件为假时，执行语句2\n");
	printf("\n按回车键返回...");
	getchar();
	rewind(stdin);     //清空输入缓冲区
}
void m2_3_3(void) {//3. if-else if语句——张力轩
	system("cls");     //调用系统命令，清屏
	printf("\n\n    if-else if语句 \n\n  ");
	printf("if-else if语句用于判断条件是否成立\n");
	printf("if-else if语句的格式为：\n");
	printf("if(条件1) 语句1\n");
	printf("else if(条件2) 语句2\n");
	printf("else if(条件3) 语句3\n");
	printf("else 语句4\n");
	printf("条件1为真时，执行语句1\n");
	printf("条件1为假，条件2为真时，执行语句2\n");
	printf("条件1为假，条件2为假，条件3为真时，执行语句3\n");
	printf("条件1为假，条件2为假，条件3为假时，执行语句4\n");
	printf("\n按回车键返回...");
	getchar();
	rewind(stdin);     //清空输入缓冲区
}
void m2_3_4(void) {//4. switch语句——张力轩
	system("cls");     //调用系统命令，清屏
	printf("\n\n    switch语句 \n\n  ");
	printf("switch语句用于判断条件是否成立\n");
	printf("switch语句的格式为：\n");
	printf("switch(表达式) {\n");
	printf("case 常量1: 语句1\n");
	printf("case 常量2: 语句2\n");
	printf("case 常量3: 语句3\n");
	printf("default: 语句4\n");
	printf("}\n");
	printf("表达式的值与常量1、常量2、常量3比较\n");
	printf("若相等，执行语句1\n");
	printf("若相等，执行语句2\n");
	printf("若相等，执行语句3\n");
	printf("若不相等，执行语句4\n");
	printf("\n按回车键返回...");
	getchar();
	rewind(stdin);     //清空输入缓冲区
}