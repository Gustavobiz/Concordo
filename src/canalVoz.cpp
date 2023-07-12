#include "canalVoz.h"
CanalVoz::CanalVoz( std::string& nome,Mensagem& ultMensagem  )
    : Canal(nome),ultMensagem(ultMensagem) {}
CanalVoz::~CanalVoz(){} 

void CanalVoz::setMensagensVoz(Mensagem& mensagem){
    ultMensagem=mensagem;
}
Mensagem CanalVoz::getMensagensVoz()const{
    return ultMensagem;
}
