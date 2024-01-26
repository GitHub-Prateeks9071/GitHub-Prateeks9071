let http = require('http')
let fs = require('fs')

function shape(req, res){
	fs.readFile("rectangle.html", function(err, data){
		if(err) {
			console.error(err.message)
		}
		else {
			res.writeHead(200, {'Content-Type':'text/html'})
			res.write(data)
			res.end()
		}
	})
}

let server = http.createServer(shape)
server.listen(3000, "127.0.0.1", function() {
	console.log("STARTED")
})