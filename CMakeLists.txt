cmake_minimum_required (VERSION 3.0.0)
project (main CXX)

cmake_minimum_required (VERSION 3.0.0)
project (musicfy VERSION 0.1 LANGUAGES CXX)

include_directories(include)

add_executable( concordo
                src/main.cpp
                src/canal.cpp
                src/canalTexto.cpp
                src/canalVoz.cpp
                src/mensagem.cpp
                src/sistema.cpp
                src/servidor.cpp
                src/usuario.cpp
)