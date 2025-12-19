# _Este proyecto ha sido creado como parte del currículo de 42 por lodazzan._

## Description

ft_printf is a reimplementation of the standard C printf function. It is a 42 project aimed at understanding variadic functions, format specifiers, and basic input-output handling.

The repository contains eight C source files that implement the printing capabilities and a small library.

## Instructions

### Build

The project provides a Makefile that compiles a static library named libftprintf.a from the eight source files.

Usage example:

make (or make all) to build libftprintf.a

### Files

ft_printf.c: Core entry point that contains a static function ft_parseprint that parses all possible format specifiers (e.g., %x, %d, %s, etc.) and stores the relevant information for printing.

- ft_putchar.c: Print a single character.

- ft_putstr.c: Print a string.

- ft_putnbr.c: Print a signed integer.

- ft_hexnumber.c: Print hexadecimal numbers (either in lowercase or uppercase).

- ft_putptr.c: Print a pointer address in hexadecimal.

- ft_putnbru.c: Print an unsigned integer in decimal.

- ft_strlen.c: Compute the lenght of a string.

### Header

ft_printf.h declares the necessary helper functions available to make the project work.

### Usage in projects

Link the library to your project and call ft_printf with a format string, similar to printf, using the standard variadic arguments approach.

The header provides the prototypes for data types and the length of what's been printed.

## Resources

### Documentation and references

These are all requierements written in the 42 Subject given for this project:

- The C standard I/O practices related to printf formatting and variadic arguments.

- Variadic functions in C: va_start, va_arg, va_end.

- C memory and string handling basics (strlen, pointers, and null-terminated strings).

### Use of AI

This project is a manual implementation.

## Algorithm and data structure choices

### Core idea

ft_printf uses a variadic argument list to process the format string character by character.

For each '%' encountered, a parsing function (ft_parseprint) analyzes the following character and then uses specialized functions (ft_putchar, ft_putstr, ft_putnbr, ft_hexnumber, ft_putptr, ft_putnbru).

### Data structures

The data structure va_list from the library stdarg.h is used in this project. The descriptor is defined within the parsing function to direct to the corresponding print function.

### Justification

A modular separation (parsing separated from printing) keeps issues isolated and makes it easier to extend or modify behavior for additional specifiers.

Specialized helpers for each type in separate files ensure correct formatting rules and reuse of code (e.g., number-to-string conversion, base handling for hexadecimal).
