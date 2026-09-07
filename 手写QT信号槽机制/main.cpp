#include <iostream>
#include "Boy.h"
#include "Girl.h"
#include "Object.h"

/*
	1、先设计一个最顶层的类Object
	2、设计Boy类
	3、设计Girl类
*/

int main() {
	Boy boy1("小王"), boy2("小刘");
	Girl girl1("小飞"), girl2("小幂");

	//关联
	connect(&boy1, Boy::SIG_KAN_DIAN_YING, &girl1, Girl::SLOT_BUSY);  //派生类对象隐式转换成了基类的对象
	connect(&boy1, Boy::SIG_KAN_DIAN_YING, &girl2, Girl::SLOT_YES);

	//发信号
	boy1.sendSignal(Boy::SIG_KAN_DIAN_YING);

	return 0;
}