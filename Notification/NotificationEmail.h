#pragma once
#include "Notification.h"
class NotificationEmail :
    public Notification
{
private:
	string Objet;
public:
	NotificationEmail(string,string, string);
	void afficher()const override ;
    void envoyer()const override;
	virtual ~NotificationEmail();
};

