#include "canalVoz.h"
CanalVoz::CanalVoz( std::string& nome,Mensagem& ultMensagem  )
    : Canal(nome),ultMensagem(ultMensagem) {}
CanalVoz::~CanalVoz(){} 
