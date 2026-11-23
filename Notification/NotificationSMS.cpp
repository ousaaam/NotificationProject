#include "NotificationSMS.h"
NotificationSMS::NotificationSMS(string dest, string msg, string operat):Notification(dest,msg)
{
	this->opertor = operat;

}

void NotificationSMS::envoyer() const
{
	cout<<"SMS Sent!" << endl;
}

void NotificationSMS::afficher() const
{
	cout << "SMS/Numero:" << this->destinataire<<"/Operateur:"<<this->opertor
		 <<"/Message:Votre code est "<<this->message << endl;
}