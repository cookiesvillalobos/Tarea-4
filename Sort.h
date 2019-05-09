//
// Created by kei98 on 05/05/19.
//

#ifndef EXTRA4_SORT_H
#define EXTRA4_SORT_H

#include <string>

using namespace std;

class Sort {
public:
    Sort();

    void sort(string arr[], int leftI, int rightI);
    void print(string arr[], int arrS);
private:
    void sort(string arr[], int leftI, int middleI, int rightI);


};




#endif //EXTRA4_SORT_H
