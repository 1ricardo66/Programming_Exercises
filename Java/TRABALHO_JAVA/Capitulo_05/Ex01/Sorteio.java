import java.util.Random;
public class Sorteio{
  void rand(String vet[]){
      Random random = new Random();
      int gerado = random.nextInt(vet.length);
      System.out.println("O Ganhador é : "+vet[gerado]);
  }
}
