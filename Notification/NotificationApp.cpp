// Notification.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"NotificationEmail.h"
#include"NotificationSMS.h"
#include"NotificationPUSH.h"
#include"GestionnaireNotification.h"
int main(){

	Notification* T[3];

	Notification* N1 = new NotificationEmail("oussama@gmail.com","Securite","Nouvelle Connexion");
	Notification* N2 = new NotificationSMS("0728551029","194723","Orange");
	Notification* N3 = new NotificationPUSH("user_101", "Mybank","4302");

	T[0] = N1;
	T[1] = N2;
	T[2] = N3;
	cout << "Les Notifications:" << endl;
	for (size_t i = 0; i < 3; i++) {
		T[i]->afficher();
		T[i]->envoyer();
	}
	GestionnaireNotification G;

	G.ajouter(N1);
	G.ajouter(N2);
	G.ajouter(N3);
	cout << endl;
	cout <<"Envoi Tous!" << endl;
	G.envoyerToutes();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


