const numeros = [43, 50, 65, 12]

//reduce.(função callback, acumulador)
//função callback(valor acumulado, valor atual)
const soma = numeros.reduce((acc, atual) => atual + acc, 0)

const soma1 = numeros.reduce(function(acc, atual){
  return atual + acc
}, 0)

function operacaoNumerica(acc, atual){
  return atual + acc
}

const soma2 = numeros.reduce(operacaoNumerica, 0)

console.log(soma)
console.log(soma1)
console.log(soma2)
