import java.util.Scanner;
class Fatorial{
    public static int fatorial(int x){
        int total =1;
        for(int i = x ; i>=1 ; i--){
            total*=i;
        }
        return total;
    }
    public static void main (String [] args){
        Scanner input = new Scanner (system.in);
        int x = input.nextInt();
        System.out.print(fatorial(x));
    }
}