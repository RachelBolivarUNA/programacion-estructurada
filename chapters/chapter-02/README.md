# Chapter 02

## How Does a Program Remember Information?

En este capítulo aprendemos cómo un programa guarda y utiliza información mientras se ejecuta.

---

## Topics covered

- Variables
- Data Types
- Input
- Output
- Updating Variables
- First Interactive Program

---

## Demos

| File | What you will learn |
|------|---------------------|
| [demo-00-welcome.cpp](demo-00-welcome.cpp) | Cómo imprimir un mensaje en pantalla con `cout`. |
| [demo-01-variables.cpp](demo-01-variables.cpp) | Qué es una variable, cómo crear una de tipo `string` y cómo cambiar su valor. |
| [demo-02-data-types.cpp](demo-02-data-types.cpp) | Los tipos básicos `string`, `int`, `double` y `bool` con ejemplos de SoundWave. |
| [demo-03-input-output.cpp](demo-03-input-output.cpp) | Cómo pedir datos al usuario con `cin` y mostrarlos con `cout`. |
| [demo-04-updating-variables.cpp](demo-04-updating-variables.cpp) | Cómo actualizar el valor de una variable a lo largo del programa. |

---

## Lab

| File | What you will build |
|------|---------------------|
| [lab-01-soundwave-registration.cpp](lab-01-soundwave-registration.cpp) | Un programa interactivo que registra a un usuario de SoundWave y muestra su perfil. |

---

## Cómo compilar

Cada archivo se compila de forma independiente. Ejemplo:

```bash
g++ -o demo-00 demo-00-welcome.cpp
./demo-00
```

```bash
g++ -o lab-01 lab-01-soundwave-registration.cpp
./lab-01
```

---

## Consejo de estudio

Lee el código antes de ejecutarlo. Pregúntate:

1. ¿Qué información necesita recordar el programa?
2. ¿Qué tipo de dato conviene usar?
3. ¿De dónde viene esa información: la escribimos nosotros o la escribe el usuario?
