#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#pragma warning(disable:4996)
// 枚举
// 枚举enum Day是类型, 可以定义变量,需要开辟空间, 
// 要放内容,放的内容只能够被写入你所对应罗列出来的枚举常量
// 只要是类型 可以重定义typedef
typedef enum color{
	RED,
	//RED = 4,
	YELLOW,
	BLACK,
	BLUE,
	GREEN
}color_t;// 
int main(){
	color_t c = YELLOW;// 枚举类型定义了一个枚举变量, 变量里只能存放常量(任何一种颜色)

	printf("%d\n", RED);// 0  4
	printf("%d\n", YELLOW);// 1  5
	printf("%d\n", BLACK);//2  6
	printf("%d\n", BLUE);// 3  7
	printf("%d\n", GREEN);//4  8

	printf("c = %d\n", c);// 1  5
	system("pause");
	return 0;
}// 枚举常量本质上是整型,=\
//enum Day{
//	Mon,
//	Tus,
//	Wed
//};
//enum Color{
//	Red,
//	Yellow,
//	Blue
//};
//// malloc函数
//int main(){
//
//	system("pause");
//	return 0;
//}
