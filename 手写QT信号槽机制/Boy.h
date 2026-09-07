#pragma once
#include "Object.h"
#include <string>

class Boy : public Object {
public:
	Boy(const char* name);
	enum {
		SIG_KAN_DIAN_YING,  //看电影
		SIG_LU_XING,		//旅行
		SIG_K_GE,			//K歌
		SIG_MAI_CHE,		//买车
	};

	//发信号
	void sendSignal(int signal);  //主动发送信号

	void callBack(int slotId, Object* sender);

	string getName() {
		return name;
	}

private:
	string name;
};

