#include "mensagem.h"

Mensagem::Mensagem(const std::string& dataHora, int enviadoPor,const std::string& conteudo)
        : dataHora(dataHora), enviadoPor(enviadoPor), conteudo(conteudo) {}
 string Mensagem::getDataHora(){
    return dataHora;
 }
 int Mensagem::getId(){
    return enviadoPor;
 }
 string Mensagem::getConteudo(){
    return conteudo;
 }