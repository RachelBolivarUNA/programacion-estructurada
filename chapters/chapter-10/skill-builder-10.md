# Skill Builder 10

## Casos de prueba y pruebas unitarias

> "Programming is a skill. Skills are built through practice."

---

## Objective

En Chapter 10 vimos cómo comprobar una función con casos escritos antes de mirar el código: valores normales, de límite e inválidos; un arnés manual que imprime PASS o FAIL; y `assert` como chequeo rápido mientras se desarrolla.

Esta práctica aplica eso a una función nueva. **No tiene calificación.**

---

## Enunciado

Implementá la función `string gradeMessage(int score)`.

Devuelve exactamente estas cadenas:

- `"Invalido"` si `score < 0` o `score > 100`
- `"Reprobado"` si `score < 70`
- `"Aprobado"` si `70 <= score < 90`
- `"Excelente"` si `score >= 90`

Un valor fuera de 0 a 100 es `"Invalido"` aunque también caiga en otra regla. Por ejemplo, 101 se queda en `"Invalido"` (no pasa a `"Excelente"`) y -1 se queda en `"Invalido"` (no pasa a `"Reprobado"`).

El corte de 70 no es casualidad: es la nota mínima de aprobación real de este curso.

---

## Parte 1 — La tabla, antes del código

Diseñá la tabla **antes** de escribir `gradeMessage`. Al menos 6 casos, cubriendo estos tres grupos (en la práctica quedan más de 6 filas):

- **Normales:** al menos un valor cómodo de cada mensaje válido, lejos del corte.
- **Límite:** 69 y 70, 89 y 90.
- **Inválidos:** -1 y 101.

| score | expected | tipo |
|------:|----------|------|
|       |          | normal / límite / inválido |

Completá la columna `expected` a partir del enunciado, con la tabla todavía en comentarios o en papel. El caso que más suele fallar es el límite.

---

## Parte 2 — La función

Implementá `gradeMessage` en un `.cpp` propio. Librerías permitidas: `<iostream>`, `<string>` y, si hacés el bonus, `<cassert>`. Sin clases y sin `try` / `catch`.

---

## Parte 3 — El arnés

Escribí una función `runTest` como la de [demo-01-manual-test-harness.cpp](demo-01-manual-test-harness.cpp) y [demo-02-fixed-test-harness.cpp](demo-02-fixed-test-harness.cpp): recibe el dato, el resultado esperado y dos contadores por referencia (`passed` y `failed`). Corré todos los casos de tu tabla y reportá el conteo:

```
Pruebas exitosas: ...
Pruebas fallidas: ...
```

Si un límite falla, corregí la función y volvé a correr la tabla completa. Conservá el caso que falló.

---

## Bonus Challenge

Agregá también 2 o 3 chequeos con `assert()` para los casos más obvios (por ejemplo un inválido, un aprobado y un excelente). Si un `assert` falla, el programa se detiene ahí. El arnés de la Parte 3 sigue siendo el que recorre la tabla entera.

---

## Entregable

Un archivo `.cpp` (por ejemplo `grade-message-tests.cpp`) con:

1. La tabla de la Parte 1 escrita en comentarios, arriba de la función.
2. `gradeMessage`.
3. `runTest` y un `main` que ejecuta toda la tabla e imprime el conteo.

No se sube al repositorio del curso y no se califica. Guardalo con tus apuntes.

---

## Nota de transparencia

A diferencia de otros skill builders del curso, este capítulo no tiene un ejercicio externo de HackerRank recomendado. HackerRank no tiene ejercicios enfocados en diseñar y escribir pruebas: sus retos evalúan un programa final, no el proceso de probarlo. La práctica de este capítulo vive completa en este documento.

---

## Estimated Time

25–35 minutos.

---

## Self Check

Antes de dar por cerrada la práctica pregúntate:

- ¿Armé la tabla antes de escribir la función, con normales, límites (69/70, 89/90) e inválidos (-1, 101)?
- ¿Puedo explicar por qué 70 es `"Aprobado"` y 69 es `"Reprobado"`, y por qué 101 se queda en `"Invalido"`?
- ¿Mi `runTest` compara el resultado real con el esperado y cuenta las pruebas exitosas y las fallidas?
- ¿Sé que un `assert` falso aborta el programa, y en qué se diferencia del FAIL del arnés manual?

Si respondiste **sí** a todas, el hábito de este capítulo ya está.

---

## Coming Next

No hay un Chapter 11 de contenido nuevo. Este skill builder cierra el curso: el paso que se lleva es probar el límite a propósito antes de dar una función por buena.
