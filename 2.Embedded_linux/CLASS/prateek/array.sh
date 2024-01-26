index_array=(1,2,3,4,5,6)
echo ${index_array[0]}
for i in ${index_array[@]}
do
	echo $i
done
echo "Length of the array is : ${#index_array[@]}"

name[0]="prateek"
name[1]="suraj"
name[2]="amit"
name[3]="siddhesh"
name[4]="aditya"
name[5]="vaibhav"

echo "First index value : ${name[0]}"
echo "All members of array : ${name[*]}"
echo "All members of array : ${name[@]}"
