import java.util.Random;
public class Aleatorio{

  Random random = new Random();

  void retorna(int n){
    int rand,y;
    y = random.nextInt(10);
    if(n == y){
      System.out.println("Correto");
    }else{
      System.out.println("Errado, numero correto: "+y);
    }
  }

}
