import javax.swing.JOptionPane;
public class Retorna{
    void result(String x,int n1,int n2){
      if (x.equals("A")){
        int total = n1+n2;
        JOptionPane.showMessageDialog(null,"Numeros Fornecidos: "+n1+" & "+n2+"\nOperação escolhida: Soma\nResultado da operação: "+total);
      }
      if (x.equals("B")){
        int total = n1-n2;
        JOptionPane.showMessageDialog(null,"Numeros Fornecidos: "+n1+" & "+n2+"\nOperação escolhida: Subtração\nResultado da operação: "+total);
      }
      if (x.equals("C")){
        int total = n1+n2;
        JOptionPane.showMessageDialog(null,"Numeros Fornecidos: "+n1+" & "+n2+"\nOperação escolhida: Multiplicação\nResultado da operação: "+total);
      }
      if (x.equals("D")){
        int total = n1+n2;
        JOptionPane.showMessageDialog(null,"Numeros Fornecidos: "+n1+" & "+n2+"\nOperação escolhida: Divisão\nResultado da operação: "+total);
      }

    }
}
