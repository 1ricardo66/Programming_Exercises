import java.util.Scanner;
public class Ex02{
  public static void main(String [] args){
    Retorna retorna = new Retorna();
    Scanner input = new Scanner(System.in);
    int vet[] = new int[4];
    for (int i = 0 ; i < vet.length ; i++){
      System.out.print("Informe a "+(i+1)+"° Idade: ");
      vet[i] = input.nextInt();
    }
    retorna.maior(vet);
  }
}
