function greet(){
   let d1 = new Date()
   let hours = d1.getHours()
   if(hours < 12)
      console.log("Good morning!")
      else if(hours >= 12 || hours < 17)
          console.log("Good afternoon!")
          else
             console.log("Good evening!")
}

exports.greet = greet