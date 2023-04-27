// 线性表的实现-使用动态分配内存空间的方式
#include <stdio.h>
#include <stdlib.h> // malloc函数和free函数所在的库
#define initSize 10 // 定义线性表的初始长度
typedef struct{
	int *data; // 动态分配数组的指针
	int MAXSIZE; // 顺序表的最大容量
	int Length; // 顺序表当前的长度
	
}SqList;

// 顺序表的初始化
void InitSqList(SqList &L){
	// 用malloc动态申请一片连续的存储空间
	L.data = (int *)malloc(initSize*sizeof(int));
	L.Length = 0; // 设置当前顺序表的长度
	L.MAXSIZE = initSize; // 设置当顺序表的最大长度是初始化长度
}

// 动态增加顺序表的长度
void IncreaseSqList(SqList &L, int len){
	int *p = L.data;
	L.data = (int *)malloc((initSize+len)*sizeof(int)); // 在原来初始化长度+新增加的长度，重新申请长度
	for(int i=0;i<L.Length;i++){
		//TODO
		L.data[i] = p[i];  // 向新开辟的空间复制之前顺序表的数据
	}
	L.MAXSIZE = initSize + len; // 重新设置顺序表的最大长度
	free(p); // 释放原来的顺序表申请的空间
		
} 


int main(){
	SqList L; // 声明一个顺序表
	InitSqList(L); // 初始化一个顺序表
	// 向顺序表中添加几个元素
	// ... 假设顺序表的容量满了
	
}
