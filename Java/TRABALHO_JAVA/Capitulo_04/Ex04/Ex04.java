import java.util.Scanner;
public class Ex04{
  public static void main (String [] args){
    Scanner input = new Scanner(System.in);
    Frase frase = new Frase();
    System.out.println("Digite sua frase: ");
    frase.retorna(input.nextLine());
  }
}
