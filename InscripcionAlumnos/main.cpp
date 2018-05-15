#include <iostream>
using namespace std;

/* Hacer un programa que genere 3 archivos "Clientes.bin", "Compras.bin" y "NoValidas.bin"
 * El usuario debera ingresar los datos por teclado. Generar una estructura que
 * cuente con los siguientes campos:
 * nroCliente (int)
 * apellido             (char[20])
 * nombre               (char[20])
 * tarjeta              (char[1]) 'D' y 'C' debito y credito respectivamente
 * compra               (char[20]) para producto
 * monto                (int) entero sin decimal
 * mes                  (int) de 1 a 12
 *
 * a) En el archivo "Clientes.bin" grabar los siguientes campos: nroCliente, apellido y nombre.
 *
 * b) En el archivo "Compras.bin" grabar nroCliente, tarjeta, compra, monto, mes.
 *
 * c) En el archivo "NoValidas.bin" grabar todas aquellas transacciones que hayan tenido algun
 * problema cuando se ingresaron los datos. Grabar todos los campos de la estructura en este archivo.
 *
 * Observacion: No hace falta que los archivos esten ordenados.
 *
 **/
typedef char char20[21];

struct
struct rDatos{
    int nroCliente;
    char20 apellido;
    char20 nombre;
    char tarjeta;
    char20 compra;
    int monto;
    int mes;

};

struct rCliente{
    int nroCliente;
    char20 apellido;
    char20 nombre;
};

struct rCompra{
    int nroCliente;
    int tarjeta;
    int compra;
    int monto;
    int mes;
};
int main() {

    //Emito titulos
    cout << "Transacciones bancarias" << endl;

    //Inicio variables
    FILE* clientes, compras, noValidas;
    rDatos datos;
    rCliente cliente;
    rCompra compra;

    //Abro archivos

    //Ingreso de datos
    cout << "Ingreso de datos: " << endl;

    //Grabo datos

    //Cierro archivos

    return 0;
}