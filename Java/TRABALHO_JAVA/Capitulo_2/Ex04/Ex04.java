/*
Usando a classe JOptionPane para entrada de dados, elabore uma classe que
receba dois valores numéricos (v1 e v2) e apresente em tela o resultado
das quatro operações matemáticas básicas entre eles, ou seja, soma,
subtração, multiplicação e divisão.
*/
import javax.swing.JOptionPane;
public class Ex04{
  public static void main (String [] args){
    Retorna retorna = new Retorna();
    String aux1,aux2;
    int v1,v2;

    aux1 = JOptionPane.showInputDialog("Informe N1");
    v1 = Integer.parseInt(aux1);
    aux2 = JOptionPane.showInputDialog("Informe N2");
    v2 = Integer.parseInt(aux2);

    retorna.resultado(v1,v2);
  }
}
