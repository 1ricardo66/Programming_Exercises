import javax.swing.JOptionPane;
public class Retorna{
  void maior(int[] vt){
  int aux,m;
  for(int i = 0; i<vt.length; i++){
        for(int j = 0; j<vt.length - 1; j++){
            if(vt[j] > vt[j + 1]){
                aux = vt[j];
                vt[j] = vt[j+1];
                vt[j+1] = aux;
            }
        }
    }
    m = vt.length-1;
    JOptionPane.showMessageDialog(null,"Menor Idade: "+vt[0]+"\nMaior Idade: "+vt[m]);

  }
}
