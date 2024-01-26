read -p "Enter Name of Student : " name
read -p "Enter Branch of Student : " branch
read -p "Enter Age of Student : " age
read -p "Enter Salary of Student : " salary
echo $name $branch $age $salary
if [[ $name == "prateek" ]]; then
if [[ $branch == "iot" ]]; then
echo "You are part of this organisation"
else
echo "You are not allowed to enter"
fi
fi
if [ $age -eq 24 ]; then
if [ $salary -eq 200000 ]; then
echo "You are no more student but employee"
else
echo "You are still student work hard to become employee"
fi
fi
