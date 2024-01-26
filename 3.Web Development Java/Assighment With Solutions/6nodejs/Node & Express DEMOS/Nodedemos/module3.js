class Student{
   constructor(sname, prn){
       this.sname = sname;
       this.prn = prn
   }
   display(){
       console.log(this.sname, this.prn)
   }
}

//exports.person = {name:"Pratiksh", age:22}

module.exports = Student