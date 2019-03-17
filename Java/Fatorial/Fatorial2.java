public class Fatorial2{
    public static void main (String [] args){
        System.out.print(fat(6));
    }
    public static int fat(int x){
        int total;
        if (x <= 1){
            return 1;
        }else{
            total = x *fat(x-1);
            return total;
        }
    }

}