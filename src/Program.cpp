#include <Program.h>
#include <ActionModifierIntesiteDEL.h>
//#include <functional>

long derniereDateChangement = 0;
int dernierEtatBouton = HIGH;
int dernierEtatStableBouton = HIGH;
const int delaiMinPression = 25;


Program::Program(){
    m_del = new DEL(6);
    m_bouton1 = new Bouton(2, new ActionModifierIntesiteDEL(m_del));
    m_bouton2 = new Bouton(4, new ActionModifierIntesiteDEL(m_del));
};

void Program::loop(){
    int etatBouton = digitalRead(m_bouton1->getPin());
    long dateActuelle = millis();

    if (etatBouton != dernierEtatBouton) {
        derniereDateChangement = dateActuelle;
        dernierEtatBouton = etatBouton;
    }

    if(dateActuelle - derniereDateChangement > delaiMinPression) {
        if (dernierEtatStableBouton == HIGH && etatBouton == LOW) {
            m_bouton1->tick();
        } 
        // else if (dernierEtatStableBouton == LOW && etatBouton == HIGH) {

        // }
        dernierEtatStableBouton = etatBouton;
    }

};