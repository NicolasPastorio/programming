class Cliente{
  nome
  cpf
}

class ContaCorrente{
  agencia
  //#saldo = 0
  // https://github.com/tc39/proposal-class-fields#private-fields
  _saldo = 0
  sacar(valor){
    if(this._saldo >= valor){
      this._saldo -= valor
    }
  }
  depositar(valor){
    if(valor > 0){
      this._saldo += valor
    }
  }
}

const cliente1 = new Cliente()
cliente1.nome = "Ricardo"
cliente1.cpf = 11122233309

const cliente2 = new Cliente()
cliente2.nome = "Alice"
cliente2.cpf = 88822233309

const contaCorrenteRicardo = new ContaCorrente()
contaCorrenteRicardo.agencia = 1001

//saque
contaCorrenteRicardo.depositar(100)
//depósito
contaCorrenteRicardo.sacar(50)

console.log(contaCorrenteRicardo)
