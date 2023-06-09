#ifndef PAQUETE_H
#define PAQUETE_H

#include <string>
#include "Persona.h"

class Paquete {
public:
    enum Estado {
        RADICADO,
        ENTREGADO,
        DEVUELTO_POR_DIRECCION,
        DEVUELTO_POR_REMITENTE,
        EN_CAMINO,
        EN_DISTRIBUCION
    };

    Paquete(const Persona& remitente, const Persona& destinatario);

    const Persona& getRemitente() const;
    const Persona& getDestinatario() const;
    Estado getEstado() const;

    void setEstado(Estado estado);

private:
    Persona remitente;
    Persona destinatario;
    Estado estado;
};

#endif
