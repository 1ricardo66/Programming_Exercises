public class Frase{
  void retorna(String frase){
    System.out.println("Frase sem vogais:\n"+frase.replaceAll("[aeiouAEIOU]",""));
  }
}
