#!/bin/bash

echo "#ifndef ASSETS_H_INCLUDED" > $1
echo "#define ASSETS_H_INCLUDED" >> $1

for filename in *.png; do
    xxd -i $filename >> $1
done

echo "#endif" >> $1