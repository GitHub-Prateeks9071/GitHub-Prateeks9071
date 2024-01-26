const express = require('express')
const nodemailer = require('nodemailer')
const app = express()

const hashes = require('jshashes')

const https = require('https')
const fs = require('fs')

var smtpTransport = nodemailer.createTransport({
    service: "gmail",
    port : 465,
    secure : true,
    auth : {
        user:"prateeks907@gmail.com",
        pass: "pss1234@"
    }
});

// Registration Page
app.get("/reg",(req, res)=>{
    res.sendFile('reg.html',{root: __dirname})
});

// Server will send OTP on Email
app.get("/action_page",(req, res)=>{

    var email = req.query.email;
    var passwd = req.query.psw;

    console.log(email)
    console.log(passwd)

    var otp, mailOption, host, link ;

    otp = Math.floor((Math.random()*1000000)+500);
    host = req.get('host');
    link = "http://"+req.get('host')+"/verify?id="+otp;
    mailOption = {
        from: "prateeks907@gmail.com",
        to: email,
        subject: "Please confirm your email and find OTP",
       // html: "Hello,<br> Please click on link to verify your email.<br><a href="+link+">Click To Verify </a>"
        html: "Hello Dear,<br> Your OTP for verification of mail is : "+otp
        
    }
    console.log(mailOption);

    smtpTransport.sendMail(mailOption,(err,info)=>{
        if(!err){
            console.log("Message Sent: "+info.response);
            res.end("sent");
            console.log("OTP : "+otp)
        }
    });  

    res.sendFile("/otp_verification.html",{root:__dirname})
    
    //otp validation process
    app.get("/otp", (req,res) => {
        var userOTP = Number(req.query.otp)
        console.log("User Entered OTP ",userOTP)
        console.log("Generated OTP ",otp)
        if(userOTP == otp){
            res.sendFile("/validate_home.html",{root: __dirname})
        }
        else{
            res.sendFile("/invalidate_home.html",{root:__dirname})
        }
    });
    //data base
    hashemail= new hashes.SHA1().b64(email)
    hashpw = new hashes.SHA1().b64(passwd)

});

//Login page
app.get('/login_page',function(req,res) {
    res.sendFile('/login_page.html',{root : __dirname})
})


// Login Verification process
app.get("/login",(req,res)=>{
    res.sendFile('login_page.html',{root: __dirname})

    var email = req.query.email
    loginemail= new hashes.SHA1().b64(email)
    var pw = req.query.psw
    loginpw = new hashes.SHA1().b64(pw)

    if(loginemail == hashemail && loginpw == hashpw ){
        res.sendFile("/welcome_home.html", {root:__dirname})
    }
    else {
        res.send("<center> LOGIN FAILED <center>")
    }

});

https.createServer({
    key : fs.readFileSync("key.pem"),
    cert : fs.readFileSync("cert.pem")
},app).listen(2525,"127.0.0.1", ()=> {
    console.log("Server is Running.... at 2525 port")
});


