import java.util.Scanner;
public class Principal{
  public static void main (String [] args){
    Scanner input = new Scanner(System.in);
    int x[] = new int[7];

    for(int i = 0; i < 7 ; i++){
      x[i] = i;
      System.out.print(i+" ");
    }

  }
}
