let fs = require("fs")
fs.readFile("names.txt", function(err, data)
{ 
    if(err) 
    { 
        console.error(err.message) 
    } 
    else 
    { 
        let sum = 0
        let arrData = data.toString().split("\n")
        for(i = 0; i < arrData.length; i++) 
        {
            let dataEmp = arrData[i].split(":")
            for(j = 0; j < dataEmp.length-1; j++) 
            {
                console.log(dataEmp[3])
                sum += parseInt(dataEmp[3])
            }
        }
        console.log("Sum of salary is: ", sum)
    } 
})