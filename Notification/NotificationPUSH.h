#pragma once
#include "Notification.h"
class NotificationPUSH :
    public Notification
{
private:
    string application;
    static int id;
public:
    NotificationPUSH(string, string,string);
    void envoyer()const override;
    void afficher()const override;

};

