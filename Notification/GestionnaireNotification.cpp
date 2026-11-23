#include "GestionnaireNotification.h"

GestionnaireNotification::GestionnaireNotification()
{
	this->Compteur = 0;
}

void GestionnaireNotification::ajouter(Notification* n)
{
	if (Compteur < 100) {
		T[this->Compteur] = n;
		Compteur++;
	}
	else {
		cout << "La Gestionnaire est Pleine!" << endl;
	}
}

void GestionnaireNotification::envoyerToutes()
{
	for (size_t i = 0; i < this->Compteur; i++) {
		T[i]->envoyer();
	}
}
