#! /bin/bash

echo "Install? [y/n]"
varx=0

read varx

if [ $varx == 'y' ];
then 
	chmod +x script1.sh
	echo "successfully installed"

elif [ $varx == 'n' ];
then 
	echo "cancelled"

else
	echo "invalid"
fi


