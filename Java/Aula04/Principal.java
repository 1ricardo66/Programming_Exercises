import java.util.Scanner;
public class Principal{
    public static String capturaDados(){
        Scanner input = new Scanner(System.in);
        String nome;
        int idade;
        System.out.print("Digite seu nome: ");
        nome = input.nextLine();
        return nome;
    }
    public static void retornaDados(String x){
        System.out.println("Nome: "+x);
    }

    public static int capturaInt(){
        Scanner input = new Scanner(System.in);
        int idade;
        System.out.print("Digite sua idade: ");
        idade = input.nextInt();
        return idade;
    }
    public static void retornaInt(int x){
        
        System.out.println("idade: "+x);
    }

    public static void verificaIdade(int idade){
        String retorna;
        retorna = (idade >=18) ? "Maior de idade":"Menor de idade";
        System.out.println(retorna);
        }
    
    public static void conversoes(){
        double valorDouble = 10.97;
        String y = "10";
        valorDouble =Double.toString(valorDouble);
        
        y = Integer.parseInt(y);
        System.out.println(valorDouble+y);
    }


    public static void main (String [] args ){
        String dados;
        int idade;
        dados = capturaDados();
        idade = capturaInt();
        retornaDados(dados.toUpperCase());
        retornaInt(idade);
        verificaIdade(idade);
        
    }
}