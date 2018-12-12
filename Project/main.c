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
    char a[10];

    carNode* newNode = (carNode*) malloc (sizeof(carNode));

    fgets (a, 10, pFile);                                               // printf("%s",a);
    fgets (newNode ->category, 50, pFile);                   // printf("%s",newNode->category);
    fgets (newNode ->mark, 50, pFile);                        // printf("%s",newNode ->mark);
    fgets (newNode ->seller, 100, pFile);                      // printf("%s",newNode ->seller);
    fscanf (pFile, "%ld", &newNode ->prize);                // printf("%ld\n",newNode ->prize);
    fscanf (pFile, "%ld", &newNode ->dateOfMade);      // printf("%ld\n",newNode ->dateOfMade);
    fgets (a, 10, pFile);                                               // printf("%s",a);
    fgets (newNode ->actualCondition, 200, pFile);        // printf("%s",newNode ->actualCondition);

    return newNode;
}

carNode* insertedNode(){


    carNode* newNode = (carNode*) malloc (sizeof(carNode));

    getchar();
    fgets (newNode ->category,50,stdin);
    fgets (newNode ->mark,50,stdin);
    fgets (newNode ->seller,100,stdin);
    scanf ("%ld", &newNode ->prize);
    scanf ("%ld", &newNode ->dateOfMade);
    getchar();
    fgets (newNode ->actualCondition,200,stdin);
    return newNode;
}

void insertAt(linkedList* list){
    int pos;
    scanf("%d",&pos);
    if(pos<1){printf("Invalid position"); return;}
    else if(pos>list->size){
        printf("Zaznam bude pridany na koniec zoznamu");
        carNode* newNode = insertedNode();
        list->tail->next = newNode;
        newNode->next = NULL;
        list->tail = newNode;
        return;
    }

    printf("Insert new car\n");
    carNode* newNode = insertedNode();

    if ((list)->head == NULL){
        (list)->head = newNode;
        (list)->tail = newNode;
    }

    carNode* current = list->head ;
    for(int i = 1;i < pos-1; i++){
        current = current->next;
    }
    newNode ->next = current->next;
    current -> next = newNode;


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

    int i = 0;
    carNode* current = list->head;

    while(current->next != NULL){
        printf("%d.\n",++i);
        printf("%s",current->category);
        printf("%s",current ->mark);
        printf("%s",current ->seller);
        printf("%ld\n",current ->prize);
        printf("%ld\n",current ->dateOfMade);
        printf("%s",current ->actualCondition);
        current = current->next;
    }
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

