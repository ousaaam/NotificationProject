#pragma once
#include<iostream>
using namespace std;
class Notification
{
protected:
	string destinataire;
	string message;
public:
	Notification(string, string);
	virtual void afficher()const=0;
	virtual void envoyer()const=0;
	virtual ~Notification();
};

