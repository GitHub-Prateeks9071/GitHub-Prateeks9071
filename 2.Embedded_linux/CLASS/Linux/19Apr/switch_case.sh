
read -p "Enter Your Country Name : " countryname
case $countryname in
	India)
	echo "India is country that produces brilliant minds of the world"
	;;
	Ireland)
	echo "A small country with rich culture"
	;;
	Poland)
	echo "A small county with rich music"
	;;
	Pakistan)
	echo "A Terrorist country"
	;;
	*)
		echo "You doesn't belong to this planet"
		;;
	esac
