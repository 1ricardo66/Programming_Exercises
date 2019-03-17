import java.util.Scanner;
import java.util.Random;
public class Vetores{

    public static void main (String [] args ){
        Scanner input = new Scanner(System.in); 
        Random rand = new Random();
        int quant,aux=0;
        try{
            System.out.print("Digite a quantidade de valores que você deja que seja ordenado: ");
            quant = input.nextInt();
            int vet[] = new int[quant];

            for(int i = 0 ; i < quant ; i++){
                vet[i] = rand.nextInt(30);
            }

            

            for(int i = 0; i<quant; i++){
                for(int j = 0; j<quant - 1; j++){
                    if(vet[j] > vet[j + 1]){
                        aux = vet[j];
                        vet[j] = vet[j+1];
                        vet[j+1] = aux;
                    }
                }
            }

            for(int i = 0 ; i < quant ; i++){
                System.out.print("| "+vet[i]+" | - ");
            }
            System.out.print("\n");

            
        }catch(Exception e){
            System.out.print("Errou");
        }



    }
}