/*

Um vendedor camarada oferece pequenos descontos na venda de seus
produtos. Faça uma classe que receba um valor de venda e um percentual
de desconto. Além de calcular o desconto, o valor final deve ser
arredondado para baixo, isto é, para o valor inteiro anterior, de acordo com a
Figura
*/
import java.util.Scanner;
public class Ex02{
  public static void main (String [] args){
    ValorF retorno = new ValorF();
    Scanner input = new Scanner(System.in);
    float venda;
    int desconto;
    System.out.print("Digite o valor de venda: ");
    venda = input.nextFloat();
    System.out.print("Percentual de desconto: ");
    desconto = input.nextInt();
    retorno.retorna(venda,desconto);
  }
}
