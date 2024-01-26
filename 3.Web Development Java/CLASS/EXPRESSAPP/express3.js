let express = require("express")
let app = express()

app.get("/",function(req , resp){

let d1 = new Date()
let str = "<h1>Hello world</h1>"
str += "Today is " + d1.toString()
resp.send(str)

})
app.listen(3000 , function(){

console.log("server is listining on localhost : 3000")

})