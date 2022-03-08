#!/bin/bash

echo 'Welcome to M.A.T.H.'
echo 'Enter program to use'

read fnc

if [ $fnc == "1" ];
then
	gcc text2.c -o 1
	./1
elif [ $fnc == "2" ];
then
	java test4.java
else
	echo 'Invalid output'
fi

gcc text5.c -o 2
./2


