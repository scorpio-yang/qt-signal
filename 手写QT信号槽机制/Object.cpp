#include "Object.h"

void connect(Object* sender, int signal, Object* receiver, int slotId) {
	DestAndSlot dest = { receiver, slotId };
	pair<int, DestAndSlot> temp(signal, dest);
	sender->connections.insert(temp);
}

void active(Object* sender, int signal) {
	//是根据查找结果进行遍历（不是对整个connections库进行遍历）
	for (auto it = sender->connections.find(signal);
		it != sender->connections.end();
		it++) {
		DestAndSlot dest = it->second;
		dest.receiver->callBack(dest.slotId, sender);
	}
}
