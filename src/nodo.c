#include "nodo.h"

Nodo *nodo_crear(void *info, size_t size)
{
    Nodo *nuevo = (Nodo*)malloc(sizeof(Nodo));
    if (nuevo != NULL)
    {
        nuevo -> sig = NULL
        nuevo -> ant = NULL
        nuevo -> info = malloc(size_t);
    }
}
void nodo_eliminar(Nodo *nodo)
{
    if(!nodo -> sig && !nodo -> ant)
    {
        free(nodo -> info);
        free(nodo);
    }
    else
    {
        printf("El nodo se puede liberar\n");
    }
}

bool nodo-actualizar(Nodo *nodo, void *info, size_t size)
{
        nodo->info = realloc(nodo->info, size);
        if (!nodo-> info) return false;
        memcpy(nodo-> info, info, size);
}