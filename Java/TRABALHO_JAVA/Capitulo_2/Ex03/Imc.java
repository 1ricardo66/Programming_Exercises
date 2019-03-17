import javax.swing.JOptionPane;
public class Imc{
    
     void ResultadoIMC(float peso){
        if(peso < 18.5){
            JOptionPane.showMessageDialog(null,"imc abaixo do normal");
        }
        else if(peso > 18.5 || peso < 24.4){
            JOptionPane.showMessageDialog(null,"imc Normal");
        }
        else if(peso > 18.5 || peso < 29.9){
            JOptionPane.showMessageDialog(null,"Pré-Obesidade");
        }
        else if(peso > 29.9 || peso < 34.9){
            JOptionPane.showMessageDialog(null,"Obesidade Classe |");
        }
        else if(peso > 34.9 || peso < 39.9){
            JOptionPane.showMessageDialog(null,"Obesidade Classe || (Severa)");
        }
        else{
            JOptionPane.showMessageDialog(null,"Obesidade Classe ||| (Mórbida)");
        }
    }
}