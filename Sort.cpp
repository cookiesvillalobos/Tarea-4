//
// Created by kei98 on 05/05/19.
//

#include "Sort.h"

#include <string>
using namespace std;

Sort::Sort() {

}

void Sort::sort(string *arr, int leftI, int rightI) {
    if(leftI < rightI){
        //Se calcula el medio para cada arreglo
        int m = leftI + (rightI -leftI)/2;

        //Se llama a sí misma para dividir los arreglos
        sort(arr, leftI, m);
        sort(arr, m+1, rightI);

        sort(arr, leftI, m, rightI);


    }

}

void Sort::sort(string *arr, int leftI, int middleI, int rightI) {
    int i, j, k;
    //Se calcula de cuánto será cada subarreglo
    int n1 = middleI - leftI + 1;
    int n2 =  rightI - middleI;

    string L[n1];
    string R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[leftI + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[middleI + 1+ j];

    i = 0;
    j = 0;
    k = leftI;
    while (i < n1 && j < n2)
    {
        //Se hace la comparación y se inserta el menor en
        //la posición que le corresponde en el arreglo "original",
        //se van recombinando los subarreglos temporales
        if (L[i].compare(R[j]) <= 0)
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Si queda algún elemento en L[], se copia al arreglo "original"
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Si queda algún elemento en R[], se copia al arreglo "original"
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

}

void Sort::print(string *arr, int arrS) {
    for(int i = 0; i < arrS; i++){
        printf("%s", arr[i].c_str());
        printf("%s", ", ");

    }
    printf("\n");

}

