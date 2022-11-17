#include <iostream>
#include <string>
#include "Biberon.h"

using namespace std;

biberon::biberon() {
	heure_prise = 6;
	intervalle_rappel = 6;
	quantite_max = 200;
	quantite_ingeree = 0;
	quantite_min = 0;
	biberon_pris = false;
	biberon_regurgite = false;
	bebe_dort = false;
	volume_biberon = 200;
	nom_bebe = "";
};

biberon::~biberon() {

};

void biberon::ajout_nom_bebe(string nom_bebe) {
	cout << "Comment s'appelle votre bebe ? \n";
	cin >> nom_bebe;
};

void biberon::rajout_heure_prise(int heure_prise, int intervalle_rappel, string nom_bebe) {
	if (biberon_pris) {
		heure_prise += intervalle_rappel;
	}
	else {
		cout << "Il faut donner le biberon a " << nom_bebe << " ! \n";
	};

	if (bebe_dort || heure_prise + intervalle_rappel > 24) {
		heure_prise = 6;
		cout << "Il faudra donner le biberon a " << nom_bebe << " demain. \n";
	};
};

void biberon::rajout_ingere(int quantite_ingeree, int quantite_max, string nom_bebe) {
insertion_quantite:
	cout << "Inserer la quantite de lait bue par " << nom_bebe << ".";
	cin >> quantite_ingeree;
	if (quantite_ingeree < 0) {
		cout << "La quantite bue par " << nom_bebe << " ne peut pas etre negative !";
		goto insertion_quantite;
	}
	else if (quantite_ingeree > quantite_max) {
		quantite_max = quantite_ingeree;
	};
};

void biberon::rappel(int intervalle_rappel, int heure_prise, string nom_bebe) {
	cout << "Il faut donner le biberon a " << nom_bebe;
};

void biberon::regurgite(bool biberon_regurgite, string nom_bebe) {
	string reponse;
	string temp;
	demande_regurgite:
	cout << nom_bebe << " a-t'il regurgite son biberon ? (oui / non)";
	cin >> reponse;
	for (int i : reponse) {
		temp += (char)tolower(i);
	};
	reponse = temp;
	if (reponse == "oui") {
		biberon_regurgite = true;
	}
	else if (reponse == "non") {
		biberon_regurgite = false;
	}
	else {
		cout << "Reponse non valide, merci de reesayer. \n";
		goto demande_regurgite;
	};
};