public class Banco{
    float saldo=0;

    
    void Deposito(float valor){
        this.saldo+=valor;
        Retorna();
    }
    
    void Saque(float valor){
        float dinheiro = this.saldo-=valor;
        if(dinheiro < 0){
            System.out.println("Você não pode retirar essa quantia");
            Retorna();
        }else{
            this.saldo = dinheiro;
            Retorna();
        }
    }
            void Retorna(){
               System.out.println("Você tem \nR$"+this.saldo);
           }
}