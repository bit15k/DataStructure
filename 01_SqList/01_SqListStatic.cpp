// 静态数组实现顺序表
#include <stdio.h>
#define MAXSIZE 10 // 定义最大长度
typedef struct{ 
	int data[MAXSIZE];// 使用静态数组定义顺序表
	int length;// 顺序表当前长度
}SqList;

// 基本操作-初始化一个顺序表
void initSqList(SqList &L){
	
	for(int i=0;i<MAXSIZE;i++){ // 给顺序表中每一个元素设置初始值
		//TODO
		L.data[i] = 0;
	}
	L.length = 0; // 设置顺序表的初始长度是0
	
}
int main(){
	SqList L; // 声明一个顺序表
	initSqList(L); // 初始化顺序表
	
	
	return 0;
	
}
