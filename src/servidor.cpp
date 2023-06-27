#include "servidor.h"
Servidor::Servidor( std::string& nome, int& id): nome(nome), IdDono(id)  {}

string Servidor::getNomeSer() {
  return nome;
}
string Servidor::getDescricao() {
  return descricao;
}
int Servidor::getIdDono() {
  return IdDono;
}
void Servidor::setDescricao(string& Descricao) {
  descricao=Descricao;
}