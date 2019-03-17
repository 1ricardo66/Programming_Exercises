# Programming_Exercises
Programming Exercises 


Excluir depois:




<!doctype html>
<html lang="en">
  <head>
    <!-- Required meta tags -->
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">

    <!-- Bootstrap CSS -->
    <link rel="stylesheet" href="https://stackpath.bootstrapcdn.com/bootstrap/4.1.3/css/bootstrap.min.css" integrity="sha384-MCw98/SFnGE8fJT3GXwEOngsV7Zt27NXFoaoApmYm81iuXoPkFOJwJ8ERdknLPMO" crossorigin="anonymous">

    <title>API!</title>
  </head>
  <body>


  	<h1 style="text-align:center; ">Consumo de api</h1>


    <div class="container">

    	<table class="table-dark">
  			<thead>
    			<tr>
      				<th scope="col">#</th>
      				<th scope="col">First</th>
      				<th scope="col">Last</th>
      				<th scope="col">Handle</th>
    			</tr>
  		</thead>
  	<tbody>
    <tr>
      <th scope="row">1</th>
      <td>Mark</td>
      <td>Otto</td>
      <td>@mdo</td>
    </tr>
    <tr>
      <th scope="row">2</th>
      <td>Jacob</td>
      <td>Thornton</td>
      <td>@fat</td>
    </tr>
    <tr>
      <th scope="row">3</th>
      <td>Larry</td>
      <td>the Bird</td>
      <td>@twitter</td>
    </tr>
  </tbody>
</table>

    </div>
     <button class="btn btn-primary" onclick="CarregarDadosApi()">Carregar Dados</button>
<script type="text/javascript">
    consumoApi.js
const posts = [];

function CarregarDadosApi(){
    //Faz a busca dos dados
    fetch('https://gist.githubusercontent.com/danilomartinssilva/12aff9454f66a5f849bd14d40b93dab7/raw/204ced0602760829597f5caa2680e5f7cb29bade/cervejarias.json')
        .then((resposta =>resposta.json()))
        .then((json)=>{
            json.forEach((row)=>{
                posts.push(row);
            })
            //Criação dos Elementos TABLE, Acesso a DIV e Criação do THEAD da Tabela
            let tableContent = document.createElement('table');

            let divContent = document.getElementsByTagName('div');

            let trTable = document.createElement('thead');
            
            //Adicionando títulos ao Thead 
            trTable.innerHTML= '<td>id</td><td>userid</td><td>title</td><td>body</td>';

            //Adicionando Thead a Tabela
            tableContent.appendChild(trTable);

            let rowContentTable ;            
            posts.forEach((row)=>
            {
                rowContentTable = document.createElement('tr');

                rowContentTable.innerHTML+= `<tr><td>${row.id}</td>
                <td>${row.userId}</td>
                <td>${row.title}</td>
                <td>${row.body}</td></tr>`;
                tableContent.appendChild(rowContentTable);
            })     
                        
            divContent[0].appendChild(tableContent);
            
        })
        .catch((erro)=>{
            console.log(erro);            
        })

}
</script>

    <!-- Optional JavaScript -->
    <!-- jQuery first, then Popper.js, then Bootstrap JS -->
    <script src="https://code.jquery.com/jquery-3.3.1.slim.min.js" integrity="sha384-q8i/X+965DzO0rT7abK41JStQIAqVgRVzpbzo5smXKp4YfRvH+8abtTE1Pi6jizo" crossorigin="anonymous"></script>
    <script src="https://cdnjs.cloudflare.com/ajax/libs/popper.js/1.14.3/umd/popper.min.js" integrity="sha384-ZMP7rVo3mIykV+2+9J3UJ46jBk0WLaUAdn689aCwoqbBJiSnjAK/l8WvCWPIPm49" crossorigin="anonymous"></script>
    <script src="https://stackpath.bootstrapcdn.com/bootstrap/4.1.3/js/bootstrap.min.js" integrity="sha384-ChfqqxuZUCnJSK3+MXmPNIyE6ZbWh2IMqE241rYiqJxyMiZ6OW/JmZQ5stwEULTy" crossorigin="anonymous"></script>
  </body>
</html>

</body>
</html>

