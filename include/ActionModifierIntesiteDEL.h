#pragma once
#include <Action.h>
#include <DEL.h>

class ActionModifierIntesiteDEL : public Action{
public:
    ActionModifierIntesiteDEL(DEL* p_DEL);
    void setPas();
    void executer();
    void testLambda(void (*func)());
private:
    DEL* m_DEL;
    float m_pourcentageIntensite;
    float m_pas;
};