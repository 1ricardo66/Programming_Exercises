import java.util.Random;
public class Dado{
  Random random = new Random();
  void jogarDado(){
      System.out.println("Numero sorteado: "+(random.nextInt(6)+1));
  }
}
