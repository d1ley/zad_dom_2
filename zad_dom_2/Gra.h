#ifndef GRA_H
#define GRA_H

#include "Gracz.h"
#include "Haslo.h"
#include "Menu.h"

class Gra {
public:
    Gra();

    void rozpocznijGre();

private:
    Gracz gracze[3];
    Haslo haslo;
    Menu menu;
    std::vector<std::string> listaHasel;
    int kolejka;

    void wczytajHasla(const std::string&);
    void wyswietlStanGry();
    void zgadujHaslo();
    void krecKolem();
    int losujIndeksKola();
    void zakonczGre();
    
};

#endif
