let express = require('express');
let body_parser = require("body-parser")
let app = express()



app.get("/radiusPage", function(req,resp){
    resp.sendFile("html/radius.html", {root : __dirname})
})

app.get("/calcArea", function(req,resp){
    //code to extract raduis from url and calculate area
    let radius = req.query.rad
    let area = Math.PI * radius * radius
   resp.send("area : " + area)
})

app.listen(3000, function(){
    console.log("server is listining on localhost:3000")
})

