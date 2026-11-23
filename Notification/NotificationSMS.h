#pragma once
#include "Notification.h"
class NotificationSMS :
    public Notification
{
private:
    static int id;
    string opertor;
 
public:
    NotificationSMS(string, string,string);
    void envoyer()const override;
    void afficher()const override;
};

