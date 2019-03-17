/*
Usando a classe Scanner para entrada de dados, faça uma classe que simule a
abertura de uma conta bancária cujo saldo inicial seja zero. A seguir, 
simule um depósito num valor qualquer e mostre o saldo atual. Depois disso, 
simule uma retirada (débito) qualquer e apresente o saldo final.
 */
import java.util.Scanner;
public class Ex02{
    public static void main (String [] args){
        float valor;
        Banco banco = new Banco();
        Scanner input = new Scanner(System.in);
        System.out.print("Valor do deposito: ");
        valor = input.nextFloat();
        banco.Deposito(valor);
        System.out.print("Quanto deseja retirar: ");
        valor = input.nextFloat();
        banco.Saque(valor);


    }
}