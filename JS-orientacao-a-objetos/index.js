import {Cliente} from './Cliente.js'
import {ContaCorrente} from './ContaCorrente.js'

//cliente-01
const cliente1 = new Cliente("Ricardo", 11122233309)
//cliente-02
const cliente2 = new Cliente("Alice", 88822233309)

//conta 01
const contaCorrenteRicardo = new ContaCorrente(cliente1, 1001)
//conta 02
const conta2 = new ContaCorrente(cliente2, 1002)

contaCorrenteRicardo.depositar(500)
//Transferência de R$200 da conta do Ricardo para
//a conta da Alice
let valor = 200
contaCorrenteRicardo.transferir(valor, conta2)

console.log(contaCorrenteRicardo)
console.log(conta2)
console.log('O banco possui '+ ContaCorrente.numeroDeContas +' contas')
