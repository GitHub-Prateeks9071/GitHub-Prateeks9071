let fs = require("fs")

fs.writeFile("abc.txt", "this is contents of abc.txt" ,function(err){
   if(err)
     console.error("file coulent be written into " + err.message)
})