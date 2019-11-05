//
// Created by Bill on 5/11/2019.
//

#ifndef INC_131_ALGORITHMS_UF_H
#define INC_131_ALGORITHMS_UF_H

#include <rpcndr.h>

int *id;
int count;

void Initial(int N);
boolean Connected(int p, int q);
int Find(int p);
void Union(int p, int q);

#endif //INC_131_ALGORITHMS_UF_H
