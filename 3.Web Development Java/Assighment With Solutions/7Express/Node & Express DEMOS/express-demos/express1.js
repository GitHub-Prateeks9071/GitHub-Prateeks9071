let express = require('express');
const res = require('express/lib/response');
let app = express()

let books = [
      {id:1,bname:"Core Java",price:400},
      {id:2,bname:"Core JSP",price:500},
      {id:3,bname:"ExpressJS",price:450}
    ]
    
app.get("/books", function(req,resp){
    let str = ""
    str = "<table border='1'>"
    for(i=0; i< books.length ; i++){
       let book = books[i]
       str += "<tr><td>" + book.id + "</td><td>" + book.bname + "</td><td>" + book.price + "</td></tr>"
    }
    str += "</table>"
    resp.send(str)
})

app.get("/books/:id", function(req, resp){
    let id = req.params.id;
    let flag = false

    for(i=0;i<books.length;i++){
        if(books[i].id == id){
            flag = true;
            resp.send(books[i])
            //resp.send("book details " + "Bookname : " + books[i].bname)
            //break;
        }
    }
    //resp.send("<h1> Hello world</h1>")
})



app.listen(3000, function(){
    console.log("server is listining on localhost:3000")
})