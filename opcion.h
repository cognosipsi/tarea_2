#ifndef OPCION_H
#define OPCION_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include "list.h"
#include "opcion.h"
#include "hashmap.h"
#include "treemap.h"



const char *get_csv_field (char *, int);

void opcion_1(HashMap *MapaNombre, HashMap *MapaNombreDex,HashMap *MapaTipo,TreeMap *ArbolDex,TreeMap *ArbolPc, TreeMap *ArbolPs);

void opcion_2(HashMap *);

void opcion_3(HashMap *);

void opcion_4(HashMap *);

void opcion_5(HashMap *);

void opcion_6(TreeMap *);

void opcion_7(TreeMap *);

void opcion_8(TreeMap *);

void opcion_9(HashMap *MapaNombre, HashMap *MapaNombreDex, HashMap *MapaTipo, TreeMap *ArbolDex);

void opcion_10(List *L);



#endif