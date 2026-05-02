#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

// const hace que las variables no sean modificables
int sumar(const int a, const int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}
//Se multiplica a x b y se obtiene un resultado
/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */
int esPar(int n) {
    return (n % 2) == 0;
}
