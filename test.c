#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

#pragma warning(disable:4996)
// ö��
// ö��enum Day������, ���Զ������,��Ҫ���ٿռ�, 
// Ҫ������,�ŵ�����ֻ�ܹ���д��������Ӧ���г�����ö�ٳ���
// ֻҪ������ �����ض���typedef
typedef enum color{
	RED,
	//RED = 4,
	YELLOW,
	BLACK,
	BLUE,
	GREEN
}color_t;// 
int main(){
	color_t c = YELLOW;// ö�����Ͷ�����һ��ö�ٱ���, ������ֻ�ܴ�ų���(�κ�һ����ɫ)

	printf("%d\n", RED);// 0  4
	printf("%d\n", YELLOW);// 1  5
	printf("%d\n", BLACK);//2  6
	printf("%d\n", BLUE);// 3  7
	printf("%d\n", GREEN);//4  8

	printf("c = %d\n", c);// 1  5
	system("pause");
	return 0;
}// ö�ٳ���������������,=\
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
//// malloc����
//int main(){
//
//	system("pause");
//	return 0;
//}
