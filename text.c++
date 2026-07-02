//Encriptado de txt
#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main()
{

    {
        fstream archivo("/home/sisu/Documentos/??.txt",ios::in);
        string linea;

        int op;
        cout << "1: leer registro \n2.-salir\n";
        cin >> op;

        if (op == 1)
        {

            if (!archivo.is_open())

                archivo.open("??.txt", ios::in);
            while (getline(archivo, linea))
                cout << linea << "\n";

            archivo.close();
            system("pause");
        }
    }
}
