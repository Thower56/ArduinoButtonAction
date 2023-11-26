#include <ActionModifierIntesiteDEL.h>

ActionModifierIntesiteDEL::ActionModifierIntesiteDEL(DEL* p_DEL){
    m_DEL = p_DEL;
    m_pas = 63.75;
    m_pourcentageIntensite = 0;
};

void ActionModifierIntesiteDEL::executer(){
    Serial.println(m_pourcentageIntensite);
    m_pourcentageIntensite = m_pourcentageIntensite < 255 ? m_pourcentageIntensite + m_pas : 0;
    m_DEL->allumer(m_pourcentageIntensite);
};
