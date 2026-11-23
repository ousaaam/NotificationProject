#include"NotificationPUSH.h"
NotificationPUSH::NotificationPUSH(string dest, string msg, string app):Notification(dest,msg)
{
	this->application = app;
	
}

void NotificationPUSH::envoyer() const
{
	cout<<"Push succes" << endl;
}

void NotificationPUSH::afficher() const{
	cout << "PUSH/Utilisateur:" << this->destinataire 
		 << "/Application: "<<this->application<<"/Message:Votre code est" << this->message << endl;

}
