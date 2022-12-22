//classe 01
class Cliente{
  nome
  _cpf

  get cpf(){
    return this._cpf
  }

  constructor(nome, cpf){
    this.nome = nome
    this._cpf = cpf
  }
}
//classe 02
class ContaCorrente{
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

  constructor(cliente, agencia){
    this.agencia = agencia
    this.cliente = cliente
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
const cliente1 = new Cliente("Ricardo", 11122233309)
//cliente-02
const cliente2 = new Cliente("Alice", 88822233309)

//conta 01
const contaCorrenteRicardo = new ContaCorrente(cliente1, 1001)
contaCorrenteRicardo.depositar(500)
// const valorSacado = contaCorrenteRicardo.sacar(50)
//conta 02
const conta2 = new ContaCorrente(cliente2, 1002)

//Transferência de R$200 da conta do Ricardo para
//a conta da Alice
let valor = 200
contaCorrenteRicardo.transferir(valor, conta2)

console.log('-----------------------------------')
console.log(cliente1)
console.log(contaCorrenteRicardo)
console.log(cliente2)
console.log(conta2)
