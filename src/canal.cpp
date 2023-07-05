#include "canal.h"

Canal::Canal(const std::string& nome) : nome(nome) {}
string Canal::getNomeC(){
         return nome;
}
Canal::~Canal(){}