public class Retorna{
  void ret(){
    int soma=0;
    for(int i = 0 ; i <=999 ; i++){
      if(i%2!=0){
        soma+=i;
      }
    }
    System.out.println("Total: "+soma);
  }
}
