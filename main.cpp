#include <iostream>
#include "Persona.h"
#include "Paquete.h"
#include <limits>

using namespace std;

void imprimirEstadoPaquete(const Paquete& paquete) {
    Paquete::Estado estado = paquete.getEstado();

    string estadoPaquete;
    switch (estado) {
        case Paquete::RADICADO:
            estadoPaquete = "Radicado";
            break;
        case Paquete::ENTREGADO:
            estadoPaquete = "Entregado";
            break;
        case Paquete::DEVUELTO_POR_DIRECCION:
            estadoPaquete = "Devuelto por dirección no encontrada";
            break;
        case Paquete::DEVUELTO_POR_REMITENTE:
            estadoPaquete = "Devuelto por remitente no encontrado";
            break;
        case Paquete::EN_CAMINO:
            estadoPaquete = "En camino";
            break;
        case Paquete::EN_DISTRIBUCION:
            estadoPaquete = "En distribucion";
            break;
        default:
            estadoPaquete = "Estado inválido";
            break;
    }

    cout << "El estado del paquete es: " << estadoPaquete << endl;
}

int main() {
    // Variables para almacenar los datos del remitente y destinatario
    string nombreRemitente, identificacionRemitente, correoRemitente, direccionRemitente;
    string nombreDestinatario, identificacionDestinatario, correoDestinatario, direccionDestinatario;

    // Crear objetos de tipo Persona para remitente y destinatario
    Persona remitente("", "", "", "");
    Persona destinatario("", "", "", "");

    // Crear objeto de tipo Paquete
    Paquete paquete(remitente, destinatario);

    // Variable para almacenar la opción seleccionada
    int opcion = 0;

    // Bucle del menú
    while (opcion != 6) {
        cout << "\nMENU" << endl;
        cout << "1. Ingresar datos del remitente." << endl;
        cout << "2. Ingresar datos del destinatario." << endl;
        cout << "3. Ver estado del paquete." << endl;
        cout << "4. Cambiar estado del paquete." << endl;
        cout << "5. Confirmar datos de las personas." << endl;
        cout << "6. Salir." << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        // Limpiar el buffer de entrada
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (opcion) {
            case 1: {
                // Ingreso de datos del remitente
                cout << "\nIngrese los datos del remitente:" << endl;
                cout << "Nombre completo: ";
                getline(cin, nombreRemitente);
                cout << "Numero de identificacion: ";
                getline(cin, identificacionRemitente);
                cout << "Correo electronico: ";
                getline(cin, correoRemitente);
                cout << "Direccion (ciudad, departamento): ";
                getline(cin, direccionRemitente);

                // Actualizar objeto remitente
                remitente = Persona(nombreRemitente, identificacionRemitente, correoRemitente, direccionRemitente);
                
                // Mostrar los datos ingresados del remitente
                cout << "\nDatos ingresados del remitente:" << endl;
                cout << "Nombre: " << remitente.getNombre() << endl;
                cout << "Identificacion: " << remitente.getIdentificacion() << endl;
                cout << "Correo electronico: " << remitente.getCorreo() << endl;
                cout << "Direccion: " << remitente.getDireccion() << endl;
                
                // Preguntar al usuario si los datos son correctos
                cout << "\nLos datos ingresados son correctos? (S/N): ";
                char confirmacionRemitente;
                cin >> confirmacionRemitente;

                // Verificar la respuesta del usuario
                if (confirmacionRemitente == 'N' || confirmacionRemitente == 'n') {
                    // Permitir actualizar los datos del remitente
                    cout << "Ingrese los nuevos datos del remitente:" << endl;
                    cout << "Nombre completo: ";
                    cin.ignore();
                    getline(cin, nombreRemitente);
                    cout << "Numero de identificacion: ";
                    getline(cin, identificacionRemitente);
                    cout << "Correo electronico: ";
                    getline(cin, correoRemitente);
                    cout << "Direccion (ciudad, departamento): ";
                    getline(cin, direccionRemitente);

                    // Actualizar objeto remitente
                    remitente = Persona(nombreRemitente, identificacionRemitente, correoRemitente, direccionRemitente);

                    cout << "Los datos del remitente se han actualizado correctamente." << endl;
                }


                break;
            }

            case 2: {
                // Ingreso de datos del destinatario
                cout << "\nIngrese los datos del destinatario:" << endl;
                cout << "Nombre completo: ";
                getline(cin, nombreDestinatario);
                cout << "Numero de identificacion: ";
                getline(cin, identificacionDestinatario);
                cout << "Correo electronico: ";
                getline(cin, correoDestinatario);
                cout << "Direccion (ciudad, departamento): ";
                getline(cin, direccionDestinatario);

                // Actualizar objeto destinatario
                destinatario = Persona(nombreDestinatario, identificacionDestinatario, correoDestinatario, direccionDestinatario);
                
                // Mostrar los datos ingresados del destinatario
                cout << "\nDatos ingresados del destinatario:" << endl;
                cout << "Nombre: " << destinatario.getNombre() << endl;
                cout << "Identificacion: " << destinatario.getIdentificacion() << endl;
                cout << "Correo electronico: " << destinatario.getCorreo() << endl;
                cout << "Direccion: " << destinatario.getDireccion() << endl;

                // Preguntar al usuario si los datos son correctos
                cout << "\nLos datos ingresados son correctos? (S/N): ";
                char confirmacionDestinatario;
                cin >> confirmacionDestinatario;

                /// Verificar la respuesta del usuario
                if (confirmacionDestinatario == 'N' || confirmacionDestinatario == 'n') {
                    // Permitir actualizar los datos del destinatario
                    cout << "Ingrese los nuevos datos del destinatario:" << endl;
                    cout << "Nombre completo: ";
                    cin.ignore();
                    getline(cin, nombreDestinatario);
                    cout << "Numero de identificacion: ";
                    getline(cin, identificacionDestinatario);
                    cout << "Correo electronico: ";
                    getline(cin, correoDestinatario);
                    cout << "Direccion (ciudad, departamento): ";
                    getline(cin, direccionDestinatario);

                    // Actualizar objeto destinatario
                    destinatario = Persona(nombreDestinatario, identificacionDestinatario, correoDestinatario, direccionDestinatario);

                    cout << "Los datos del destinatario se han actualizado correctamente." << endl;
                }   
                break;
            }

            case 3: {
                // Mostrar estado del paquete
                imprimirEstadoPaquete(paquete);

                break;
            }

            case 4: {
                // Cambiar estado del paquete
                int nuevoEstado;
                cout << "\nSeleccione el nuevo estado del paquete:" << endl;
                cout << "1. Radicado" << endl;
                cout << "2. Entregado" << endl;
                cout << "3. Devuelto por direccion no encontrada" << endl;
                cout << "4. Devuelto por remitente no encontrado" << endl;
                cout << "5. En camino" << endl;
                cout << "6. En distribución" << endl;
                cout << "Ingrese una opcion: ";
                cin >> nuevoEstado;

                // Limpiar el buffer de entrada
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                switch (nuevoEstado) {
                    case 1:
                        paquete.setEstado(Paquete::RADICADO);
                        break;
                    case 2:
                        paquete.setEstado(Paquete::ENTREGADO);
                        break;
                    case 3:
                        paquete.setEstado(Paquete::DEVUELTO_POR_DIRECCION);
                        break;
                    case 4:
                        paquete.setEstado(Paquete::DEVUELTO_POR_REMITENTE);
                        break;
                    case 5:
                        paquete.setEstado(Paquete::EN_CAMINO);
                        break;
                    case 6:
                        paquete.setEstado(Paquete::EN_DISTRIBUCION);
                        break;
                    default:
                        cout << "Opcion invalida. No se ha cambiado el estado del paquete." << endl;
                        break;
                }

                break;
            }
            
            case 5: {
			   	// Confirmar datos de las personas
			    cout << "\nDATOS DEL REMITENTE:" << endl;
			    cout << "Nombre: " << remitente.getNombre() << endl;
			    cout << "Identificacion: " << remitente.getIdentificacion() << endl;
			    cout << "Correo electronico: " << remitente.getCorreo() << endl;
			    cout << "Direccion: " << remitente.getDireccion() << endl;
				
			    cout << "\nDATOS DEL DESTINATARIO:" << endl;
			    cout << "Nombre: " << destinatario.getNombre() << endl;
			    cout << "Identificacion: " << destinatario.getIdentificacion() << endl;
			    cout << "Correo electronico: " << destinatario.getCorreo() << endl;
			    cout << "Direccion: " << destinatario.getDireccion() << endl;
				break;
			}

            case 6: {
                // Salir del programa
                cout << "Saliendo..." << endl;
                break;
            }

            default: {
                cout << "Opcion invalida. Intente nuevamente." << endl;
                break;
            }
        }
    }

    return 0;
}

