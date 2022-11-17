#pragma once

#include <iostream>
#include <string>

using namespace std;

class biberon {

protected:
	int heure_prise; // en heures
	int intervalle_rappel; // en heures
	int quantite_max; // en mL
	int quantite_ingeree; //en mL
	int quantite_min; // en mL
	bool biberon_pris;
	bool biberon_regurgite;
	bool bebe_dort;
	int volume_biberon; // en mL
	string nom_bebe; // nom du bébé

public:
	biberon();

	~biberon();

	void ajout_nom_bebe(string nom_bebe);

	void rajout_heure_prise(int heure_prise, int intervalle_rappel, string nom_bebe);

	void rajout_ingere(int quantite_ingeree, int quantite_max, string nom_bebe);

	void rappel(int intervalle_rappel, int heure_prise, string nom_bebe);

	void regurgite(bool biberon_regurgite, string nom_bebe);
};