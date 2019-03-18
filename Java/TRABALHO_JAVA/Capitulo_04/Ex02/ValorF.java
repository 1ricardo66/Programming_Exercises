public class ValorF{
  void retorna(float x, int y){
    double valorFinal;
    //valorFinal = (x*y)/100;
    valorFinal = x-y;
    valorFinal = Math.floor(valorFinal);
    System.out.print("Valor Original: "+x+"\nPercentual de desconto: "+y+"\nValor final com desconto: "+valorFinal);

  }
}
