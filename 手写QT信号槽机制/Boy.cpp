#include "Boy.h"

Boy::Boy(const char* name) {
	this->name = name;
}

void Boy::sendSignal(int signal) {
	active(this, signal);
}

void Boy::callBack(int slotId, Object* sender) {

}
