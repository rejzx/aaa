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

void init(){}

carNode* fillNode(){return 0;}

carNode* insertedNode(){return 0;}

void insertAt(){}

void n(){}

void v(){}

void fC(){}

void zN(){}

void z(){}

void p(){}

void h(){}

void a(){}

int k(){}

int main(){
    FILE *pFile = NULL ;
    linkedList list;

    while (true) {
        int q = getchar();
        if (q == 'k') {break;}
        switch(q)
        {
        case 'n':
            n();
            break;

        case 'v':
            v();
            break;

        case 'p':
            p();
            break;

        case 'z':
            z();
            break;

        case 'h':
            h();
            break;

        case 'a':
            a();
            break;


        }

    }
    k();
    return 0;
}

