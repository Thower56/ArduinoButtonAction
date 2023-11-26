#pragma once
#include <Bouton.h>
#include <DEL.h>

class Program{
public:
    Program();
    void loop();
private:
    Bouton* m_bouton1;
    Bouton* m_bouton2;
    int etat;
    DEL* m_del;
};