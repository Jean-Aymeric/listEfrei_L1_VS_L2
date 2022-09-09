//
// Created by JAD on 09/09/2022.
//

#include "listL2.h"

List* createEmptyList() {
    List* newList = malloc(sizeof (List));
    if (newList != NULL) {
        newList->head = NULL;
    }
    return newList;
}

Cell* createCellFromData(int data) {
    Cell* newCell = malloc(sizeof (Cell));
    if (newCell != NULL) {
        newCell->next = NULL;
        newCell->data = data;
    }
    return newCell;
}
int isCellAlreadyInList(List list, Cell cellToCheck) {
    Cell* temporaryCell = list.head;
    while(temporaryCell->next != NULL) {
        if (temporaryCell == &cellToCheck) {
            return 1;
        }
        temporaryCell = temporaryCell->next;
    }
    return 0;
}

void addCellToEndOfList (List* list, Cell cellToAdd) {
    if ((list != NULL) && (list->head != NULL))  {
        if (! isCellAlreadyInList(*list, cellToAdd)) {
            Cell *temporaryCell = list;
            while (temporaryCell->next != NULL) {
                temporaryCell = temporaryCell->next;
            }
            temporaryCell->next = &cellToAdd;
        }
    } else {
        if (list != NULL) {
            list->head = cellToAdd;
        }
    }
}