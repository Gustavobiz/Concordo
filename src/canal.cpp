#include "canal.h"

Canal::Canal(const std::string& nome) : nome(nome) {}
string Canal::getNomeC()const{
         return nome;
}
Canal::~Canal(){}