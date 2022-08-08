#!/usr/bin/env bash
gcc -o alchemist.so alchemist.c $(yed --print-cflags --print-ldflags)
