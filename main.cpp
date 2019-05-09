#include <iostream>
#include "Sort.h"
#include <string>
using namespace std;

/**
 * La clase Sort es un algoritmo de ordenamiento de string, conocido como Merge sort,
 * el cual se encarga de dividir el arreglo en subarreglos mediante recursividad,
 * hasta que sean de un único elemento (ya que para este punto los subarreglos
 * están ordenados), luego se comparan con los demás y se recombinan hasta llegar
 * al largo del arreglo original. Este algoritmo es una representación de la práctica
 * de "Divide y vencerás", ya que el problema se divide en subproblemas más sencillos
 * de solucionar.
 * @return
 */

int main() {
    string arr[] = {"chemical", "cushion", "slave", "value", "slip", "soup", "fowl", "blind", "fear", "proud", "shaggy", "thundering", "pointless", "toe", "aftermath", "unadvised", "corn", "size", "pin", "tall", "announce", "equable", "cub", "dependent", "waste", "oatmeal", "vivacious", "plant",
            "damaging", "disturbed", "veil", "turn", "smile", "servant", "shut", "store", "lively", "dazzling", "mist", "versed", "reduce", "fresh", "penitent", "scare", "agreement", "majestic", "dad", "board", "intend", "glass" };
    int size = sizeof(arr)/sizeof(arr[0]);

    Sort *s = new Sort();

    printf("Disordered array: \n");
    s->print(arr, size);

    s->sort(arr, 0, size - 1);

    printf("\n Sorted: \n");
    s->print(arr, size);

    return 0;
}