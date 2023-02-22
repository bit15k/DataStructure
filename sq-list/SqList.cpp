/**
  ******************************************************************************
  * @file           : SqList.cpp
  * @author         : ismeoh
  * @brief          : 线性表定义
  * @date           : 2023/2/22
  ******************************************************************************
  */
#include "SqlList.h"
/**
 * @brief 线性表初始化
 * @param l 线性表引用
 * @return OK
 */
Status initList_Sq(SqList& l) {
    l.elem = new ElemType(MAXSIZE);
    if (!l.elem)
        exit(2);
    l.length = 0;
    return OK;

};

/**
 * @brief 销毁线性表
 * @param l 线性表引用
 */
void destoryList(SqList& l) {
    if (l.elem)
        delete l.elem;
};

/**
 * @brief 清空线性表
 * @param l 线性表引用
 */
void clearList(SqList& l) {
    l.length = 0;
};

/**
 * @brief 获取线性表长度
 * @param l 线性表
 * @return 线性表长度
 */
int getLength(SqList l) {
    return l.length;
};

/**
 * @brief 判断线性表是否空
 * @param l 线性表
 * @return 真或假
 */
int isEmpty(SqList l) {
    if (l.length == 0)
        return TRUE;
    else
        return FALSE;

};

/**
 * @brief 获取线性表元素
 * @param l 线性表
 * @param i 位置
 * @param e 引用回传
 * @return OK or ERROR
 */
int getElem(SqList l, int i, ElemType& e) {

    if (i < 1 || i > l.length)
        return ERROR;
    e = l.elem[i - 1];
    return OK;
}
/**
 * @brief 根据值查找元素
 * @param l 线性表
 * @param e 元素值
 * @return 位置或0
 */
int locateElem(SqList l,ElemType e){
    for (int i = 0; i < l.length; ++i) {
        if(l.elem[i] == e){
            return i+1;

        }
    }
    return FALSE;
}


Status listInsertSq(SqList &l,int i,ElemType e){
    // 如果插入的位置小于1 或 插入位置大于线性表长度 报错
    if(i < 1 || i > l.length){
        return ERROR;
    }
    // 如果线性表的长度超过最大长度 报错
    if(l.length == MAXSIZE){
        return ERROR;
    }
    for (int j = l.length-1; j >= i-1 ; j--) {
        l.elem[j+1] = l.elem[j];
    }
    l.elem[i-1] = e;
    l.length++;
    return OK;

}



