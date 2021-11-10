/******************************************************************************\
 * Curso de Programación 1. Tema 10 (caracteres y cadenas)
 * Autores: Miguel Ángel Latre
 * Última revisión: 7 de noviembre de 2020
 * Resumen: Código de ejemplo de un vector de cadenas de caracteres.
\******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

const unsigned NUM_MESES = 12;

/*
 * Pre:  1 ≤ mes ≤ 12
 * Post: Ha escrito en la pantalla el nombre (en mayúsculas) del mes
 *       correspondiente al valor del parámetro «mes».
 * Nota: Este código lo podrás comprender adecuadamente cuando hayamos visto
 *       los temas 9 (vectores) y 10 (cadenas de caracteres).
 */
void escribirNombreMes(const unsigned mes) {
    const string NOMBRES_MES[NUM_MESES] = { "ENERO",
                                            "FEBRERO", 
                                            "MARZO", 
                                            "ABRIL", 
                                            "MAYO", 
                                            "JUNIO", 
                                            "JULIO", 
                                            "AGOSTO",
                                            "SEPTIEMBRE", 
                                            "OCTUBRE", 
                                            "NOVIEMBRE", 
                                            "DICIEMBRE" };
    cout << NOMBRES_MES[mes - 1];
}

/*
 * Programa que pide un número entre 1 y 12 al usuario y escribe en la pantalla
 * el nombre del mes correspondiente.
 */
int main() {
    cout << "Escriba un número [1-12]: ";
    int mes;
    cin >> mes;

    if (1 <= mes && mes <= 12) {
        cout << "El mes es ";
        escribirNombreMes(mes);
        cout << "." << endl;
        return 0;
    }
    else {
        cout << "El número tiene que estar entre 1 y 12." << endl;
    }
}