const http = require('http');


http.createServer((req,resp)=>{
    var x = parseInt(req.url[1]);
    
    
    resp.writeHead(200,{
        'Content-type' : 'text/plain'
    });
    function fat(){
        var total=1 ;
        for(var i = x ; i >=1 ; i--){
            total*=i;
        }
        return total;
    }
    resp.write("Total: "+fat());
    resp.end();
}).listen(3030);

