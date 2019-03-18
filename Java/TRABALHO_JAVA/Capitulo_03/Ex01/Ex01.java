/*
	Usando JOptionPane, elabore uma classe que receba o valor de um produto e
  um código de desconto. O desconto deve ser calculado de acordo com o código
  fornecido conforme a Tabela 3.1.
*/

import javax.swing.JOptionPane;
public class Ex01{
  public static void main (String [] args){
      String aux,n;
      float valor;
      aux = JOptionPane.showInputDialog("Informe o valor do produto");
      valor = Float.parseFloat(aux);
      n = JOptionPane.showInputDialog("Informe o codigo do produto");

      switch (n){
        case "1":
          System.out.println("Valor: "+(valor*5)/100);
          JOptionPane.showMessageDialog(null,"Valor: "+(valor*5)/100);
        case "2":
          System.out.println("Valor: "+(valor*10)/100);
          JOptionPane.showMessageDialog(null,"Valor: "+(valor*10)/100);
        case "3":
          System.out.println("Valor: "+(valor*20)/100);
          JOptionPane.showMessageDialog(null,"Valor: "+(valor*20)/100);
        case "4":
          System.out.println("Valor: "+(valor*50)/100);
          JOptionPane.showMessageDialog(null,"Valor: "+(valor*50)/100);
      }
  }
}
