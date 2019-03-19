import java.util.Scanner;
public class Ret{
  Scanner input= new Scanner(System.in);
  void retorna(){
    String nome[][] = {{"Maria","Feminino"},{"Carla","Feminino"},{"Denis","Masculino"},{"Paulo","Masculino"},{"Andressa","Feminino"}};
    String escolha;
    System.out.println("Você deseja imprir [0] Masculino - [1] Feminino");
    escolha = input.nextLine();
    if(escolha.equals("0")){
      for(int i = 0 ; i < 5 ; i++){
        for (int j = 0; j < 2 ; j++){
            if(nome[i][1].equals("Masculino")){
              System.out.println(nome[i][j]);
            }
          }
      }
    }
    if(escolha.equals("1")){
      for(int i = 0 ; i < 5 ; i++){
        for (int j = 0; j < 2 ; j++){
            if(nome[i][1].equals("Feminino")){
              System.out.println(nome[i][j]);
            }
          }
      }
    }

  }
}
