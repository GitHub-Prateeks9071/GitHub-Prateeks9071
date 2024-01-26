read -p "Enter the name : " name
read -p "Enter the age : " age
read -sp "Enter your Password : " password
echo "Your name is $name and your are $age years old"

<<com
What if no variable is supplied to read function
com

read -p "What is your location : "

echo "your current location found : $REPLY"
