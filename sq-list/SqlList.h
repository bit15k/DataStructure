/**
  ******************************************************************************
  * @file           : SqlList.h
  * @author         : ismeoh
  * @brief          : ���Ա�ͷ�ļ�
  * @date           : 2023/2/22
  ******************************************************************************
  */
// ʹ�������ռ�
using namespace std;
#include <stdlib.h>
// ����״̬��
#define TRUE 1
#define FALSE 0
#define OK 1
#define ERROR 0
#define INFEASIBLE -1
#define OVERFLOW -2
#define MAXSIZE 100//��󳤶�
// �������
typedef int Status;
typedef char ElemType;
// ���Ա�ṹ�嶨��
typedef struct SqList {

	ElemType* elem;
	int length;

}SqList;
// ����ԭ������
Status initList_Sq(SqList &l);
