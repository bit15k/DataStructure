/**
  ******************************************************************************
  * @file           : SqlList.h
  * @author         : ismeoh
  * @brief          : 线性表头文件
  * @date           : 2023/2/22
  ******************************************************************************
  */
// 使用命名空间
using namespace std;
#include <stdlib.h>
// 定义状态码
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define MAXSIZE 100//最大长度
// 定义别名
typedef int Status;
typedef char ElemType;
// 线性表结构体定义
typedef struct SqList {

	ElemType* elem;
	int length;

}SqList;
// 函数原型声明
Status initList_Sq(SqList &l);
