class Cliente{
  nome
  cpf
}

class ContaCorrente{
  //atributos
  agencia
  _cliente
  _saldo = 0
  // acessores
  set cliente(novoValor){
    if(novoValor instanceof Cliente){
      this._cliente = novoValor
    }
  }
  //somente leitura
  get cliente(){
    return this._cliente
  }
  get saldo(){
    return this._saldo
  }


  //MÉTODOS
  sacar(valor){
    if(this._saldo >= valor){
      this._saldo -= valor
      return valor
    }
  }
  depositar(valor){
    if(valor <= 0){
      return
    }
    this._saldo += valor
  }
  transferir(valor, conta){
    const valorSacado = this.sacar(valor)
    conta.depositar(valorSacado)
  }
}



//cliente-01
const cliente1 = new Cliente()
cliente1.nome = "Ricardo"
cliente1.cpf = 11122233309

const contaCorrenteRicardo = new ContaCorrente()
contaCorrenteRicardo.agencia = 1001
contaCorrenteRicardo.cliente = cliente1
contaCorrenteRicardo.depositar(500)
// const valorSacado = contaCorrenteRicardo.sacar(50)

//cliente-02
const cliente2 = new Cliente()
cliente2.nome = "Alice"
cliente2.cpf = 88822233309

const conta2 = new ContaCorrente()
conta2.cliente = cliente2
conta2.agencia = 1002

//Transferência de R$200 da conta do Ricardo para
//a conta da Alice
let valor = 200
contaCorrenteRicardo.transferir(valor, conta2)

//cliente-03
const cliente3 = new Cliente()
cliente3.nome = "Nícolas"
cliente3.cpf = 11188844499

const conta3 = new ContaCorrente()
conta3.cliente = cliente3
conta3.agencia = 1001
//depositando valor na conta do Nícolas
conta3.depositar(300000)
//trasnferindo para Ricardo
conta3.transferir(3220, contaCorrenteRicardo)
conta3.transferir(2200, conta2)

console.log('-----conta 01-----')
console.log('Nome: '+ cliente1.nome)
console.log('CPF: '+ cliente1.cpf)
console.log('Agência: '+ contaCorrenteRicardo.agencia)
console.log('Saldo: R$'+ contaCorrenteRicardo.saldo)
//--------------------------------------------------
console.log('-----conta 02-----')
console.log('Nome: '+ cliente2.nome)
console.log('CPF: '+ cliente2.cpf)
console.log('Agência: '+ conta2.agencia)
console.log('Saldo: R$'+ conta2.saldo)
//--------------------------------------------------
console.log('-----conta 03-----')
console.log('Nome: '+cliente3.nome)
console.log('CPF: '+cliente3.cpf)
console.log('Agência: '+conta3.agencia)
console.log('Saldo: R$'+conta3.saldo)


console.log('--Saldos:--')
console.log('Saldo do '+ cliente1.nome +': R$'+ contaCorrenteRicardo.saldo)
console.log('Saldo da '+ cliente2.nome +': R$'+ conta2.saldo)
console.log('Saldo do '+ cliente3.nome +': R$'+ conta3.saldo)

console.log('-----------------------------------')
console.log(contaCorrenteRicardo)
console.log(conta2)
console.log(conta3)
