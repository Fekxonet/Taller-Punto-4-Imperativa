#ifndef ENVIO_H
#define ENVIO_H

#include "Paquete.h"

using namespace std;

class Envio : public Persona, public Paquete {
public:
    Envio(string nombreRemitente, string identificacionRemitente,
          string correoRemitente, string direccionRemitente,
          string nombreDestinatario, string identificacionDestinatario,
          string correoDestinatario, string direccionDestinatario);

    void imprimirEstadoEnvio();
};

#endif
