#pragma once
#include <Action.h>
#include <Arduino.h>

class Bouton{
public:
    Bouton(uint8_t p_pinBouton, Action* p_actionBoutonPresse);
    void tick();
    int getPin();
private:
    uint8_t m_pin;
    Action* m_actionBoutonPresse;
};