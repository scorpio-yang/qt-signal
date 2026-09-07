#pragma once
#include <map>
using namespace std;

class Object;

struct DestAndSlot {
	Object* receiver; 
	int slotId;
};

class Object
{
public:
	//友元的目的：就是让一个函数或者类访问另一个类中的私有成员
	//友元函数是定义在类的外面的，但是要在类的里面声明一下
	friend void connect(
		Object* sender,    //信号的发送者
		int signal,        //发送的是什么信号
		Object* receiver,  //信号的接收者
		int slotId		   //信号接收者的“槽ID”
	);

	friend void active(Object* sender, int signal);

	virtual void callBack(int slotId, Object* sender) = 0;

private:
	multimap<int, DestAndSlot> connections;
};

