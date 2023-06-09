#ifndef PERSONA_H
#define PERSONA_H
#include <string>
using namespace std;

class Persona {
public:
    Persona(const string& nombre, const string& identificacion, const string& correo, const string& direccion);

    const string& getNombre() const;
    const string& getIdentificacion() const;
    const string& getCorreo() const;
    const string& getDireccion() const;

private:
    string nombre;
    string identificacion;
    string correo;
    string direccion;
};

#endif
