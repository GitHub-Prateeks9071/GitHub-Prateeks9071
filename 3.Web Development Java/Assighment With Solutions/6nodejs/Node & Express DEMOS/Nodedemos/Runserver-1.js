let http = require("http")
let fs = require("fs")

function process_req(req, resp){
  var filename = "." + req.url+".html";
  console.log(filename)
    fs.readFile(filename, function(err, data){
          if(err){
             resp.writeHead(404, {'Content-Type': 'text/html'});
             return resp.end("404 Not Found");
           }
          resp.writeHead(200, {'Content-Type': 'text/html'});
          resp.write(data);
          return resp.end();
    }); 
}

let server = http.createServer(process_req)
server.listen(3000,"127.0.0.1") //localhost
console.log("server is running on http://127.0.0.1:3000")