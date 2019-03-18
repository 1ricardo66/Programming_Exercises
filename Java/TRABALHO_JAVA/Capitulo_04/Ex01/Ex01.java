/*
Crie uma classe que simule a jogada de um dado de seis lados
(números de 1 a 6). Veja o resultado do
lançamento na Figura
*/
import java.util.Scanner;
public class Ex01{
  public static void main (String [] args){
    Dado dado = new Dado();
    Scanner input = new Scanner(System.in);
    int n;
    do{
      System.out.println("Deseja jogar do dado ? ");
      n = input.nextInt();
      if(n == 1){
        dado.jogarDado();
      }
    }while(n==1);
  }
}
