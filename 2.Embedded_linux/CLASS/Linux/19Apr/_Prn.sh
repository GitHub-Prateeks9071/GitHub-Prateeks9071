read -p "Enter Name of Student : " name
read -p "Enter PRN of Student : " prn
echo $name $prn
if [[ $name == "prateek" ]]; then
echo "Student is Present"
if [ $prn -eq 9211 ]; then
echo "Student is eligible for exam"
fi
else
echo "Student is not Present and not eligible"
fi
