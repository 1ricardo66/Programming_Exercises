import javax.swing.JOptionPane;
public class Ex03{
  public static void main (String [] args){
    Retorna retorna = new Retorna();
    String letra,aux1,aux2;
    int n1,n2;

    letra = JOptionPane.showInputDialog("Operação desejada\n'A' Soma\n'B' Subtração\n'C' Multiplicação\n'D' Divisão");
    aux1 = JOptionPane.showInputDialog("Digite N1");
    n1 = Integer.parseInt(aux1);
    aux2 = JOptionPane.showInputDialog("Digite N2");
    n2 = Integer.parseInt(aux2);

    retorna.result(letra,n1,n2);



  }
}
