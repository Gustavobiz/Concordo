#include "usuario.h"

Usuario::Usuario( std::string& nome,  std::string& email,  std::string& senha, int id): id(id), nome(nome), email(email), senha(senha) {}
Usuario::~Usuario(){}
/*void Usuario::setUsuario(std::string& Nome,  std::string& Email,  std::string& Senha, int& Id) {
  nome=Nome;
  email=Email;
  senha=Senha;
  id=Id;
}*/

string Usuario::getNome()const {
  return nome;
}

string Usuario::getEmail()const {
  return email;
}
string Usuario::getSenha()const {
  return senha;
}
int Usuario::getId()const {
  return id;
}