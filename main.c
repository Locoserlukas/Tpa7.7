#include <stdio.h>
#include <stdlib.h>
#include "Lista Static.h"

int main()
{
    Persa A, B;
    Lista Test;
    Inicializador (&A);
    Initia (&Test);
    Pusher (&Test, A);
    B = Check (Test);
    printf ("%s \n", Get_Apellido(B));
    Forward (&Test);
    Pusher (&Test, A);
     B = Check (Test);
    printf ("%s \n", Get_Apellido(B));
    Forward (&Test);
    if (IsOos(Test))
    printf ("WOW");
}
