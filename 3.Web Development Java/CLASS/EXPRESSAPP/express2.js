let express = require("express")
let app = express()

app.get("/",function(req , resp){
resp.send("<h1>Hello World</h1>")
let d1=new Date()
let str = "Hello world"
str += "Today is" + d1.toString()
resp.send(str)

})
app.listen(3000 , function(){

console.log("server is listining on localhost : 3000")

})