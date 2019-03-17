const http = require('http');
const fatorial = require('./fatorial');
http.createServer((req,resp)=>{
    resp.writeHead(200,{'Content-Type' : 'text/plain'}
);
var x = req.url.split('/');




resp.write(converte());
resp.end();

}).listen(3030);

function converte(){
    x = parseInt(x);
    x = fatorial.fat(x);
    return x

}