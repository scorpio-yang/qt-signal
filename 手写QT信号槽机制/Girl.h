#pragma once
#include "Object.h"
#include <string>
#include "Boy.h"
#include <iostream>

class Girl : public Object {
public:
	Girl(const char* name);
	enum {
		SLOT_BUSY,
		SLOT_YES,
	};

	void callBack(int slotId, Object* sender);

	void slotBusy(Object* sender);
	void slotYes(Object* sender);

private:
	string name;
};

