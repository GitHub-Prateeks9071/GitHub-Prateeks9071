let express = require("express")
let app = express()

let radius = [

{id:"1",name:"java",price:"34567",author:"prateek"},
{id:"2",name:"java core",price:"34567",author:"prateek"},
{id:"3",name:"C",price:"34567",author:"prateek"},
{id:"4",name:"English",price:"34567",author:"prateek"},
{id:"5",name:"java",price:"34567",author:"prateek"},
]

app.get("/books",function(req,resp){

resp.send(books)

})

app.listen(3001, function(){

console.log("server is listining on localhost : 3001")

})