//Classe abstrata
export class Conta{
  constructor(saldoInicial, cliente, agencia){
    if(this.constructor == Conta){
      throw new Error('Você não deveria instanciar um objeto do tipo Conta diretamente, pois essa é uma classe abstrata.')
    }
    this._saldo = saldoInicial
    this._cliente = cliente
    this._agencia = agencia
  }
  //ASSESSORES
  set cliente(novoValor){
    if(novoValor instanceof Cliente){
      this._cliente = novoValor
    }
  }
  get cliente(){
    return this._cliente
  }
  get saldo(){
    return thie._saldo
  }
  //METODOS

  //método abstrato
  sacar(valor){
    throw new Error('O método sacar da Conta é abstrato.')
  }
  _sacar(valor, taxa){
    const valorSacado = taxa * valor
    if(this._saldo >= valorSacado){
      this._saldo -= valorSacado
      return valorSacado
    }
    return 0
  }
  depositar(valor){
    this._saldo += valor
  }
  transferir(valor, conta){
    const valorSacado = this.sacar(valor)
    conta.depositar(valorSacado)
  }
}
