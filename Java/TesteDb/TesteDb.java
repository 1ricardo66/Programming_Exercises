import java.sql.Connection;
import java.sql.DriverManager;
public class TesteDb{
  public static void main (String [] args){

    Connection connection = null;

    try{
      connection = DriverManager.getConnection("teste.db");
      if ( connection == null ){
        System.out.println("Conexão bem feita");
      }

    }
    catch( Exception ex){
      System.out.println(ex.getClass().getName() + " : " + ex.getMessage());
      System.out.println("Erro");
    }

  }
}
