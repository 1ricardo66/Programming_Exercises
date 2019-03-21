import java.util.Scanner;
import java.util.Random;
public class Ret{
  Scanner input= new Scanner(System.in);
  Random random = new Random();
  int ocupado = 1, desocupado = 0,n=1,andar,quarto;
  void retorna(){
    int vet[][] = new int[5][10];
    for(int i = 0 ; i < vet.length ; i++){
      for(int j = 0 ; j < vet.length ; j++){
        vet[i][j] = random.nextInt(2);
      }
    }
    do{
        System.out.println("Você deseja:\n[1]- Listar quarto\n[2]- Definir ocupação\n[3]- Sair");
        n = input.nextInt();
        switch(n){
          case 1:
            for(int i = 0 ; i < vet.length ; i++){
              System.out.println((i+1)+"° Andar");
              for(int j = 0 ; j < 10 ; j++){
                if(vet[i][j] == 0){

                  System.out.println("Quarto Número: "+(j+1)+" Desocupado");
                }else{
                  System.out.println("Quarto Número: "+(j+1)+" Ocupado");
                }
              }
            }
            break;
            case 2:
                System.out.println("Deseja alterar o estado de qual andar ? ");
                andar = input.nextInt();
                System.out.println("Deseja alterar o estado de qual quarto ? ");
                quarto = input.nextInt();
                if(vet[andar-1][quarto-1]==0){
                  vet[andar-1][quarto-1]=1;
                }else{
                  vet[andar-1][quarto-1]=0;
                }
                break;

            }

          }while(n!=3);
      }
}
