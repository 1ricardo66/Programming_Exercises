import java.util.Scanner;
public class Ex05{
  public static void main(String [] args){
    Scanner input = new Scanner(System.in);
    String palavraF,frase;
    Encontra encontra = new Encontra();
    System.out.print("Palavra fornecida: ");
    palavraF = input.nextLine();
    System.out.println("Digite a frase desejada: ");
    frase = input.nextLine();
    encontra.retorna(palavraF,frase);
  }
}
