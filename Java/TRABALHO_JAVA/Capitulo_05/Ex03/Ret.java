import java.util.Random;
import java.util.Scanner;
public class Ret{
  int verifica=0,resposta;
  Scanner input = new Scanner(System.in);
  Random random = new Random();
  int gera[][] = new int [50][20];
void retorno(){
  System.out.println("Digite um numero: ");
  resposta = input.nextInt();
  for (int i = 0 ; i < 50 ; i++){
    for (int j = 0 ; j < 20 ; j++){
      gera[i][j] = random.nextInt(1257);
      if(resposta == gera[i][j]){
        verifica=1;
        System.out.print("O numero "+resposta+" Pertence ao Array");
        break;
      }
    }
  }
  if(verifica == 0){
    System.out.println("O numero "+resposta+" Não Pertence ao Array");
  }
}

}
