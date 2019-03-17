//Armazena parâmetros de entrada
const num = process.argv[2];
function fatorial(y){
    var fat = y;
    var fat1=1;
    for (var i = y ; i != 1 ; i--){
        fat1 += fat*i;   
    }
    console.log(fat1);
}

fatorial(num);
