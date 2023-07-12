#ifndef canalVoz_h
#define canalVoz_h
#include <string>
#include <vector>
#include "canal.h"
#include "mensagem.h"
using namespace std;
class CanalVoz: public Canal{
    private:
    Mensagem ultMensagem;

    public:
/**
 * @brief Construtor da classe CanalVoz.
 * 
 * @param nome nome do canal de voz.
 * @param ultMensagem A última mensagem enviada no canal de voz.
 */    
    CanalVoz(string& nome,Mensagem& ultMensagem ); 
/**
 * @brief Destrutor da classe CanalVoz.
 */    
    ~CanalVoz();
    void setMensagensVoz(Mensagem& mensagem);
    Mensagem getMensagensVoz()const;
    
};

#endif 