import java.io.*;

public class Ex01 {
  public static void main(String[] args) {
    try{
    BufferedReader input;
    input = new BufferedReader(new InputStreamReader(System.in));
    String base,altura;
    System.out.print("Informe a Base: ");
    base = input.readLine();
    System.out.print("Informe a Altura: ");
    altura = input.readLine();
    int area = (Integer.parseInt(base)*Integer.parseInt(altura))/2;
    System.out.println("Area: "+area);
    }catch(IOException e){
        System.out.println(e);
    }
  }
}