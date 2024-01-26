file=/etc/passwd
while read -r line; do
 echo $line
 #echo $file
done < "$file"