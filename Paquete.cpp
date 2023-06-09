#include "Paquete.h"

Paquete::Paquete(const Persona& remitente, const Persona& destinatario)
    : remitente(remitente), destinatario(destinatario), estado(RADICADO) {

}

const Persona& Paquete::getRemitente() const {
    return remitente;
}

const Persona& Paquete::getDestinatario() const {
    return destinatario;
}

Paquete::Estado Paquete::getEstado() const {
    return estado;
}

void Paquete::setEstado(Estado estado) {
    this->estado = estado;
}


