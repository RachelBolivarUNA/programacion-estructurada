# Chapter 10

## Casos de prueba y pruebas unitarias

En este capítulo SoundWave deja de confiar en “probé un valor y funcionó”. Antes de leer la función que clasifica reproducciones, armamos una tabla de casos — normales, límite e inválidos — y la corremos con un arnés manual que imprime PASS o FAIL. Un solo caso límite (10 reproducciones) deja el bug a la vista. Después, `assert` de `<cassert>` sirve como chequeo corto mientras se desarrolla.

Este es el **último capítulo de contenido nuevo** del curso. Acompaña un video asincrónico: no hay sesión en vivo, no hay laboratorio grupal y no hay challenge de código. El cierre es un Skill Builder individual, sin calificación.

---

## Topics covered

- Casos de prueba: valores normales, límite e inválidos, diseñados antes de leer el código
- Arnés manual (`runTest`, PASS/FAIL, contadores `passed` y `failed`)
- Un bug real de límite (`<=` frente a `<`) y la misma tabla después del arreglo
- `assert` de `<cassert>`: qué comprueba, y que una aserción falsa aborta el programa

---

## Demos

| File | What you will learn |
|------|---------------------|
| [demo-01-manual-test-harness.cpp](demo-01-manual-test-harness.cpp) | Un arnés PASS/FAIL sobre `classifyPlayCount`. La tabla se diseñó antes de leer el código y deja al descubierto un bug en el límite 10. |
| [demo-02-fixed-test-harness.cpp](demo-02-fixed-test-harness.cpp) | La misma tabla y el mismo `runTest`, con el límite corregido (`playCount < 10`). Los 8 casos pasan. |
| [demo-03-assert-basics.cpp](demo-03-assert-basics.cpp) | `assert` como chequeo liviano durante el desarrollo, y qué mensaje aparece si una aserción falla. |

---

## Skill Builder

| File | What you will practice |
|------|------------------------|
| [skill-builder-10.md](skill-builder-10.md) | Diseñar casos, implementar `gradeMessage` y correrlos con `runTest` (sin calificación). No hay ejercicio de HackerRank para este tema. |

---

## Cómo compilar

Cada archivo se compila de forma independiente. Ejecutá los demos desde esta carpeta (`chapters/chapter-10/`).

```bash
g++ -std=c++17 -o demo-01 demo-01-manual-test-harness.cpp && ./demo-01
```

```bash
g++ -std=c++17 -o demo-02 demo-02-fixed-test-harness.cpp && ./demo-02
```

```bash
g++ -std=c++17 -o demo-03 demo-03-assert-basics.cpp && ./demo-03
```

---

## Consejo de estudio

Leé la tabla de casos del Demo 01 antes de leer `classifyPlayCount`. Pregúntate:

1. ¿Por qué el caso 10 es un límite y el caso 50 no?
2. ¿Qué cambia entre el Demo 01 y el Demo 02, y por qué el resto de la tabla sigue igual?
3. ¿En qué se diferencia un FAIL del arnés manual de un `assert` que aborta el programa?

---

## Coming Next

No hay un capítulo siguiente de contenido nuevo. Este cierra el curso: el hábito que se lleva es diseñar los casos límite antes de dar la función por buena.
