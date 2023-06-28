#include "usuario.h"

Usuario::Usuario( std::string& nome,  std::string& email,  std::string& senha, int id): id(id), nome(nome), email(email), senha(senha) {}
Usuario::~Usuario(){}
/*void Usuario::setUsuario(std::string& Nome,  std::string& Email,  std::string& Senha, int& Id) {
  nome=Nome;
  email=Email;
  senha=Senha;
  id=Id;
}*/

string Usuario::getNome() {
  return nome;
}

string Usuario::getEmail() {
  return email;
}
string Usuario::getSenha() {
  return senha;
}
int Usuario::getId() {
  return id;
}