# Skill Builder 09

## Error Handling with try / catch

> "Programming is a skill. Skills are built through practice."

---

## Objective

En Chapter 09 vimos cómo un programa reacciona cuando algo sale mal sin terminar de golpe: `throw` para señalar el problema, `try` / `catch` para capturarlo, excepciones estándar como `std::invalid_argument` y `std::out_of_range` (por ejemplo con `stoi`), y el mismo patrón aplicado al leer un archivo CSV de SoundWave línea por línea.

Esta práctica **no tiene calificación**.

---

## Ejercicio recomendado en HackerRank

Resuélvelo en C++ usando solo lo visto hasta ahora (`try`, `catch`, mensajes de excepción, flujo que continúa después del error).

1. **[Cpp exception handling](https://www.hackerrank.com/challenges/cpp-exception-handling/problem)** — Medium (Prepare > C++ > Debugging).

   **Nota de transparencia:** HackerRank lo cataloga como Medium, pero el patrón que pide —capturar una excepción específica, imprimir su mensaje y asegurar que el programa siga su flujo normal— es exactamente el patrón básico visto en clase. No requiere clases propias ni estructuras fuera del temario del curso.

---

## Sobre try/catch con archivos

No se encontró un ejercicio de HackerRank que combine `try` / `catch` con archivos reales: su juez usa entrada estándar (`stdin`), no archivos en disco. Esa práctica específica queda cubierta por el laboratorio de pizarra de la clase (la docente lo resuelve con el grupo y luego comparte la versión resuelta).

---

## Reto bonus (opcional)

En el repo, no en HackerRank: abrí uno de los demos de Chapter 08 que lea un CSV (por ejemplo, el de reproducciones) y agregá manejo de errores con `try` / `catch` alrededor de la conversión numérica (`stoi` o similar). Introducí a propósito una línea con un dato corrupto, reportala y dejá que el programa siga procesando el resto del archivo — el mismo enfoque del Demo 03 de este capítulo.

---

## Estimated Time

30–45 minutos.

---

## Self Check

Antes del próximo tema pregúntate:

- ¿Sé cuándo usar `throw` y qué mensaje conviene pasar a `runtime_error`?
- ¿Puedo escribir un `try` con un `catch (const runtime_error& error)` e imprimir `error.what()`?
- ¿Entiendo por qué el orden de los `catch` va de más específico a más genérico?
- ¿Puedo usar `try` / `catch` con `stoi` para no abortar al leer una línea corrupta de un archivo?

Si respondiste **sí** a todas, estás listo para continuar.

---

## Coming Next

El laboratorio de cierre de este capítulo se resuelve en clase en pizarra (ejercicio separado). En el repositorio, el siguiente material del curso continúa según el calendario de la docente.
