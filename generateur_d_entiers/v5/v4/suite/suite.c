#include <stdio.h>
#include "suite.h"
#include "generator.h"

//Adapter ce module à la nouvelle version du générateur d'entiers

void e_suite(int longueur)
{

    generator_define_first(new_first_value);
    printf("(");
    while (longueur-- >= 0)
    {
        printf("%d , ", generator_define_step(newstep));
    }
    printf(")");
}
