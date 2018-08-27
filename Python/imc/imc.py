import sqlite3
class CallDb():
    def __init__(self):
        pass
    def criarDb(self,nome):
        """Verifica a conexão, caso não tenta nenhum db com esse nome ele cria um novo db"""
        try:
            self.conn = sqlite3.connect(nome)
            self.cursor = self.conn.cursor()
            self.cursor.execute("""
                CREATE TABLE USER (ID INTEGER PRIMARY KEY AUTOINCREMENT,
                                    NOME TEXT,
                                    SENHA TEXT,
                                    IDADE INT,
                                    ALTURA FLOAT,
                                    PESO FLOAT
                                    )
            """)

        except:
            pass


    def addUser(self,nome,senha,idade,altura,peso):
        self.conn = sqlite3.connect("teste.db")
        self.cursor = self.conn.cursor()
        self.lista = [nome,senha,idade,altura,peso]
        self.cursor.execute("""
        INSERT INTO USER (NOME,SENHA,IDADE,ALTURA,PESO)
        VALUES(?,?,?,?,?)
        """,self.lista)
        self.conn.commit()

"""conn = CallDb()
nome = input("Nome: ")
#print(conn.addUser().nome)
senha = input("Nome: ")
idade = input("Nome: ")
altura = input("Nome: ")
peso = input("Nome: ")
conn.addUser(nome,senha,idade,altura,peso)
"""
#conn = CallDb()
addUsuario = CallDb()
conn = sqlite3.connect("teste.db")
cursor = conn.cursor()
####Espaço para funções ###


def switcher(num):
    if(num==1):
        nome = input("Digite seu nome: ")
        senha = input("Digite sua senha: ")
        req_user = [nome,senha]
        request=("SELECT * FROM USER WHERE NOME = ? AND SENHA = ? ")
        cursor.execute(request,req_user)
        request = cursor.fetchall()
        if request:
            print(request)
        else:
            print("Erro")
            
    if(num==2):
        nome = input("Nome: ")
        senha = input("senha: ")
        idade = input("Idade: ")
        altura = input("Altura: ")
        peso = input("Peso: ")
        addUsuario.addUser(nome,senha,idade,altura,peso)






###
#Criar janela de opções

escolha = int(input("Você deseja: \n[1]Login\n[2]Registrar"))
switcher(escolha)
