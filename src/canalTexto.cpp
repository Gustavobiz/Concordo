#include "canalTexto.h"

CanalTexto::CanalTexto(string& nome) : Canal(nome) {}

vector<Mensagem> CanalTexto::getMensagens()const{
    return mensagens;
}
void CanalTexto::setMensagens(Mensagem& mensagem){
    mensagens.push_back(mensagem);
}


CanalTexto::~CanalTexto(){
    
}