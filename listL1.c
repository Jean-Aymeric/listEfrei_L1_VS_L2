//
// Created by JAD on 09/09/2022.
//

#include "listL1.h"

Cell* createCellFromData(int data) {
    Cell* newCell = malloc(sizeof (Cell));
    if (newCell != NULL) {
        newCell->next = NULL;
        newCell->data = data;
    }
    return newCell;
}
int isCellAlreadyInList(Cell list, Cell cellToCheck) {
    Cell* temporaryCell = &list;
    while(temporaryCell->next != NULL) {
        if (temporaryCell == &cellToCheck) {
            return 1;
        }
        temporaryCell = temporaryCell->next;
    }
    return 0;
}

void addCellToEndOfList (Cell** list, Cell cellToAdd) {
    if (*list != NULL) {
        if (! isCellAlreadyInList(**list, cellToAdd)) {
            Cell *temporaryCell = *list;
            while (temporaryCell->next != NULL) {
                temporaryCell = temporaryCell->next;
            }
            temporaryCell->next = &cellToAdd;
        }
    } else {
        *list = &cellToAdd;
    }
}