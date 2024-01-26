let fs=require("fs")
fs.readFile("Customer.json",function(err , data){
let obj =JSON.parse(data.toString())

    console.log(obj.name, obj.age, obj.address)

})

