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

int DEL::getPourcentageIntensite(){
    return m_poucentageIntensite;
};

void DEL::clignoter(int p_allumer, int p_eteint){
    while(m_dureeActionMS > 0 && (micros() - m_dateDerniereDecrementation) >= 1000){
        m_dureeActionMS --;
        m_dateDerniereDecrementation += 1000;
    }

    if(m_dureeActionMS == 0){
        switch(m_etatCycle){
            case 0:
                eteindre();
                m_dureeActionMS = m_dureeEteinte;
                m_etatCycle = 1;
                break;
            case 1:
                allumer();
                m_dureeActionMS = m_dureeAllumee;
                m_etatCycle = 0;
                break;
        }
    }

};