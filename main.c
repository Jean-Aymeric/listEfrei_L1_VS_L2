#include <stdio.h>
#include "listL1.h"

int main() {
    Cell* myList = NULL;
    printf("%d\n", myList);
    Cell* newCell = createCellFromData(18);
    addCellToEndOfList(&myList, *newCell);
    printf("%d\n", myList->data);
    return 0;
}
