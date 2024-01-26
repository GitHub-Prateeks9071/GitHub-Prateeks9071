#!/bin/bash
read -p "Enter A Number : " number
if [ $number -lt 0 ]; then
	echo "Number is Negative"
elif [ $number -gt 0 ]
then 
	echo "Number is Positive"
else
	echo "Number is Neither Positive Nor Negative"
fi

#Checking if the string is empty or not

string="abcd"
string_1=''
if [[ -z $string ]]
then
	echo "String is Empty"
else
	echo "String is not Empty"
fi
if [[ -n $string_1 ]]
then
	echo "String is not Empty"
else
	echo "String is Empty"
fi
