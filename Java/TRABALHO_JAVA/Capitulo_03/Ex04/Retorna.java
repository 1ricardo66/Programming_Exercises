/*
Faça uma classe que solicite uma senha, simulando um caixa eletrônico.
Considere que a senha é Java. Caso o usuário forneça a senha correta,
apresentar a mensagem "Senha Válida"; caso contrário, "Senha Inválida".
Se o usuário fornecer a senha incorreta três vezes seguidas, o programa
deve apresentar a men- sagem "Cartão Cancelado".

*/
import java.util.Scanner;
public class Retorna{
    Scanner input = new Scanner(System.in);
    int tentativas=3;
    String userSenha = "JAVA",senha;
    void caixa(){
      System.out.print("Digite sua senha: ");
      senha = input.nextLine();
      if(senha.equals(userSenha)){
        System.out.print("Logado");
      }else if(this.tentativas == 1){
          System.out.println("Cartão bloqueado");
      }
      else{
        this.tentativas-=1;
        System.out.println("Senha incorreta, você tem mais "+this.tentativas+" chances");
        caixa();

      }
    }
}
