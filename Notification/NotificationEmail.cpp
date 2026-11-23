#include "NotificationEmail.h"

NotificationEmail::NotificationEmail(string dest,string obj, string msg):Notification(dest,msg)
{
	this->Objet = obj;
}

void NotificationEmail::afficher() const
{
	cout<<"A/"<<this->destinataire<<"/Objet:"<<this->Objet<<"/Message:"<<this->message << endl;
}

void NotificationEmail::envoyer() const
{
	cout << "Email a ete envoyee!" << endl;
}

NotificationEmail::~NotificationEmail()
{
}
