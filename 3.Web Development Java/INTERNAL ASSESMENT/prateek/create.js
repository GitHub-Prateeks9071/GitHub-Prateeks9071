let database = []
class Product {
    display() {
        console.log(database)
    }
}

function addToDataBase() {
    let discount = 0
    let pname = document.getElementById('pname').value
    let prate = parseFloat(document.getElementById('prate').value)
    let pqnt = parseInt(document.getElementById('pqnt').value)
    if(pqnt < 25) {
        discount = prate * pqnt
    }
    else if(pqnt >= 25 && pqnt < 50) {
        let total = prate * pqnt
        discount = total - (total * 0.10)
    }
    else if(pqnt >= 50) {
        let total = rate * pqnt
        discount = total - (total * 0.20) 
    }
    else {
        alert("Invalid Input")
    }
    var data  = {Name: pname, Rate: prate, Quantity: pqnt, Discount: discount}
    database.push(data)
}