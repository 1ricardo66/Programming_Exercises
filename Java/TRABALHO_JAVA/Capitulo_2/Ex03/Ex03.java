import javax.swing.JOptionPane;
/*
Usando a classe JOptionPane para entrada de dados, elabore uma classe que 
realize o cálculo do peso ideal. O peso ideal é dado pelo IMC 
(Índice de Massa Corporal).
*/
public class Ex03{
    public static void main(String [] args){
        Imc imc = new Imc();
        String aux1, aux2;
        float result,peso,altura;
        aux1 = JOptionPane.showInputDialog("Informe o peso ");
        aux2 = JOptionPane.showInputDialog("Informe a altura ");
        peso = Float.parseFloat(aux1);
        altura = Float.parseFloat(aux2);
        result = peso / altura*altura;
        imc.ResultadoIMC(result);
    }
}