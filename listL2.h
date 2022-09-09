//
// Created by JAD on 09/09/2022.
//

#ifndef UNTITLED36_LISTL2_H
#define UNTITLED36_LISTL2_H
#include <stdio.h>
#include <stdlib.h>

struct Cell {
    int data;
    struct Cell* next;
};
typedef struct Cell Cell;

struct List {
    Cell* head;
};
typedef Struct List List;

List* createEmptyList();
Cell* createCellFromData(int data);
void addCellToEndOfList (List* list, Cell cellToAdd);

#endif //UNTITLED36_LISTL2_H
