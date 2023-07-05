#ifndef canalVoz_h
#define canalVoz_h
#include <string>
#include <vector>
#include "canal.h"
#include "mensagem.h"
class CanalVoz: public Canal{
    private:
    Mensagem ultMensagem;

    public:
    CanalVoz(string& nome,Mensagem& ultMensagem ); 
    ~CanalVoz();
    
};

#endif 