import java.util.Scanner;
public class Classe{
  Scanner input = new Scanner(System.in);
  void retorno (){
    int maior=-999,menor=999,n;
    for(int i = 0 ; i < 10 ; i++){
      System.out.println("Digite o "+(i+(1))+"° Numero: ");
      n = input.nextInt();
      if(n > maior){
        maior = n;
      }if (n < menor){
        menor = n;
      }

    }
  System.out.println("Maior: "+maior+"\nMenor: "+menor+"\nSoma: "+(maior+menor));
  }
}
