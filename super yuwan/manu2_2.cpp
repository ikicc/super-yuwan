//menu2_2.cpp
#include <stdio.h>
#include <iostream>
/*
void dispMenu2_2() {
	local(4, 20);  printf("C顺序结构编程\n");
	local(1, 24);  printf("1. 格式符与格式串\n");
	colum_n(24);  printf("2. 键盘输入scanf()\n");
	colum_n(24);  printf("3. 屏幕输出printf()\n");
	colum_n(24);  printf("4. 算术运算符\n");
	colum_n(24);  printf("5. 逻辑运算符\n");

	local(2, 24);  printf("0. 返回\n");
	local(2, 20);  printf("请选择：");

}
*/
//按顺序介绍以上知识点
/*
void m2_1_1(void) {    //1. 数据分类

	system("cls");     //调用系统命令，清屏
	printf("\n\n    C数据分类 \n\n  ");
	printf("分为 整形 int ,实型 float，字符型 char\n");
	printf("\t  int又分为 short、int、long \n");
	printf(" 每种整形又分为 signed和unsigned \n");
	printf("故整形细分有六种\n");
	printf("\n按回车键返回...");
	getchar();
	rewind(stdin);     //清空输入缓冲区
	//getchar();
	//rewind(stdin);*/
void m2_2_1(void) {    //1. 格式符与格式串
	system("cls");     //调用系统命令，清屏
	printf("\n\n    格式符与格式串 \n\n  ");
	printf("格式符：\n");
	printf("%%d  %%f  %%c  %%s  %%e  %%g  %%o  %%x  %%p  %%u\n");
	printf("格式串：\n");
	printf("%%d  %%f  %%c  %%s  %%e  %%g  %%o  %%x  %%p  %%u\n");
	printf("\n按回车键返回...");
	getchar();
	rewind(stdin);     //清空输入缓冲区
}
void m2_2_2(void) {    //2. 键盘输入scanf()
	system("cls");     //调用系统命令，清屏
	printf("\n\n    键盘输入scanf() \n\n  ");
	printf("scanf(\"%%d\",&a);  //输入整数\n");
	printf("scanf(\"%%f\",&b);  //输入实数\n");
	printf("scanf(\"%%c\",&c);  //输入字符\n");
	printf("scanf(\"%%s\",&s);  //输入字符串\n");
	printf("\n按回车键返回...");
	getchar();
	rewind(stdin);     //清空输入缓冲区
}
void m2_2_3(void) {    //3. 屏幕输出printf()
	system("cls");     //调用系统命令，清屏
	printf("\n\n    屏幕输出printf() \n\n  ");
	printf("printf(\"%%d\",a);  //输出整数\n");
	printf("printf(\"%%f\",b);  //输出实数\n");
	printf("printf(\"%%c\",c);  //输出字符\n");
	printf("printf(\"%%s\",s);  //输出字符串\n");
	printf("\n按回车键返回...");
	getchar();
	rewind(stdin);     //清空输入缓冲区
}
void m2_2_4(void) {    //4. 算术运算符
	system("cls");     //调用系统命令，清屏
	printf("\n\n    算术运算符 \n\n  ");
	printf(" +  -  *  /  %%  ++  --\n");
	printf("\n按回车键返回...");
	getchar();
	rewind(stdin);     //清空输入缓冲区
}
void m2_2_5(void) {    //5. 逻辑运算符
	system("cls");     //调用系统命令，清屏
	printf("\n\n    逻辑运算符 \n\n  ");
	printf(" &&  ||  !  >  <  ==  !=  >=  <=\n");
	printf("\n按回车键返回...");
	getchar();
	rewind(stdin);     //清空输入缓冲区
}


