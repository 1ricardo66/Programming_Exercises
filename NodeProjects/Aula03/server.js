//exports.module = "Tudo tranquilo";

const times = [{
    nome : "São paulo", estado: "SP",},
    {nome : "Goiás", estado: "GO",},
    {nome : "Lagartense", estado: "SE",},
    {nome : "Avenida", estado: "RS",},
    {nome : "Botafogo", estado: "RJ",},
]

/*exports.converteMaiusculo = function(x){
    return new String(x).toUpperCase();
}*/

//exports.times = times;
converteMaiusculo = function(x){
    return new String(x).toUpperCase();
};

module.exports = {
    converteMaiusculo,times
}