/*
Usando a classe JOptionPane para entrada de dados, elabore uma classe que
receba dois valores numéricos (v1 e v2) e apresente em tela o resultado
das quatro operações matemáticas básicas entre eles, ou seja, soma,
subtração, multiplicação e divisão.
*/

import javax.swing.JOptionPane;
public class Retorna{

  void resultado(int v1, int v2){
    int soma = v1+v2,  sub=v1-v2,  mult = v1*v2;
    float div = v1/v2;
    JOptionPane.showMessageDialog(null,"Soma: "+soma);
    JOptionPane.showMessageDialog(null,"Subtração: "+sub);
    JOptionPane.showMessageDialog(null,"Multiplicação: "+mult);
    JOptionPane.showMessageDialog(null,"Divisão: "+div);
  }

}
