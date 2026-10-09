# Chapter 08

## How Does a Program Remember Things After It Closes?

En este capítulo abrimos el Tema IV (archivos). Hasta ahora SoundWave guarda reproducciones solo mientras el programa está abierto. Aquí el programa escribe esa información en un archivo de texto y la vuelve a leer: abrir, escribir y cerrar, leer línea por línea, detectar con `if` un archivo que no se pudo abrir (sin `try`/`catch`) y guardar la grilla de géneros en un CSV.

Este capítulo **no tiene challenge**. En clase el instructor guía los demos. El cierre es una **tarea individual para la casa**: no es un lab grupal, no se entrega y no se califica. [lab-01-playlist-csv.cpp](lab-01-playlist-csv.cpp) es la solución de referencia, para consultar después de intentarla por cuenta propia.

---

## Topics covered

- Open, write, and close a text file (`ofstream`, `close()`)
- Read a text file line by line (`ifstream`, `getline`)
- Basic error handling with `if` and `is_open()` (no `try`/`catch`)
- CSV: one row per line, fields separated by commas, parsed with `stringstream`

---

## Demos

| File | What you will learn |
|------|---------------------|
| [demo-01-file-write.cpp](demo-01-file-write.cpp) | Cómo abrir `session_log.txt` con `ofstream`, escribir el registro de una sesión con `<<` y cerrarlo con `close()`. |
| [demo-02-file-read.cpp](demo-02-file-read.cpp) | Cómo leer ese mismo log línea por línea con `getline` como condición del `while`. |
| [demo-03-file-error-handling.cpp](demo-03-file-error-handling.cpp) | Cómo detectar con `if (!inFile.is_open())` un archivo que no existe, y cómo se ve un open que sí funciona. Sin `try`/`catch`. |
| [demo-04-csv-basics.cpp](demo-04-csv-basics.cpp) | Cómo escribir la grilla de reproducciones por día y género en `genre_plays.csv` y volver a leer cada campo con `stringstream`. |

---

## Tarea individual

| File | What you will build |
|------|---------------------|
| [lab-01-playlist-csv.cpp](lab-01-playlist-csv.cpp) | Tarea individual para la casa, no calificada y sin entrega (no es un lab grupal). Escribir una playlist a `playlist.csv`, leerla de vuelta, imprimirla en tabla y avisar si un archivo no se pudo abrir. Es la solución de referencia. |

---

## Skill Builder

| File | What you will practice |
|------|------------------------|
| [skill-builder-08.md](skill-builder-08.md) | Práctica de parseo con `stringstream` (sin calificación). HackerRank no cubre archivos reales. |

---

## Cómo compilar

Ejecuta estos comandos desde `chapters/chapter-08/`. Las rutas de los archivos son relativas a esa carpeta.

El Demo 2, y el caso exitoso del Demo 3, leen `session_log.txt`. Corre el Demo 1 primero.

`session_log.txt`, `genre_plays.csv` y `playlist.csv` los crea el programa al ejecutarse. No forman parte del repositorio.

```bash
g++ -std=c++17 -o demo-01 demo-01-file-write.cpp
./demo-01
```

```bash
g++ -std=c++17 -o demo-02 demo-02-file-read.cpp
./demo-02
```

```bash
g++ -std=c++17 -o lab-01 lab-01-playlist-csv.cpp
./lab-01
```

El Demo 3 y el Demo 4 se compilan igual, cambiando el nombre del archivo.

---

## Consejo de estudio

Lee el código antes de ejecutarlo. Pregúntate:

1. ¿Cerré el archivo después de escribir, o dejé los datos solo en el buffer?
2. ¿Por qué `getline` puede ser la condición del `while`?
3. ¿Revisé `is_open()` con un `if` antes de leer, y separé el CSV por comas sin tratar el encabezado como un dato?

---

## Coming Next

**Chapter 09** cubre manejo de errores con `try`/`catch`.
