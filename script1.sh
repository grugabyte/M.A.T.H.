#!/bin/bash

echo 'Welcome to M.A.T.H.'
var=0
while [ $var == 0 ]
do

	echo 'Enter program to use'

	read fnc

	if [ $fnc == "1" ];
	then
		gcc text2.c -o 1
		./1
	elif [ $fnc == "2" ];
	then
		gcc text4.c -o 2
		./2
	elif [ $fnc == "3" ];
	then
		java test4.java
	elif [ $fnc == "4" ];
	then
		echo 'Would you like the java[1] or C[2] version?'
                read lang
                if [ $lang == '1' ];
                then
                        java test5.java
                elif [ $lang == '2' ];
                then
                        gcc port.c -o port
                        ./port
                else
                        echo 'invalid'
                fi
	elif [ $fnc == "5" ];
	then
		gcc text3.c -o 3
		./3
	elif [ $fnc == '--help' ];
	then
		cat help.txt
	elif [ $fnc == 'exit' ];
	then
		var=1
	else
		echo 'Invalid output, see --help'
	fi
done

gcc text5.c -o 2
./2


