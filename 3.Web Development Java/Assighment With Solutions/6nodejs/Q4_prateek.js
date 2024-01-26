let fs = require("fs")

let arr = ["aaa", "bbb", "ccc", "ddd"]
let str = arr.join("|")
fs.appendFile("data.txt", str, function(err){ if(err) { console.error(err.message) } } )