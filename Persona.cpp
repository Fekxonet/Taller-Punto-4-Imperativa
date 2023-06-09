#include "Persona.h"
using namespace std;

Persona::Persona(const string& nombre, const string& identificacion, const string& correo, const string& direccion)
    : nombre(nombre), identificacion(identificacion), correo(correo), direccion(direccion) {
}

const string& Persona::getNombre() const {
    return nombre;
}

const string& Persona::getIdentificacion() const {
    return identificacion;
}

const string& Persona::getCorreo() const {
    return correo;
}

const string& Persona::getDireccion() const {
    return direccion;
}
