/**
  ******************************************************************************
  * @file           : main.cpp
  * @author         : ismeoh
  * @brief          : 入口程序
  * @date           : 2023/2/22
  ******************************************************************************
  */
#include <iostream>
#include "sq-list/SqlList.h"
int main() {

	/*int opt = 1;
	cout << "数据结构,选择序号测试" << endl;
	while (true) {
		cin >> opt;
		if (opt == 1) {
			cout << "线性表测试" << endl;

		}
	}*/
    cout << "线性表测试" << endl;
    // 初始化线性表
    SqList sqList;
    cout << initList_Sq(sqList) << endl;
	return 0;
}
