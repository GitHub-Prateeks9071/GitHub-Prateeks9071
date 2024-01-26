let fs = require("fs")

fs.readFile("customer.json", function(err, data){
	if(err) {
		let obj = JSON.parse(data.toString())
		console.log(obj.name, obj.age, obj.location)
	}
})