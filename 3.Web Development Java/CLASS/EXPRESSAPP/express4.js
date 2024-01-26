let express = require("express")
let app = express()

app.get("/",function(req , resp){

let d1 = new Date()
let str = "<h1>Hello world</h1>"
str += "Today is " + d1.toString()
resp.send(str)


})

app.get("/hello",function(req,resp){
    let arr= {name:"prateek",age:"23"}
    resp.send(arr)
})

// app.get("/hello",function(req , resp)
// {
//     let arr = ["amit","prateek"]
//     resp.send(arr)
// })
app.listen(3000 , function(){

console.log("server is listining on localhost : 3000")

})