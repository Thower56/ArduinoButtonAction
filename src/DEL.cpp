#include <DEL.h>

DEL::DEL(uint8_t p_pinDEL){
    m_pinDEL = p_pinDEL;

};
void DEL::allumer(){
    analogWrite(m_pinDEL, 255);
};
void DEL::allumer(float p_poucentageIntensite){
    m_poucentageIntensite = p_poucentageIntensite;
    analogWrite(m_pinDEL, p_poucentageIntensite);
};
void DEL::eteindre(){
    analogWrite(m_pinDEL, 0);
};

void DEL::clignoter(int p_allumer, int p_eteint){
    
};