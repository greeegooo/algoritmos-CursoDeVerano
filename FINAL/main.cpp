#include <iostream>

using namespace std;

/*-------------------------------------------------
                    Constantes
 -------------------------------------------------*/

#define CERO 0
#define UNO 1
#define DOCE 12
#define VEINTE 20

/*-------------------------------------------------
            Estructuras del ejercicio 1
 -------------------------------------------------*/

struct trDatos{
    int nroCliente;
    char apellido[VEINTE];
    char nombre[VEINTE];
    char tarjeta;
    char compra[VEINTE];
    int monto;
    int mes;
};

struct trCliente{
    int nroCliente;
    char apellido[VEINTE];
    char nombre[VEINTE];
};

struct trCompras{
    int nroCliente;
    char tarjeta;
    char compra[VEINTE];
    int monto;
    int mes;
};

struct Nodo{
    trDatos info;
    Nodo* sgte;
};

/*-------------------------------------------------
            Estructuras del ejercicio 2
 -------------------------------------------------*/

struct datoSubLista{
    char tarjeta;
    char compra[VEINTE];
    int monto;
};

struct NodoSubLista{
    datoSubLista info;
    NodoSubLista* sgte;
};

struct datoLista{
    int nroCliente;
    NodoSubLista* sgte;
};

struct NodoLista{
    datoLista info;
    NodoLista* sgte;
};

//Tambien utilizamos trCompras

/*-------------------------------------------------
              Metodos del ejercicio 1
 -------------------------------------------------*/

void Push(Nodo* &Pila, trDatos valor){
    Nodo* p = new Nodo();
    p->info = valor;
    p->sgte = Pila;
    Pila = p;
}

trDatos Pop(Nodo* &Pila){
    trDatos valor;
    Nodo* p = Pila;
    valor = p->info;
    Pila = p->sgte;
    delete(p);
    return valor;
}

/*-------------------------------------------------
              Metodos del ejercicio 2
 -------------------------------------------------*/

NodoSubLista* InsertarPrimero(NodoSubLista* &Lista, datoSubLista valor){
    NodoSubLista* p = new NodoSubLista();
    strcpy(p->info.compra, valor.compra);
    p->info.monto = valor.monto;
    p->info.tarjeta = valor.tarjeta;
    p->sgte = Lista;
    Lista = p;
    return p;
}

NodoLista* Buscar(NodoLista* &Lista, datoLista buscado){
    NodoLista* p = Lista;
    while(p != NULL && p->info.nroCliente != buscado.nroCliente){
        p = p->sgte;
    }
    return p;
}

NodoLista* InsertarOrdenado(NodoLista* &Lista, datoLista valor){
    if(Lista == NULL || valor.nroCliente < Lista->info.nroCliente){
        NodoLista * p = new NodoLista();
        p->info.nroCliente = valor.nroCliente;
        p->info.sgte = valor.sgte;
        p->sgte = Lista;
        Lista = p;
        return p;
    }else{
        NodoLista* q = new NodoLista();
        NodoLista* p = Lista;
        q->info.nroCliente = valor.nroCliente;
        q->info.sgte = valor.sgte;
        while(p->sgte != NULL &&  valor.nroCliente > p->sgte->info.nroCliente){
            p = p->sgte;
        }
        q->sgte = p->sgte;
        p->sgte = q;
        return q;
    }
}

NodoLista* InsertarSinRepetir(NodoLista* &Lista, datoLista valor){
    NodoLista* p = Buscar(Lista,valor);
    if (p == NULL){
        p = InsertarOrdenado(Lista,valor);
    }
    return p;
}

/*-------------------------------------------------
                    Ejercicio 1)
 -------------------------------------------------*/

void Ejercicio1(){

    //Iniciamos variables
    FILE* fClientes;
    FILE* fCompras;
    trDatos rDato;
    trCliente rCliente;
    trCompras rCompras;
    int opcion = UNO;
    Nodo* Pila = NULL;

    //Abrimos los  archivos
    fClientes = fopen("Clientes.bin","wb");
    fCompras = fopen("Compras.bin","wb");

    //Pedimos los datos al usuario
    cout << "INGRESO DE DATOS: " << endl << endl;
    while(opcion != CERO){
        cout << "nroCliente: ";
        cin >> rDato.nroCliente;

        cout << "apellido: ";
        cin >> rDato.apellido;

        cout << "nombre: ";
        cin >> rDato.nombre;

        cout << "tarjeta: ";
        cin >> rDato.tarjeta;

        cout << "compra: ";
        cin >> rDato.compra;

        cout << "monto: ";
        cin >> rDato.monto;

        cout << "mes: ";
        cin >> rDato.mes;

        Push(Pila, rDato);
        cout << "seguir? 1 si ; 0 no: ";
        cin >> opcion;
        cout << endl << endl;
    }

    //Grabamos los archivos
    while (Pila != NULL){
        //Saco los datos de la pila
        rDato = Pop(Pila);

        //Preparamos para grabar en Clientes.bin
        rCliente.nroCliente = rDato.nroCliente;
        strcpy(rCliente.apellido,rDato.apellido);
        strcpy(rCliente.nombre,rDato.nombre);

        //Preparamos para grabar en Compras.bin
        rCompras.nroCliente = rDato.nroCliente;
        rCompras.tarjeta = rDato.tarjeta;
        strcpy(rCompras.compra,rDato.compra);
        rCompras.monto = rDato.monto;
        rCompras.mes = rDato.mes;

        fwrite(&rCliente, sizeof(trCliente), UNO, fClientes);

        fwrite(&rCompras, sizeof(trCompras), UNO, fCompras);
    }

    //Cerramos archivos
    fclose(fClientes);
    fclose(fCompras);

    //Probamos que existen los datos en el archivo
    /*
    fClientes = fopen("Clientes.bin","rb");
    fCompras = fopen("Compras.bin","rb");

    cout << endl << endl << "CLIENTES.BIN" << endl << endl;
    while (fread(&rCliente, sizeof(trCliente),1,fClientes)){
        cout << rCliente.nroCliente << " "
             << rCliente.apellido << " "
             << rCliente.nombre
             << endl;
    }

    cout << endl << endl << "COMPRAS.BIN" << endl << endl;
    while (fread(&rCompras, sizeof(trCompras),1,fCompras)){
        cout << rCompras.nroCliente << " "
             << rCompras.tarjeta << " "
             << rCompras.compra << " "
             << rCompras.monto << " "
             << rCompras.mes
             << endl;
    }
    */
}

/*-------------------------------------------------
                    Ejercicio 2)
 -------------------------------------------------*/

void Ejercicio2(){

    //Iniciamos variables
    FILE* fCompras;
    trCompras rCompras;
    NodoLista* vListas[DOCE] = {NULL};
    datoLista valorListaPrincipal;
    datoSubLista valorSubLista;
    NodoLista* aux = NULL;
    int mes = CERO;

    //Abrimos el archivo
    fCompras = fopen("Compras.bin","rb");

    //Hacemos magia
    while(fread(&rCompras, sizeof(trCompras),1,fCompras)){
        mes = rCompras.mes;

        valorListaPrincipal.nroCliente = rCompras.nroCliente;
        valorListaPrincipal.sgte = NULL;

        aux = InsertarSinRepetir(vListas[mes],valorListaPrincipal);

        strcpy(valorSubLista.compra, rCompras.compra);
        valorSubLista.monto = rCompras.monto;
        valorSubLista.tarjeta = rCompras.tarjeta;

        InsertarPrimero(aux->info.sgte, valorSubLista);
    }

    //Cerramos los archivos
    fclose(fCompras);
}

/*-------------------------------------------------
                       Main
 -------------------------------------------------*/
int main() {
    cout << "Hello, FINAL!" << endl;

    //Ejercicio 1
    Ejercicio1();

    //Ejercicio 2
    Ejercicio2();

}