#include "Girl.h"

Girl::Girl(const char* name) {
	this->name = name;
}

void Girl::callBack(int slotId, Object* sender) {
	switch (slotId) {
	case SLOT_BUSY:
		slotBusy(sender);
		break;
	case SLOT_YES:
		slotYes(sender);
		break;
	default:
		break;
	}
}

void Girl::slotBusy(Object* sender) {
	Boy* boy = static_cast<Boy*>(sender);
	if (boy != nullptr) {
		cout << boy->getName() << "，抱歉，" << name << "我很忙！" << endl;
 	}
}

void Girl::slotYes(Object* sender) {
	Boy* boy = static_cast<Boy*>(sender);
	if (boy != nullptr) {
		cout << boy->getName() << "，谢谢，" << name << "正好有空！" << endl;
	}
}
