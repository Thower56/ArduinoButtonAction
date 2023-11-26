#pragma once
#include <Arduino.h>

class DEL{
public:
    DEL(uint8_t p_pinDEL);
    void allumer();
    void allumer(float p_poucentageIntensite);
    void clignoter(int p_allumer, int p_eteint);
    void eteindre();
private:
    uint8_t m_pinDEL;
    float m_poucentageIntensite;
};