#include "Notification.h"

Notification::Notification(string dest, string msg) {

	this->destinataire = dest;
	this->message = msg;

}

Notification::~Notification()
{
}
