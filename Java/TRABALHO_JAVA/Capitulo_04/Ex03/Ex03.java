/*
Crie uma classe que gera um número aleatoriamente (entre 0 e 9)
por Math.random. Em seguida, solicite do usuário a digitação de um
valor entre 0 e 9 e verifique se o número sorteado é igual ao nú- mero
fornecido pelo usuário. Apresente o resultado em tela como mostra a
Figura 4.19
*/
import java.util.Scanner;
public class Ex03{
  public static void main (String [] args){
    Scanner input = new Scanner(System.in);
    Aleatorio aleatorio = new Aleatorio();
    int rand;
    System.out.print("Chute um numero: ");
    rand = input.nextInt();
    aleatorio.retorna(rand);
  }
}
