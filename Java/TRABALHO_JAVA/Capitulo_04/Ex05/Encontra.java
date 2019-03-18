public class Encontra{
  void retorna(String palavra, String frase){
    String retorno[] = new String[60];
    int contador=0;
    retorno = frase.split(" ");
    for (int i = 0 ; i < retorno.length; i++){
      if (retorno[i].toUpperCase().equals(palavra.toUpperCase())){
        contador++;
      }
    }
    System.out.println("Frase fornecida: "+frase+"\nPalavra fornecida: "+palavra+"\nQuantidade de ocorrencias: "+contador);
  }
}
