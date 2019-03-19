import java.util.Scanner;
import java.util.Random;
public class Ret{
  Scanner input= new Scanner(System.in);
  Random random = new Random();
  int ocupado = 1, desocupado = 0,n=1;
  void retorna(){
    int vet[][] = new int[5][10];
    for(int i = 0 ; i < vet.length ; i++){
      for(int j = 0 ; j < vet.length ; j++){
        vet[i][j] = random.nextInt(2);
      }
    }
    System.out.println("[1]- Listar quarto\n[2]- Definir ocupação\n[3]- Sair");
    n = input.nextInt();
    switch(n){
      case 1:
        for(int i = 0 ; i < vet.length ; i++){
          System.out.println(i+"° Andar");
          for(int j = 0 ; j < vet.length ; j++){
            if(vet[i][j] == 0){

              System.out.println("Quarto Número: "+vet[i][j]+" Desocupado");
            }else{
              System.out.println("Quarto Número: "+vet[i][j]+" Ocupado");
            }
          }
        }
    }

  }
}
