#!/bin/bash

template='#include <stdio.h>

int main() 
{

    return 0;
}
'

if [ -z "$1" ]; then
    echo "Enter a file name."
else
    echo -e "$template" > "$1.c"
    echo "The $1.c file has been created with the template contents."
fi

