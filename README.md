# 42-libft

Este proyecto consiste en la creación de una biblioteca en C que contiene una colección de funciones desarrolladas para ser utilizadas en mis futuros proyectos en 42 Málaga.

## Descripción

**Libft** incluye implementaciones personalizadas de funciones estándar de la biblioteca de C, tales como funciones de manipulación de strings, memoria, conversiones, y listas enlazadas (en el caso de los _bonus_).

## Comandos

### Compilación
Para compilar la biblioteca, puedes ejecutar los siguientes comandos en tu terminal:

1. **Compilación completa**:

   ```bash
   make
   ```

   Este comando generará el archivo `libft.a` con todas las funciones de la biblioteca.

2. **Limpieza**:

   Para eliminar los archivos objetos:

   ```bash
   make clean
   ```

3. **Limpieza completa**:

   Para eliminar tanto los archivos objetos como el archivo `libft.a`:

   ```bash
   make fclean
   ```

4. **Recompilar**:

   Para realizar una limpieza completa y recompilar todo desde cero:

   ```bash
   make re
   ```

## Estructura del proyecto

- `src/` - Archivos .c
- `include/` - Archivos de cabecera
- `obj/` - Archivos objeto