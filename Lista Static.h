#include <stdlib.h>
#include "Persona.h"

struct nodo
{
    Persa Vipd;
    struct nodo *Next;
};

typedef struct nodo Nodo;

typedef struct
{
    Nodo *Acesso;
    Nodo *Cursor;
    Nodo *CursorAux;
} Lista;

// Inicializador //

void Initia (Lista *P)
{
    (*P).Acesso = NULL;
    (*P).Cursor = NULL;
    (*P).CursorAux = NULL;
}

// Modificadores //

void Pusher (Lista *P, Persa Q)
{
    Nodo *A = (Nodo*)malloc (sizeof(Nodo));
    if ((*P).Cursor == (*P).Acesso)
    {
        (*P).Acesso = A;
        (*A).Next = (*P).Cursor;
        (*P).CursorAux = (*P).Acesso;
        (*P).Cursor = (*P).Acesso;
    }
    else
    {
        (*P).CursorAux ->Next = A;
        A->Next = (*P).Cursor;
        (*P).Cursor = A;
    }
    (*A).Vipd = Q;
}

void Suppresor (Lista*P)
{
    if ((*P).Cursor == (*P).Acesso)
    {
        (*P).Acesso = (*P).Acesso->Next;
        free ((*P).Cursor);
        (*P).CursorAux = (*P).Acesso;
        (*P).Cursor = (*P).Acesso;
    }
    (*P).Cursor = (*P).Cursor->Next;
    free ((*P).CursorAux->Next);
    (*P).CursorAux->Next = (*P).Cursor;
}

void Reset (Lista *P)
{
(*P).Cursor = (*P).Acesso;
(*P).CursorAux = (*P).Acesso;
}

void Forward (Lista *P)
{
(*P).CursorAux = (*P).Cursor;
(*P).Cursor = (*P).Cursor ->Next;
}

// Inspectores //

Persa Check (Lista P)
{
return P.Cursor ->Vipd;
}

int IsEmpty (Lista P)
{
if (P.Acesso == NULL)
return 1;
else
return 0;
}

int IsOos (Lista P)
{
if (P.Cursor == NULL)
return 1;
else
return 0;
}

int IsFull ()
{
Nodo *Q;
Q = (Nodo*)malloc(sizeof (Nodo));
if (Q == NULL)
{
    free (Q);
    return 1;
}
else
{
    free (Q);
    return 0;
}
}
