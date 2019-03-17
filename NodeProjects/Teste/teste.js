var express = require('express');
var app = express();

app.get('/', function (req, res) {
  res.sendFile('/home/ricardo/Documentos/PBO1/index1.html');
});

app.listen(3000, function () {
  console.log('Example app listening on port 3000!');
});