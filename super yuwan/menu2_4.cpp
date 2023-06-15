//menu2_4.cpp
#include <stdio.h>
#include <iostream>
void m2_4_1(void) {//1. while语句——张力轩
	system("cls");     //调用系统命令，清屏
	printf("\n\n    while语句 \n\n  ");
	printf("while语句的语法格式为：\n");
	printf("while(条件表达式)\n");
	printf("  语句\n");
	printf("其中条件表达式的值为真时，执行语句\n");
	printf("执行完语句后，再次判断条件表达式\n");
	printf("若条件表达式的值为真，则再次执行语句\n");
	printf("直到条件表达式的值为假时，退出while语句\n");
	printf("\n按回车键返回...");
	getchar();
	rewind(stdin);     //清空输入缓冲区
}
void m2_4_2(void) {//2. do-while语句——张力轩
	system("cls");     //调用系统命令，清屏
	printf("\n\n    do-while语句 \n\n  ");
	printf("do-while语句的语法格式为：\n");
	printf("do\n");
	printf("  语句\n");
	printf("while(条件表达式);\n");
	printf("其中条件表达式的值为真时，执行语句\n");
	printf("执行完语句后，再次判断条件表达式\n");
	printf("若条件表达式的值为真，则再次执行语句\n");
	printf("直到条件表达式的值为假时，退出do-while语句\n");
	printf("\n按回车键返回...");
	getchar();
	rewind(stdin);     //清空输入缓冲区
}
void m2_4_3(void) {//3. for语句——张力轩
	system("cls");     //调用系统命令，清屏
	printf("\n\n    for语句 \n\n  ");
	printf("for语句的语法格式为：\n");
	printf("for(表达式1;表达式2;表达式3)\n");
	printf("  语句\n");
	printf("其中表达式1为初始化表达式\n");
	printf("表达式2为条件表达式\n");
	printf("表达式3为循环后表达式\n");
	printf("执行顺序为：表达式1→表达式2→语句→表达式3→表达式2→语句→表达式3→……\n");
	printf("直到表达式2的值为假时，退出for语句\n");
	printf("\n按回车键返回...");
	getchar();
	rewind(stdin);     //清空输入缓冲区
}
void m2_4_4(void) {//4. break语句——张力轩
	system("cls");     //调用系统命令，清屏
	printf("\n\n    break语句 \n\n  ");
	printf("break语句的语法格式为：\n");
	printf("break;\n");
	printf("break语句用于强行退出循环语句\n");
	printf("在循环语句中，当遇到break语句时，\n");
	printf("则强行退出循环语句，不再执行循环语句\n");
	printf("\n按回车键返回...");
	getchar();
	rewind(stdin);     //清空输入缓冲区
}
void m2_4_5(void) {//5. continue语句——张力轩
	system("cls");     //调用系统命令，清屏
	printf("\n\n    continue语句 \n\n  ");
	printf("continue语句的语法格式为：\n");
	printf("continue;\n");
	printf("continue语句用于强行退出本次循环\n");
	printf("在循环语句中，当遇到continue语句时，\n");
	printf("则强行退出本次循环，不再执行本次循环\n");
	printf("但循环语句仍然继续执行\n");
	printf("\n按回车键返回...");
	getchar();
	rewind(stdin);     //清空输入缓冲区
}