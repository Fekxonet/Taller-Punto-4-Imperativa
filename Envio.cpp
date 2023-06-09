#include "Envio.h"
#include "Persona.h"
#include "Paquete.h"
#include "string"
#include <iostream>

using namespace std;

void Envio::imprimirEstadoEnvio() {
    Estado estadoPaquete = getEstado();

    string verificacionP;
    switch (estadoPaquete) {
        case RADICADO:
            verificacionP = "Radicado";
            break;
        case ENTREGADO:
            verificacionP = "Entregado";
            break;
        case DEVUELTO_POR_DIRECCION:
            verificacionP = "Devuelto por dirección no encontrada";
            break;
        case DEVUELTO_POR_REMITENTE:
            verificacionP = "Devuelto por remitente no encontrado";
            break;
        case EN_CAMINO:
            verificacionP = "En camino";
            break;
        case EN_DISTRIBUCION:
            verificacionP = "En distribución";
            break;
        default:
            verificacionP = "Estado inválido";
            break;
    }
    
    cout << "El estado de su entrega es: " << verificacionP << endl;
}

