#include "canal.h"

Canal::Canal(const std::string& nome) : nome(nome) {}
string Canal::getNome(){
         return nome;
}
Canal::~Canal(){}