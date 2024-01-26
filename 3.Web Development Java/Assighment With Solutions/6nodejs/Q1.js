function greet() {
    let d1 = new Date()
    let hrs = d1.getHours()

    if (hrs < 12)
        console.log("Good morning")
    else if (hrs >= 12 && hrs <= 17)
        console.log("Good Afternoon")
    else if (hrs >= 17 && hrs <= 24)
        console.log("Good Evening")
}


exports.greet = greet