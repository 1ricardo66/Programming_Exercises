const express = require('express');
const app = express();
const urlApi = "https://swapi.co/api/";
const axios = require('axios');
const port = process.eventNames.PORT || 3000;
app.set('view engine', 'ejs');

app.use(express.static(__dirname + "/public"));

app.get('/filmes', (req, resp) => {
    var titulo = [];
    var diretor = [];
    var data = [];
    var films = [];
    axios.default.get(urlApi + 'films')
        .then(function (response) {
            for (var i = 0; i < 7; i++) {
                titulo[i] = response.data.results[i].title;
                data[i] = response.data.results[i].release_date;
                diretor[i] = response.data.results[i].director;
            }
            response.data.results.forEach((row) => {
                let identificador = Math.floor(Math.random() * (7 - 1) + 1);
                console.log(identificador);
                films.push({ ...row, identificador: identificador });
            })
            resp.render('filmes.ejs', { titulo: titulo, data: data, diretor: diretor });

        });

    app.get('/filmes/:id', (req, resp) => {
        const id = req.params.id;
        console.log("ID:", id)
        axios.default.get(urlApi + 'films/' + id)
            .then(function (response) {
                var resumo = response.data.opening_crawl;
                var titulo = response.data.title;

                resp.render('resumo.ejs', { resumo: resumo, titulo: titulo });

            })
    })

})
    .listen(port);