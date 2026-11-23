#pragma once
#include"Notification.h"

class GestionnaireNotification{
private:
	Notification* T[100];
	 int Compteur;
public:
	GestionnaireNotification();
	void ajouter(Notification* n);
	void envoyerToutes();
};

