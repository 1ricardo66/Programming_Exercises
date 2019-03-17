const http = require('http');

http.createServer((req,resp)=>{
    resp.writeHead(200,{
        'Content-type' : 'text/plain'
    });
    const array = req.url.split('/');
    resp.write("Bem vindo: "+req.url.split('/'));
    resp.end();
}).listen(3030);