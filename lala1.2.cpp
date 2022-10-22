#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct videojuego {

    int id, anio;
    float precio, total;
    char nombre[50], genero[50], clasificacion[50], descripcion[50];

}juego[5];



int op, opc2, opc3, num, id = 1, i = 0;
bool loop = true, encotrarjuego,contador,repetir = true;

void agregar();
//void mostrar();
//void limpiar();
void lista();
//void eliminar();

int main()
{
    while (loop) {
        cout << "\t\t=====Menu de Opciones=====" << endl;
        cout << "\t\t1. Agregar articulo" << endl;
        cout << "\t\t2. Mostrar articulo" << endl;
        cout << "\t\t3. Eliminar articulo" << endl;
        cout << "\t\t4. Lista de articulos" << endl;
        cout << "\t\t5. Limpiar pantalla" << endl;
        cout << "\t\t0. SALIR" << endl;
        cout << "\t\Ingrese una opcion: ";

        cin >> op;

        switch (op)
        {
        case 1:

            agregar();
            break;

        case 2:

            //mostrar();
            break;

        case 3:

            cout << " Que articulo desea eliminar.... " << endl;
            cout << "Estas seguro que quieres eliminar... " << endl;
            cin >> op;
            cout << "seguro? " << endl;
            cin >> op;
            cout << "Pasemos a la siguiente opcion :D" << endl;
            cin >> op;
            //eliminar();
            break;

        case 4:

            lista();
            break;

        case 5:

            cout << "Desea limpiar pantalla" << endl;
            cin >> op;
            system("cls");
            //limpiar();
            break;
        }
    }
   /* return 0;*/
}

void agregar()
{
    juego[contador].id = contador + 1;
    cin.getline(juego[contador].nombre, 100, '\n');
    cout << "Agrega el nombre del juego: ";
    //cin.getline(juego[contador].nombre, 100,'\n');
    cin.getline(juego[contador].genero, 100, '\n');
    cout << "Agrega el tipo de genero: ";
    //cin.getline(juego[contador].genero, 100, '\n');
    cin.getline(juego[contador].clasificacion, 5, '\n');
    cout << "Agrega el tipo de claficacion: ";
    cin.getline(juego[contador].clasificacion, 5, '\n');

   /* cout << "A continuacion se le mostrara los datos guardados......" << endl;*/
    cout << "Informacion guardada:" << endl;
    cout << "Juegos:" << juego[contador].nombre << endl;
    cout << "Genero:" << juego[contador].genero << endl;
    cout << "Clasificacion:" << juego[contador].clasificacion << endl;

    contador += 1;

    cout << "Regresara al menu automatimante al precionar un boton......" << endl;

    system("pause>null");
}
//void mostrar()
//{
//    cout << "Informacion guardada:" << endl;
//    cout << "Juegos:" << juego[contador].nombre << endl;
//    cout << "Genero:" << juego[contador].genero << endl;
//    cout << "Clasificacion:" << juego[contador].clasificacion << endl;
//
//}

void lista()
{
    string strClasif = "";
    string strGen = "";
    bool encontrarjuego = false;

    cout << "¿Como quieres obtener la lista?" << endl;
    cout << "1.Por clasificacion" << endl;
    cout << "2.Por genero" << endl;
    cout << "3.Imprimir toda la lista" << endl;

    cin >> op;


    switch (op)
    {
    case 1:
    {
        cout << "Introduce la clasificacion";
        cin >> strClasif;
        for (int i = 0; i < 50; i++);
        {
            if (juego[i].clasificacion == strClasif)
            {
                cout << juego[i].nombre << endl;
                encontrarjuego = true;
            }
        }
        if (encontrarjuego == false)
        {
            cout << "No se encontraron juegos con la clasificacion dada." << strClasif << endl;
        }
        break;
    }
    case 2:
    {

    }
    case 3:
    {
        cout << "Lista completa:" << endl;
        for (int i = 0; i < 50; i++);
        {
            cout << juego[i].nombre << endl;
        }
    }
    default:
    {
        cout << "Gracias por su atencion" << endl;
    }
    }
}

