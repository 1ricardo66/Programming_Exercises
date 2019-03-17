const express = require("express");
const app = express();

app.get('/',(req,resp)=>{
    
    resp.send("OI ").status(200);

}).listen(3000);