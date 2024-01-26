let express = require("express")
let app = express()


    



app.get("/CalcArea",function(req,resp){
let radius=req.query.rad
let area=Math.PI*radius*radius
resp.send("area:" +area)
resp.sendFile("radius.html",{root:__dirname})
})

app.listen(3002, function(){

console.log("server is listining on localhost : 3002")

})