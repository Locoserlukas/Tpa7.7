#include <string.h>
#include <stdlib.h>

typedef struct
{
char Nombre [31];
char Apellido [31];
int DNI;
char Email [51];
}Persa;

// Inicializadores //

void Inicializador (Persa *A)
{
    strcpy ((*A).Nombre, "Lucas");
    strcpy ((*A).Apellido, "Alfonso");
    (*A).DNI = 46808357;
    strcpy ((*A).Email, "alfonsolucas.valentin2006@gmail.com");
}

// Ingresos //

void Set_Nombre (Persa *A, char *B)
{
    strcpy ((*A).Nombre, B);
}

void Set_Apellido (Persa *A, char *B)
{
    strcpy ((*A).Apellido, B);
}

void Set_Dni (Persa *A, int B)
{
    (*A).DNI = B;
}

void Set_Email (Persa *A, char *B)
{
    strcpy ((*A).Email, B);
}

// Salidas //

char* Get_Nombre (Persa A)
{
char *P;
P = (char*)malloc(sizeof(A.Nombre)+1);
if (P == NULL)
    exit (1);
strcpy(P, A.Nombre);
return P;
}

char* Get_Apellido (Persa A)
{
char *P;
P = (char*)malloc(sizeof(A.Apellido)+1);
if (P == NULL)
    exit (1);
strcpy(P, A.Apellido);
return P;
}

int Get_DNI (Persa A)
{
return A.DNI;
}

char* Get_Email (Persa A)
{
char *P;
P = (char*)malloc(sizeof(A.Email)+1);
if (P == NULL)
    exit (1);
strcpy(P, A.Email);
return P;
}

// Operaciones Adicionales //

int Search (Persa *A, int DNI, int cant) // tira el indice del buscado, usar para los get //
{
int X, Y = -1;
for (X=0;(X<cant);X++)
{
    if (A[X].DNI == DNI)
    {
    Y = X;
    }
    else
    {}
}
return Y;
}
