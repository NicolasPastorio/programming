//classe Cliente
class Cliente{
  //atributos da classe
  nome
  cpf
}

class ContaCorrente{
  agencia
  saldo
  //Uma função dentro de uma classe se chama método
  sacar(valor){
    if(this.saldo >= valor){
      this.saldo -= valor
    }
  }
  depositar(valor){
    if(valor > 0){
      this.saldo += valor
    }
  }
}

//instância(objeto) da classe
const cliente1 = new Cliente()
//acrescentando valores aos atributos
//da instância cliente1
cliente1.nome = "Ricardo"
cliente1.cpf = 11122233309

const contaCorrenteRicardo = new ContaCorrente()
contaCorrenteRicardo.saldo = 0
contaCorrenteRicardo.agencia = 1001

//--Depositando na conta corrente do Ricardo--
contaCorrenteRicardo.depositar(100)
//----Sacando da conta corrente do Ricardo----
contaCorrenteRicardo.sacar(50)
//--------------------------------------------
console.log(cliente1)
console.log(contaCorrenteRicardo)
