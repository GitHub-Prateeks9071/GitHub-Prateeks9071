let express = require("express")
let app = express()

app.get("/",function(req , resp){
resp.send("<h1>Hello World</h1>")

})
app.listen(3000 , function(){

console.log("server is listining on localhost : 3000")

})