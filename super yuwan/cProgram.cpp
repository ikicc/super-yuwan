//cProgrammSys.cpp
#include <iostream>
#include <stdio.h>

void local(int, int);

void lines_m(int);
void colum_n(int);

void mainMenu(void) {
	local(4, 20);  printf("C编程演示系统\n");
	local(1, 24);  printf("1. C基本数据\n");
	colum_n(24);  printf("2. 顺序结构\n");
	colum_n(24);  printf("3. 分枝结构\n");
	colum_n(24);  printf("4. 循环结构\n");
	colum_n(24);  printf("5. 函数结构\n");
	colum_n(24);  printf("6. 数组结构\n");
	colum_n(24);  printf("7. 指针结构\n");

	local(2, 24);  printf("0. 结束\n");
	local(2, 20);  printf("请选择：");
}
void local(int m, int n) {
for (int i = 0; i < m; i++)  printf("\n");
	for (int i = 0; i < n; i++)  printf(" ");
}
void lines_m(int m) {
for (int i = 0; i < m; i++)  printf("\n");
}
void colum_n(int n) {
for (int i = 0; i < n; i++)  printf(" ");
}
//=============================
void dispMenu2_1(void) {
	local(2, 20);  printf("C基本数据功能\n");
	local(1, 24);  printf("1. 数据分类\n");
	colum_n(24);  printf("2. 取值范围\n");
	colum_n(24);  printf("3. 存储字节\n");
	colum_n(24);  printf("4. 算术算符\n");
	colum_n(24);  printf("5. 类型转换\n");
	colum_n(24);  printf("6. I/O类型控制\n");
	colum_n(24);  printf("7. printf()函数\n");
	colum_n(24);  printf("8. scanf()函数\n");
	colum_n(24);  printf("9. 字符I/O\n");

	local(2, 24);  printf("0. 返回\n");
	local(2, 20);  printf("请选择：");
}

#include "menu2_1.h" 

void menu2_1(void) {
	char cho2_1;
	while (1) {
		system("cls");     //调用系统命令，清屏
		dispMenu2_1();
		cho2_1 = getchar();     getchar();//??
		if (cho2_1 == '0') break;
		switch (cho2_1)
		{
		case '1': m2_1_1();     break;
		case '2': m2_1_2();     break;
		case '3': m2_1_3();     break;
		case '4': m2_1_4();     break;
		case '5': m2_1_5();     break;
		case '6': m2_1_6();     break;
		case '7': m2_1_7();     break;
		case '8': m2_1_8();     break;
		case '9': m2_1_9();     break;


		default:       break;
		}
	}
}
//================================ 
void dispMenu2_2() {
	local(4, 20);  printf("C顺序结构编程\n");
	local(1, 24);  printf("1. 格式符与格式串\n");
	colum_n(24);  printf("2. 键盘输入scanf()\n");
    colum_n(24);  printf("3. 屏幕输出printf()\n");
    colum_n(24);  printf("4. 算术运算符\n");
    colum_n(24);  printf("5. 逻辑运算符\n");

	//…… 
	local(2, 24);  printf("0. 返回\n");
	local(2, 20);  printf("请选择：");

}
#include "menu2_2.h"



void menu2_2(void) {
	char cho2_2;
	while (1) {
		system("cls");     //调用系统命令，清屏
		dispMenu2_2();
		cho2_2 = getchar();     getchar();//??
		if (cho2_2 == '0') break;
		switch (cho2_2)
		{
		case '1':  m2_2_1();     break;
		case '2':  m2_2_2();     break;
		case '3':  m2_2_3();     break;
		case '4':  m2_2_4();     break;
		case '5':  m2_2_5();     break;


		default:   break;
		}
	}
}
//=============================
void dispMenu2_3() {
	local(4, 20);  printf("C分枝结构编程\n");
	local(1, 24);  printf("1.  if语句\n");
	colum_n(24);  printf("2. if-else语句\n");
	colum_n(24);  printf("3. if-else if语句\n");
	colum_n(24);  printf("4. switch语句\n");

	//…… 
	local(2, 24);  printf("0. 返回\n");
	local(2, 20);  printf("请选择：");

}
#include "menu2_3.h"



void menu2_3(void) {
	char cho2_3;
	while (1) {
		system("cls");     //调用系统命令，清屏
		dispMenu2_3();
		cho2_3 = getchar();     getchar();//??
		if (cho2_3 == '0') break;
		switch (cho2_3)
		{
		case '1':  m2_3_1();     break;
		case '2':  m2_3_2();     break;
		case '3':  m2_3_3();     break;
		case '4':  m2_3_4();     break;


		default:   break;
		}
	}
}
//=============================
void dispMenu2_4() {
	local(4, 20);  printf("C循环结构编程\n");
	local(1, 24);  printf("1.  while语句\n");
	colum_n(24);  printf("2. do-while语句\n");
	colum_n(24);  printf("3. for语句\n");
	colum_n(24);  printf("4. break语句\n");
	colum_n(24);  printf("5. continue语句\n");

	//…… 
	local(2, 24);  printf("0. 返回\n");
	local(2, 20);  printf("请选择：");

}
#include "menu2_4.h"
void menu2_4(void) {
	char cho2_4;
	while (1) {
		system("cls");     //调用系统命令，清屏
		dispMenu2_4();
		cho2_4 = getchar();     getchar();//??
		if (cho2_4 == '0') break;
		switch (cho2_4)
		{
		case '1':  m2_4_1();     break;
		case '2':  m2_4_2();     break;
		case '3':  m2_4_3();     break;
		case '4':  m2_4_4();     break;
		case '5':  m2_4_5();     break;


		default:   break;
		}
	}
}
//=============================
void dispMenu2_5() {
	local(4, 20);  printf("5. 函数结构\n");
	local(1, 24);  printf("1. 函数的定义\n");
	colum_n(24);  printf("2. 函数的调用\n");
	colum_n(24);  printf("3. 函数的参数传递\n");
	colum_n(24);  printf("4. 函数的返回值\n");
	colum_n(24);  printf("5. 函数的递归调用\n");

    //……
	local(2, 24);  printf("0. 返回\n");
	local(2, 20);  printf("请选择：");

}
#include "menu2_5.h"
void menu2_5(void) {
	char cho2_5;
	while (1) {
		system("cls");     //调用系统命令，清屏
		dispMenu2_5();
		cho2_5 = getchar();     getchar();//??
		if (cho2_5 == '0') break;
		switch (cho2_5)
		{
		case '1':  m2_5_1();     break;
		case '2':  m2_5_2();     break;
		case '3':  m2_5_3();     break;
		case '4':  m2_5_4();     break;
		case '5':  m2_5_5();     break;


		default:   break;
		}
	}
}
//=============================
void dispMenu2_6() {
	local(4, 20);  printf("6. 数组结构\n");
	local(1, 24);  printf("1. 一维数组\n");
	colum_n(24);  printf("2. 二维数组\n");
	colum_n(24);  printf("3. 字符数组\n");
	colum_n(24);  printf("4. 字符串数组\n");
	//……
	local(2, 24);  printf("0. 返回\n");
	local(2, 20);  printf("请选择：");


}
#include "menu2_6.h"
void menu2_6(void) {
	char cho2_6;
	while (1) {
		system("cls");     //调用系统命令，清屏
		dispMenu2_6();
		cho2_6 = getchar();     getchar();//??
		if (cho2_6 == '0') break;
		switch (cho2_6)
		{
		case '1':  m2_6_1();     break;
		case '2':  m2_6_2();     break;
		case '3':  m2_6_3();     break;
		case '4':  m2_6_4();     break;
		case '5':  m2_6_5();     break;
		}
	}
}
//=============================
void dispMenu2_7() {
	local(4, 20);  printf("指针结构\n");
	local(1, 24);  printf("1. 指针的定义\n");
	colum_n(24);  printf("2. 指针的运算\n");
	colum_n(24);  printf("3. 指针与数组\n");
	colum_n(24);  printf("4. 指针与函数\n");
	




	//…… 
	local(2, 24);  printf("0. 返回\n");
	local(2, 20);  printf("请选择：");

}
#include "menu2_7.h"
void menu2_7(void) {
	char cho2_7;
	while (1) {
		system("cls");     //调用系统命令，清屏
		dispMenu2_7();
		cho2_7 = getchar();     getchar();//??
		if (cho2_7 == '0') break;
		switch (cho2_7)
		{
		case '1':  m2_7_1();     break;
		case '2':  m2_7_2();     break;
		case '3':  m2_7_3();     break;
		case '4':  m2_7_4();     break;
		}
	}
}