let fs= require("fs")
let arr =["prateek","Ankit","Roshni"]
let str=arr.join("|")

fs.writeFile("name.txt",str,function(err){

    if(err)
    console.log("Error while exeecuting th efile" + err.message)
})

let