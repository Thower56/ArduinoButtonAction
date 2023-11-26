#include <Bouton.h>
#include <Arduino.h>
#include <DEL.h>
Bouton::Bouton(uint8_t p_pinBouton, Action* p_actionBoutonPresse){
    m_actionBoutonPresse = p_actionBoutonPresse;
    m_pin = p_pinBouton;
    pinMode(m_pin, INPUT);
};

int Bouton::getPin(){
    return m_pin;
};

void Bouton::tick(){
    m_actionBoutonPresse->executer();
};