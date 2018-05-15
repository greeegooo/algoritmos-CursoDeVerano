/*
Un vendedor desea generar un programa capaz de almacenar las ventas del dia
en archivos cuyo nombre lleva el dia correspondiente dentro de la carpeta del mes correspondiente.
El programa solo puede almacenar 100 ventas por dia.
Hacer una interfaz tipo menu con las siguientes opciones:
1 - crear venta
2 - eliminar venta
3 - buscar venta
4 - MAXIMO MINIMO PROMEDIO Y TOTAL DE VENTAS DEL DIA
5 - MAXIMO MINIMO PROMEDIO Y TOTAL DE VENTAS DEL MES
6 - cambiar fecha.
7 - Generar archivo de venta del dia tipo txt
0 - Finalizar programa
nota: se ingresa una fecha antes de empezar tipo AAAAMMDD,
todo se hace sobre esa fecha hasta cambiarla.
La venta contiene: id,categoria, producto, monto, cantidad vendida.
 */

#include <iostream>
#include <stdlib.h>

using namespace std;

typedef char char30[31];

struct rVenta{
    int id,
        categoria;
    char30 producto;
    int monto,
        cantVendida;

};

int main() {
    cout << "PROGRAMA DE VENTAS MAKINSON" << endl;

    //Inicio variables
    char fecha[9];
    rVenta buffer;
    FILE* fVentas;


    cout << "Ingrese la fecha: " << endl << "AAAAMMDD" << endl;
    cin >> fecha;

    fVentas = fopen(strcat(fecha,".bin"), "wb");

    cin >> buffer.id >> buffer.categoria >> buffer.producto >> buffer.monto >> buffer.cantVendida;

    fwrite(&buffer, sizeof(rVenta), 1, fVentas);

    fclose(fVentas);


    fVentas = fopen("33333333.bin", "rb");

    while(fread(&buffer, sizeof(rVenta), 1, fVentas)){
        cout << buffer.producto;
    }

    fclose(fVentas);

    return 0;
}