function substract () {    # substraction
	
return $(($numb1-$numb2))
}
read -p "Enter the first number :" numb1
read -p "Enter the second number :" numb2
substract $numb1 $numb2
echo $?




function summation() {		#Sum

let num1=10
let num2=20
let sum_val=$num1+$num2
return $sum_val
} 
summation $num1 $num2
echo $?


function multiplication () {    # multiplication
let mulres=`expr $number1 \* $number2`	
return $mulres
}
read -p "Enter the first number :" number1
read -p "Enter the second number :" number2
multiplication $number1 $number2
echo "$mulres"


function division () {    # division
let div=`expr $num1 \/ $num2`	
return $div
}
read -p "Enter the first number :" num1
read -p "Enter the second number :" num2
division $num1 $num2
echo "$div"

