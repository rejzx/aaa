#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

typedef struct carNode {

    char  category [50];
    char  mark     [50];
    char  seller  [100];
    long   prize;
    long   dateOfMade;
    char  actualCondition[200];
    struct carNode *next;
} carNode;

typedef struct linkedList {

    carNode* head;
    carNode* tail;
    int size;

} linkedList;

void init(linkedList** list){

}

carNode* fillNode(FILE *pFile){

    return 0;
}

carNode* insertedNode(void){

    return 0;
}

void insertAt(linkedList* list){

}

void fOpen(linkedList* list,FILE* pFile){

    int numEntries =0;
    char riadok[200];
    pFile = fopen("C:\\Users\\Richard Gehrer\\Desktop\\Richard_Gehrer_Projekt_2\\auta.txt", "r");
    if(!pFile){printf("Zaznamy neboli nacitane"); return;}
    init(&list);

    while(fgets(riadok,200,pFile)){
        if (riadok[0]=='$'){ numEntries++;}
    }
    rewind(pFile);
    printf("Nacitalo/i sa %d zaznamov\n",numEntries);
    list->size = numEntries ;


    list->head = fillNode(pFile);
    carNode *current = list->head;
    for (int i = 1;i < numEntries; i++){
        current->next = fillNode(pFile);
        current = current->next;
    }
    list->tail = current;
}

void showList(linkedList* list){

}

void freeClose(linkedList* list){

}

void deleteNode(linkedList** list, carNode* node){

}

void deleteNodeWithSimularity(linkedList* list){

}

void printInfo(carNode* current){

}

void seekNodes(linkedList* list){

}

void editNode(linkedList* list){

}

int end(FILE* pFile,linkedList* list){

}

int main(){
    FILE *pFile = NULL ;
    linkedList list;

    while (true) {
        int q = getchar();
        if (q == 'k') {break;}
        switch(q)
        {
        case 'n':
            fOpen(&list,pFile);
            break;

        case 'v':
            showList(&list);
            break;

        case 'p':
            insertAt(&list);
            break;

        case 'z':
            deleteNodeWithSimularity(&list);
            break;

        case 'h':
            seekNodes(&list);
            break;

        case 'a':
            editNode(&list);
            break;


        }

    }
    end(pFile,&list);
    return 0;
}

