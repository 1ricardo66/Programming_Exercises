import java.util.Scanner;
public class Hello{
  public static void main(String args [] ){
    Scanner input = new Scanner(System.in);
    String userName;
    int anoAtual = 2018,anoNasc,idade,resposta;
    System.out.print("Digite seu nome: ");
    userName = input.next();
    System.out.print("Digite Sua idade: ");
    idade = input.nextInt();
    anoNasc = 2018-idade;
    System.out.print("Você nasceu em: "+anoNasc+"[0] Sim  - [1] Não");
    resposta = input.nextInt();
    if(resposta == 1){
      anoNasc-=1;
      System.out.print("Então você nasceu em: "+anoNasc);
    }


  }
}
