//
// Created by JAD on 09/09/2022.
//

#ifndef UNTITLED36_LISTL1_H
#define UNTITLED36_LISTL1_H
#include <stdio.h>
#include <stdlib.h>

struct Cell {
    int data;
    struct Cell* next;
};

typedef struct Cell Cell;

Cell* createCellFromData(int data);
void addCellToEndOfList (Cell** list, Cell cellToAdd);
#endif //UNTITLED36_LISTL1_H
